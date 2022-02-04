#include <stdint.h>
#include <stdio.h>




template<class T>
class vector
{

    private:



    public:
        uint32_t vector_size;  
        T* vector_element;
        vector();
        void push_back(T value);   
        uint32_t capacity(void); 
        void reserve(uint32_t value);
        void push_back(T value);
        T& operator[](uint32_t value);
        void operator=(T param);




};
