#pragma once

#include <iostream>
#include <vector>
#include "robo.h"

using namespace std;


class Rosie:public Robo
{
    public:
        Rosie();
        Rosie(string nomezinho);
        ~Rosie();
        
        string getName();
        string getPrograma();
        string getMestre();
        bool limpar();
        bool cozinhar();
                
        template<typename T>
            T funcaozinha(vector<T> const& vetorzinho) 
            {
                T maior = 0;

                for (int i=0; i<vetorzinho.size(); i++)
                    maior = (vetorzinho[i]>maior)? vetorzinho[i] : maior;
            
                return maior;
            } 

    protected:

    private:        
};

