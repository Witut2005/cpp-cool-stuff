

#include <iostream>
#include "./vector.cpp"


int main(void)
{


    vector<double> lol2;

    for(int h = 0; h < 10; h++)
        lol2.push_back(h);


    lol2.pop_back();

    for(int i = 0; i < lol2.size(); i++)
        std::cout << lol2[i] << std::endl;

    return 0;

}
