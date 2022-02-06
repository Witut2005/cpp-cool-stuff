
#include <vector>
#include <stdio.h>

int main(void)
{


    std::vector<int> wektor;
    wektor.reserve(10);


    for(int i = 0; i < 10; i++)
        wektor[i] = i;

    for(int i = 0; i < wektor.size(); i++)
        printf("%d ", wektor[i]);


    printf("\n");
        
}
