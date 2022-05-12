#pragma once

#include <iostream>
#include <vector>
#include "robo.h"

using namespace std;


class T1000:public Robo
{
    public:
        T1000();
        T1000(string nomezinho);
        ~T1000();
        
        string getName();
        string getPrograma();
        string getMestre();
        

        template <typename T>
            T soma(T x, T y)
            {
                return x + y; 
            } 
                                
};


