

#include <iostream>
#include "./vector.cpp"


int main(void)
{


    vector<float> lol2;


    for(int i=0; i < 10; i++)
        lol2.push_back(i);

    for(int i = 0; i < lol2.size(); i++)
        std::cout << lol2[i] << std::endl;


    cout << "vector start address: " << lol2.begin() << std::endl;
    cout << "vector end address: " << lol2.end() << std::endl;

    return 0;

}
