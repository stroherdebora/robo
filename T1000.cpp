#include "T1000.h"
#include <iostream>


T1000::T1000()
{

}

T1000::T1000(string nomezinho)
{
    name = nomezinho;
}

string T1000::getName()
{
    return name;
}

string T1000::getPrograma()
{
    programa = "The simpsons";
    return programa;
}

string T1000::getMestre()
{
    mestre = "Mestre Kame";
    return mestre;
}

T1000::~T1000()
{
    
}