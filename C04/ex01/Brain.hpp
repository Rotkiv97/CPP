#pragma once

#include <iostream>
#include <string>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &Brain);
        Brain &operator=(const Brain &Brain);
        ~Brain();
};