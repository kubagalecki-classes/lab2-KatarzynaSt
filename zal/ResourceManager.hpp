#pragma once
#include <iostream>
#include "Resource.hpp"

class ResourceManager
{
private:
Resource *x;
public:
ResourceManager() { std::cout << "Domyslny konstruktor." << std::endl; }
    double get() 
    {
        return x->get();
    }

    ResourceManager (const ResourceManager& K) { std::cout << "Skopiowany ResourceManager" << std::endl;}
    ~ResourceManager() { std::cout << "Zniszczony ResourceManager" << std::endl; }
};