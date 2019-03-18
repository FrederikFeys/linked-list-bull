#include "linkedList.h"


std::string LinkedList::to_string(){
    std::string builder;
    Node * node = this->head;
    while(node != nullptr){
        builder = builder + std::to_string(node->get_data());
        node = node->get_next();
    }
    return builder;
}

Node * LinkedList::get(int index){
    Node * node = this->head;
    for(int i =0; i < index + 1; i++) {
        if (index == i + 1) {
            return node;
        }
        node = node->get_next();
    }
    return NULL;
}

void LinkedList::add(int data) {
    Node *node = new Node(data);
    
}