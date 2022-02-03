
#include <iostream>

class test
{

    public:

        int x;
    
        int operator+(test& other) const
        {
            return x + other.x;
        }

        void operator=(int other) 
        {
            x = other;
        }

};



int main(void)
{
    test a;
    test b;

    a.x = 10;
    b.x = 20;

    std::cout << a + b << std::endl;

    a = a + b;

    std::cout << a.x << " " << b.x << std::endl;

    std::cout << &a << " " << &b << std::endl;


}