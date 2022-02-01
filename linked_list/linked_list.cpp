
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

    

linked_list::linked_list()
{
    node = (node_t*)malloc(sizeof(node_t));
    node->value = 0;
    elements_counter = 0x0;
    elements_counter++;
}

node_t* linked_list::insert(uint32_t where, uint32_t value)
{

   
    if(!where)
    {

        node[]

    }

    node = (node_t*)realloc(node, sizeof(node_t) * (elements_counter + 1));
    
    elements_counter++;

    node[where].value = value;

    node[where].next = &node[elements_counter];

    return &node[elements_counter];
        
}

node_t* linked_list::push_back(uint32_t value)
{

    node = (node_t*)realloc(node, sizeof(node_t) * (elements_counter + 1));
    elements_counter++;


    node[elements_counter].value = value;

    return node;

}

uint32_t linked_list::get_node_value(uint32_t index)
{
    return node[index].value;
}

void linked_list::set_node_value(uint32_t index, uint32_t value)
{
    node[index].value = value;
}


node_t* linked_list::get_head_address(void)
{
    return &node[0];
}

uint32_t linked_list::get_last_value(void)
{
    return node[elements_counter].value;
}


