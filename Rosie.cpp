#include "Rosie.h"
#include <iostream>


Rosie::Rosie()
{
    
}

Rosie::Rosie(string nomezinho)
{
    name = nomezinho;
}

string Rosie::getName()
{
    return name;
}

string Rosie::getPrograma()
{
    programa = "Hora de Aventura";
    return programa;
}

string Rosie::getMestre()
{
    mestre = "Mestre Yoda";
    return mestre;
}

bool Rosie::limpar()
{
    return true;
}

bool Rosie::cozinhar()
{
    return false;
}

Rosie::~Rosie()
{
    
}