#pragma once

#include <iostream>
#include <vector>
#include "robo.h"

using namespace std;


class T8001990:public Robo
{
    public:
        T8001990();
        T8001990(string value);
        ~T8001990();
        
        string getName();
        string getPrograma();
        string getMestre();

        template<typename T>
            T getMax (T a, T b) 
            {
                T result;
                result = (a>b)? a : b;
                return (result);
            }

    private:
        
                                
        
};

