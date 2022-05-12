#include <iostream>
#include <vector>
#include "robo.h"
#include "futuro.cpp"
#include "T1000.h"
#include "T8001990.cpp"
#include "Rosie.cpp"
#include "Bender.cpp"

int main()
{
    vector<Robo*> vectorRobo = {new T1000("T1000"), new T8001990("T8001990"), new Rosie("Rosie"), new Bender("Bender")};


    Futuro<Robo*> futuro;
    futuro.enviaRobos(vectorRobo);
          

} 