#pragma once

#include <string>

class Bull  {
    public:
        Bull(int weight, int liftcapacity, std::string name);
    
    public: 
        std::string to_string(void);
    private:
        std::string name;
        int liftcapacity;
        int weight;


};
