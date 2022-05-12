#pragma once

#include <iostream>
#include <vector>
#include "robo.h"

using namespace std;


class Bender:public Robo
{
    public:
        Bender();
        Bender(string nomezinho);
        ~Bender();

        string getName();
        string getPrograma();
        string getMestre();
        bool getChoice();
        bool dobrarBarras();
        bool problemas();

        template <typename T, typename U, typename Z>
            string retorna(T x, U y, Z z)
            {
                return z; 
            } 

    private:
        bool choice = true;
};
