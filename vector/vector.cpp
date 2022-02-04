

#include "./vector.h"
#include <iostream>
#include <typeinfo>

using namespace std;


template<class T>
vector<T>::vector()
{
    vector_element = new uint64_t;
    vector_size = 0x1;
    *vector_element = 0x20;
}

template<class T>
T& vector<T>::operator[](uint32_t value)
{
    return vector_element[value];
}


template<class T>
void vector<T>::operator=(T param)
{
    vector_element[0] = param;
}


template<class T>
void vector<T>::push_back(T value)
{
    printf("%d",value);
}

template<class T>
void vector<T>::reserve(uint32_t value)
{
    vector_element = (T*)realloc(vector_element, sizeof(T) * value);
    vector_size = value;
}

template<class T>
void vector<T>::push_back(T value)
{

    

}

template<class T>
uint32_t vector<T>::capacity(void)
{
    return vector_size;
}

