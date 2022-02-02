
#include "linked_list.cpp"

int main(void)
{

    linked_list a(0x10);

    a.head = a.entry[0];

    a.push_back(0x20);
    a.push_back(0x30);
    
    a.push_front(17);

    printf("nodes: \n");

    a.print_list();

}
