#pragma once

#include <iostream>

using namespace std;

class Robo
{
    public:
        Robo();
        virtual ~Robo(); //Robo não é polimórfica, add virtual
        

    protected:
        string name;
        string programa;
        string mestre;
    
    private:
};

