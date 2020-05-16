//
// Created by Delia on 5/15/2020.
//

#ifndef FARMACIE_GESTIONAREFARMACII_H
#define FARMACIE_GESTIONAREFARMACII_H

#include <iostream>
#include <vector>
#include <typeinfo>

#include "Farmacie_online.h"
#include "Farmacie_fizica.h"
#include "Farmacie.h"

template <class Tip>
class GestionareFarmacii{
    static int index;
    static const int id;
    std::vector <Tip*> Farmacii;
public:
    explicit GestionareFarmacii();
    ~GestionareFarmacii();
    void operator+=(const Tip &f);
    void afis();
};

template <class Tip> int GestionareFarmacii<Tip>::index = 0;
template <> int const GestionareFarmacii<Farmacie_fizica>::id=1234;

template <class Tip>
GestionareFarmacii<Tip>::GestionareFarmacii(){
    index = 0;
}

template <class Tip>
GestionareFarmacii<Tip>::~GestionareFarmacii() {
    Farmacii.clear();
    index = 0;
}

template <class Tip>
void GestionareFarmacii<Tip>::operator+=(const Tip &f) {
    Tip *far = new Tip(f);
    Farmacii.push_back(far);
    index++;
}

template <class Tip>
void GestionareFarmacii<Tip>::afis(){
    if(typeid(Tip)==typeid(Farmacie_fizica))
    {
        std::cout<< "Lant Farmacii Fizice:\n\n";
        for (unsigned int i = 0; i < Farmacii.size(); i++)
            Farmacii[i]->afisare();
    }
    else std::cout << "Tip farmacie necunoscut.\n";
}


template <>
class GestionareFarmacii<Farmacie_online>{
        static int index;
        static const int id = 5678;
        std::vector<Farmacie_online*> FOnline;
    public:
        GestionareFarmacii()= default;

        ~GestionareFarmacii(){
            index = 0;
            FOnline.clear();

        }

        void operator+=(Farmacie_online &f){
            auto *far = new Farmacie_online(f);
            FOnline.push_back(far);
            index++;
        }

        void afis(){
            int s = 0;
            for (auto & i : FOnline)
            {
                s = s + i->getNr();
                i->afisare();
            }
            std:: cout << "Numarul total de vizitatori este: " << s << '\n';
        }

            };
int GestionareFarmacii<Farmacie_online>::index=0;


#endif //FARMACIE_GESTIONAREFARMACII_H
