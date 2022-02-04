
#include "./vector.cpp"


int main(void)
{

    vector<uint64_t> lol;
    vector<uint64_t> lol2;

   
    lol.reserve(10);
    lol2.reserve(10);

    lol[1] = 0x10;

    for(int i = 0; i < 10; i++)
    {
        lol[i] = i * 10;
    }

    for(int i = 0; i < 10; i++)
    {
        std::cout << lol[i] << std::endl;
    }

    std::cout << "yout vector capacity:" << std::endl;
    std::cout << lol.capacity() << std::endl;

    return 0;

}
