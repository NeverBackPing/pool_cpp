#pragma once

# include <string>
# include <cstdlib>
# include <ctime>
# include <stdint.h>
# include <iostream>

struct Data 
{ 
    int value; 
};

class Serializer
{
    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        Serializer();
};