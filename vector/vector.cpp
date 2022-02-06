

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
    if(!vector_element[index].is_used)
        vector_element[index].value = 0x0;
        
        return vector_element[index].value;
}


template<class T>
void vector<T>::operator=(T param)
{
    vector_element.value = param;
}

template<class T>
void vector<T>::reserve(uint32_t value)
{
    vector_element = (vector_entry<T>*)realloc(vector_element, sizeof(T) * value);
    vector_allocated_memory = value;
}

template<class T>
void vector<T>::push_back(T value)
{
    vector_element[vector_size].value = value;   
    vector_element[vector_size].is_used = true;

    printf("%d\n", vector_element[vector_size].value);

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
   vector_element[vector_size-1].is_used = false;
   vector_size--;
}








