#pragma once

#include <iostream>
#include <cstdint>

class Serializer
{
    public:
    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);

};