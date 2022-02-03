

#include "./vector.h"
#include <iostream>
#include <typeinfo>

using namespace std;


template <typename G> std::string type_name();



template<class T>
vector<T>::vector()
{

    vector_size = 0x0;

    int haha;

    std::cout << type_name<decltype(haha)>() << '\n';
}

template<class T>
void vector<T>::operator[](uint32_t value)
{
    //printf("%d",vector_element[value]);
}


template<class T>
void vector<T>::push_back(T value)
{
    printf("%d",value);
}

template<class T>
void vector<T>::reserve(uint32_t value)
{
    printf("%d",value);
}


template<class T>
uint32_t vector<T>::capacity()
{
    return sizeof(T);
}

