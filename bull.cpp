#include "bull.h"

Bull::Bull(int weight, int liftcapacity, std::string name) {

    this->name = name;
    this->liftcapacity = liftcapacity;
    this->weight = weight;
}

std::string Bull::to_string(void) {
    return "Bull details weight: " + std::to_string(weight) + " kg. Liftcapacity: " +std::to_string(liftcapacity) + " kg. Name: " + name +".";
}