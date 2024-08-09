#include "Serializer.hpp"

Serializer::Serializer(const Serializer &serializer){
    *this = serializer;
}

Serializer &Serializer::operator=(const Serializer &Serializer){
    (void)Serializer;
    return(*this);
}

//reinterpret_cast serve per i cast tipi non correlati

uintptr_t   Serializer::serializer(Data *ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
    return(reinterpret_cast<Data *>(raw));
}

