#include <iostream>
#include "bull.h"
#include "node.h"

using namespace std;

void print(Node *node) {
    while(node != nullptr){
        cout << node->get_data() <<endl;
        node = node->get_next();
    }
    
}

int main() {

    Bull giant(2000,1000, "Giant");
    Bull manitou(5000,3000, "Manitou");


    cout << giant.to_string() <<endl;
    cout << manitou.to_string() <<endl;

    Node start(0);
    Node second(1);
    Node last (2);

    second.set_next(&last);
    start.set_next(&second);

    print(&start);
    

}