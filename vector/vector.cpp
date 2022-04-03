

#include "./vector.h"
#include <iostream>
#include <typeinfo>

using namespace std;


template<class T>
vector<T>::vector()
{
    vector_element = new vector_entry<T>;
    vector_size = 0x0; 
    //vector_last_element = vector_element;
}

template<class T>
T& vector<T>::operator[](uint32_t index)
{
    if(vector_element[index].is_used == false)
    {
        vector_element[index].value = 0;
    }
    return this->vector_element[index].value;
}


template<class T>
void vector<T>::operator=(T param)
{
    vector_element.value = param;
}

template<class T>
bool vector<T>::operator==(vector<T> param) 
{
    for(int i = 0; i < this->size(); i++)
        if(vector_element[i].value != param[i])
        {
            cout << "1. " << vector_element[i].value << endl;
            cout << "2. " << param[i] << endl;
            return false;
        }
            

    return true;
}

template<class T>
void vector<T>::reserve(uint32_t value)
{
    vector_element = (vector_entry<T>*)realloc(vector_element, sizeof(vector_entry<T>) * value);
    vector_allocated_memory = value;
}

template<class T>
void vector<T>::push_back(T value)
{

    this->vector_element[vector_size].is_used = true;
    this->vector_element[vector_size].value = value;   

    //printf("%ld\n", vector_element[vector_size].value);

    this->vector_last_element++;
    this->vector_size++;

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
   vector_element[vector_size-1].is_used = false;
   vector_size--;
}








