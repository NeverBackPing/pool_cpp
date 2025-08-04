#pragma once 

#include <iostream>

template <typename T,  typename F>
void iter(T* addr, size_t len, F func)
{
    for (size_t i = 0; i < len; ++i)
        func(addr[i]);
}

template <typename T>
void MulToTwo(T& x)
{ 
     x *= 2;
}

template <typename T>
void strcat(T& src)
{
    std::cout << src << " ";
}

template <typename T>
void CharToUpper(T& src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        src[i] = std::toupper(src[i]);
        i++;
    }
}