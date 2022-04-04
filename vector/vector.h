#include <stdint.h>
#include <stdio.h>

template<class T>
class vector
{

    private:



    public:
        uint32_t vector_size;  
        uint32_t vector_allocated_memory;

        T* vector_last_element;
        
        bool* is_used;
        T* value_array;        

        vector();
        void push_back(T value);   
        void pop_back(void);
        
        T* begin(void);
        T* rbegin(void);
        T* end(void);
        T* rend(void);
        
        T& front(void);
        T& back(void);

        uint32_t capacity(void); 
        void reserve(uint32_t value);
        uint32_t size(void);
        T& operator[](uint32_t value);
        bool empty(void);
        
        T& at(uint32_t index);

        void operator=(T param);
        bool operator==(vector<T> param);
        bool operator!=(vector<T> param);



};
