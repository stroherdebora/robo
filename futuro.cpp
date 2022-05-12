#include <iostream>
#include "futuro.h"
#include "robo.h"
#include "T1000.h"
#include "T8001990.h"
#include "Rosie.h"
#include "Bender.h"

template <class T>
Futuro<T>::Futuro()
{

}

template <class T>
void Futuro<T>::enviaRobos(vector<T> robos)
{
    // T1000
    T1000* t1000 = dynamic_cast<T1000*>(robos[0]);
    cout << "Qual o seu nome? " << t1000->getName() << "!" << endl;
    cout << "Qual o seu programa predileto? " << t1000->getPrograma() << "!" << endl;
    cout << "Quem eh o seu mestre? " << t1000->getMestre() << "!" << endl;
    cout << "Soma: " << t1000->soma(1, 2) << endl;
    cout << "" << endl;
    
    // T8001990
    T8001990* t8001990 = dynamic_cast<T8001990*>(robos[1]);
    cout << "Qual o seu nome? " << t8001990->getName() << "!" << endl;
    cout << "Qual o seu programa predileto? " << t8001990->getPrograma() << "!" << endl;
    cout << "Quem eh o seu mestre? " << t8001990->getMestre() << "!" << endl;
    cout << "Maior valor: " << t8001990->getMax(9.0, 5.0) << endl;
    cout << "" << endl;

    // ROSIE
    Rosie* rosie = dynamic_cast<Rosie*>(robos[2]);
    cout << "Qual o seu nome? " << rosie->getName() << "!" << endl;
    cout << "Qual o seu programa predileto? " << rosie->getPrograma() << "!" << endl;
    cout << "Quem eh o seu mestre? " << rosie->getMestre() << "!" << endl;
    cout << "Casa limpa? " << rosie->limpar() << endl;
    cout << "Almoço pronto? " << rosie->cozinhar() << endl;
    vector<int> vetorzinho= {1, 2, 3, 4, 5, 6, 20};
    rosie->funcaozinha(vetorzinho);
    cout << "Maior valor: " << rosie->funcaozinha(vetorzinho) << endl;
    cout << "" << endl;

    // BENDER
    Bender* bender = dynamic_cast<Bender*>(robos[3]);
    cout << "Qual o seu nome? " << bender->getName() << "!" << endl;
    cout << "Qual o seu programa predileto? " << bender->getPrograma() << "!" << endl;
    cout << "Quem eh o seu mestre? " << bender->getMestre() << "!" << endl;
    cout << "Dobrou barras? " << bender->dobrarBarras() << endl;
    cout << "Esta tendo problemas? " << bender->problemas() << endl;
    cout << "" << bender->retorna(1, 9, "Eu sou a string retornada") << endl;


}


template <class T>
Futuro<T>::~Futuro()
{

}