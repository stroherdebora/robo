#include "T8001990.h"
#include <iostream>


T8001990::T8001990()
{

}

T8001990::T8001990(string value)
{
    name = value;
}

string T8001990::getName()
{
    return name;
}

string T8001990::getPrograma()
{
    programa = "Rick and Morty";
    return programa;
}

string T8001990::getMestre()
{
    mestre = "Mestre Anciao";
    return mestre;
}

T8001990::~T8001990()
{
    
}