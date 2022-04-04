

#include "./vector.h"
#include <iostream>
#include <typeinfo>

using namespace std;


template<class T>
vector<T>::vector()
{
    //vector_element = new vector_entry<T>;
    
    value_array = new T;
    is_used = new bool;

    vector_size = 0; 
    vector_allocated_memory = 0;
    //vector_last_element = vector_element;
}

template<class T>
T& vector<T>::front(void)
{
    return value_array[0];
}

template<class T>
T& vector<T>::back(void)
{
    return value_array[vector_size - 1];
}

template<class T>
T& vector<T>::operator[](uint32_t index)
{
    if(is_used[index] == false)
        is_used[index] = 0;    

    return value_array[index];
}


template<class T>
void vector<T>::operator=(T param)
{
    value_array = param;
}

template<class T>
bool vector<T>::operator==(vector<T> param) 
{
    for(int i = 0; i < this->size(); i++)
        if(value_array[i]!= param[i])
        {
            return false;
        }
    return true;
}

template<class T>
bool vector<T>::operator!=(vector<T> param) 
{
    for(int i = 0; i < this->size(); i++)
        if(value_array[i]!= param[i])
        {
            return true;
        }
    return false;
}

template<class T>
T* vector<T>::begin(void)
{
    return &value_array[0];
}

template<class T>
T* vector<T>::rend(void)
{
    return &value_array[0];
}

template<class T>
T* vector<T>::end(void)
{
    return &value_array[vector_size];
}

template<class T>
T* vector<T>::rbegin(void)
{
    return &value_array[vector_size];
}


template<class T>
bool vector<T>::empty(void)
{
    return is_used[0];   
}

template<class T>
T& vector<T>::at(uint32_t index)
{
    return value_array[index];
}

/* reserve fix */
template<class T>
void vector<T>::reserve(uint32_t value)
{
    
    is_used = (bool*)realloc(is_used, sizeof(bool) * value);
    value_array = (T*)realloc(value_array, sizeof(T) * value);

    vector_allocated_memory = value;
}

template<class T>
void vector<T>::push_back(T value)
{

    if(vector_allocated_memory <= vector_size)
    {
        vector_allocated_memory++;
        
        is_used = (bool*)realloc(is_used, sizeof(bool) * vector_allocated_memory);
        value_array = (T*)realloc(value_array, sizeof(T) * vector_allocated_memory);
    
    }

    value_array[vector_size] = value;
    is_used[vector_size] = true;

    vector_last_element++;
    vector_size++;

}

template<class T>
uint32_t vector<T>::capacity(void)
{
    return vector_allocated_memory;
}


template<class T>
uint32_t vector<T>::size(void)
{
   return vector_size; 
}

template<class T>
void vector<T>::pop_back(void)
{
   is_used[vector_size-1] = false;

   vector_size--;
}








