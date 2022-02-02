
#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

    

linked_list::linked_list(uint32_t value)
{

    entry.reserve(10);


    entry.push_back(new node_t);

    head = entry[0];

    head->next = nullptr;
    head->value = value;

    elements_counter = 0x1;  

}

node_t* linked_list::insert(uint32_t where, uint32_t value)
{

    elements_counter++;

    //entry.push_back(nullptr);// = (node_t*)realloc(node, sizeof(node_t) * (elements_counter));
    
    entry[where]->value = value;

    entry[where]->next = entry[where + 1];

    return entry[elements_counter];
        
}

void linked_list::push_back(uint32_t value)
{

    node_t* tmp = new node_t;

    entry[elements_counter - 1]->next = tmp;

    tmp->value = value;
    tmp->next = nullptr;

    entry.push_back(tmp);

    elements_counter++;

}

uint32_t linked_list::get_node_value(uint32_t index)
{
    return entry[index]->value;
}

void linked_list::set_node_value(uint32_t index, uint32_t value)
{
    entry[index]->value = value;
}


node_t* linked_list::get_head_address(void)
{
    return entry[0];
}

uint32_t linked_list::get_last_value(void)
{
    return entry[elements_counter]->value;
}


uint32_t linked_list::size(void)
{
    return elements_counter;
}

void linked_list::set_head(uint32_t value)
{
    entry[0]->value = value;
}


void linked_list::insert_at_head(uint32_t value)
{
    node_t* tmp = new node_t;
    
    node_t* head_tmp = head;

    head = tmp;
    head->value = value;



    head->next = head_tmp;



}

void linked_list::push_front(uint32_t value)
{
    node_t* tmp = new node_t;
    
    node_t* head_tmp = head;

    head = tmp;
    head->value = value;



    head->next = head_tmp;



}

void linked_list::print_list(void)
{
    node_t* i;




    for(i = head; i->next != nullptr; i = i->next)
        printf("%d ", i->value);

    printf("%d\n",i->value);

}