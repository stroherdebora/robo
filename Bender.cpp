#include "Bender.h"
#include <iostream>


Bender::Bender()
{
    cout << "construtor Bender" << endl;
}

Bender::Bender(string nomezinho)
{
    name = nomezinho;
}

string Bender::getName()
{
    return name;
}

string Bender::getPrograma()
{
    programa = "Bobby's World";
    return programa;
}

bool Bender::getChoice()
{
    return false;
}

string Bender::getMestre()
{
    if(choice == true)   
    {  
        mestre = "Eu nao tenho mestre";
        getChoice();
    }

    else if(choice == false)
        mestre = "Eu gosto muito de jogos"; 

    return mestre;
}

bool Bender::dobrarBarras()
{
    return true;
}

bool Bender::problemas()
{
    return true;
}

Bender::~Bender()
{
    
}