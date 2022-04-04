

#include <iostream>
#include <stdio.h>
#include "./vector.cpp"


int main(void)
{
    vector<uint16_t> lol1;
    vector<uint16_t> lol2;

    lol1[1234] = 1234;

    for(int i = 0; i < 5; i++)
        lol2.push_back(i);

    for(int i = 0; i < 5; i++)
        lol1.push_back(i);

    cout << "First vector values: " << endl;
    for(auto& a : lol1)
        cout << a << endl;

    cout << "Second vector values: " << endl;
    for(auto& a : lol2)
        cout << a << endl;

    lol1.reserve(10);

    printf("First vector capacity: %d\n", lol1.capacity());
    printf("Second vector capacity: %d\n", lol2.capacity());
    
    return 0;

}
