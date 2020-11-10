#pragma once
#include <iostream>
#include "Resource.hpp"

class ResourceManager
{
public:

    ResourceManager() 
    {
      x = new Resource;
    }

    double get()
    {
        return x->get();
    }

    ResourceManager(ResourceManager&& konstrPrzeno) 
    {
        x   = konstrPrzeno.x;
        konstrPrzeno.x = nullptr;
    }

    ResourceManager& operator=(ResourceManager&& operPrzeno) 
    {
        if (&operPrzeno == this)
            return *this;
        delete x;
        x       = operPrzeno.x;
        operPrzeno.x = nullptr;
        return *this;
    }

ResourceManager(const ResourceManager& KonstrKop)  
    {
        x = new Resource;
        *x = *KonstrKop.x;
    }

    ResourceManager& operator=(const ResourceManager& OperPrzyp) 
    {
        if (this != &OperPrzyp)
            *x= *OperPrzyp.x;
        return *this;
    }

         ~ResourceManager()  
    {
      delete x;
    }

    private:
    Resource *x;

};