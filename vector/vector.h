#include <stdint.h>
#include <stdio.h>


template<class T>
struct vector_entry
{
    T value;
    bool is_used;
};


template<class T>
class vector
{

    private:



    public:
        uint32_t vector_size;  
        uint32_t vector_allocated_memory;

        vector_entry<T>* vector_element;
        vector_entry<T>* vector_last_element;
        

        vector();
        void push_back(T value);   
        void pop_back(void);
        vector_entry<T>* begin(void);
        vector_entry<T>* end(void);
        uint32_t capacity(void); 
        void reserve(uint32_t value);
        uint32_t size(void);
        T& operator[](uint32_t value);
        void operator=(T param);
        bool operator==(vector<T> param);



};
