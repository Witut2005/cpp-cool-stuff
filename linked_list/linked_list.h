#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

struct node_t
{
    uint32_t value;
    struct node_t* next;
};

typedef struct node_t node_t;

class linked_list
{

    public:
    node_t* node;

    uint32_t elements_counter;


    linked_list();

    node_t* insert(uint32_t where,uint32_t value);

    node_t* push_back(uint32_t value);

    uint32_t get_node_value(uint32_t index);

    void set_node_value(uint32_t index, uint32_t value);

    node_t* get_head_address(void);

    uint32_t get_last_value(void);

};
