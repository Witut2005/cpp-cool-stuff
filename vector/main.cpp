
#include "./vector.cpp"


int main(void)
{

    vector<uint64_t> lol;
    vector<uint64_t> lol2;

   
    lol.reserve(10);
    lol2.reserve(10);

    lol.push_back(0x10);
    lol.push_back(0x20);

    lol[1] = 0x30;
    
    lol.pop_back();

    printf("vector size: %d\n", lol.size());



    std::cout << "\nyout vector capacity:" << std::endl;
    std::cout << lol.capacity() << std::endl;

    return 0;

}
