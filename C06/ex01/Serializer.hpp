#pragma once

#include <iostream>
#include <string>
#include <cmath>
#include <limits>
#include <stdint.h>


typedef struct s_Data
{
    std::string a;
    uintptr_t i;
} Data;

class Serializer
{

    private:
        Serializer();
        Serializer(const Serializer &Serializer);
        Serializer &operator=(const Serializer &Serializer);
        ~Serializer();
    
    public:
        static uintptr_t serializer(Data *ptr);//reinterpred_cast
        static Data* deserialize(uintptr_t raw);
};
