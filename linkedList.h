#pragma once

#include "node.h"
#include <string>

class LinkedList  {
    public:
        Node * get(int index);
        std::string to_string();
        void add(int data);
    
    private:
        Node * head = nullptr;
        Node * tail = nullptr;





};