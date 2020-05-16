//
// Created by Delia on 5/14/2020.
//

#include <iostream>
#include <utility>

#include "Farmacie_fizica.h"

Farmacie_fizica::Farmacie_fizica(std::string denumire, int nr, int val):Farmacie(std::move(denumire), nr){

    this -> profit.resize(12);
    for (unsigned int i = 0; i < 12; i++)
        this -> profit[i] = val;
}

Farmacie_fizica::Farmacie_fizica(const Farmacie_fizica &f):Farmacie(f){

    this -> profit.resize(12);
    for (unsigned int i = 0; i < 12; i++)
        this -> profit[i] = f.profit[i];
}

Farmacie_fizica& Farmacie_fizica::operator=(const Farmacie_fizica &f){

    if (this == &f) return *this;
    Farmacie::operator=(f);
    this -> profit.resize(12);
    for (unsigned int i = 0; i < 12; i++)
        this -> profit[i] = f.profit[i];
    return *this;
}

Farmacie_fizica::~Farmacie_fizica(){

    this -> profit.clear();
}

void Farmacie_fizica::citire(std::istream &si) {

    Farmacie::citire(si);
    for(unsigned int i = 0; i < 12; i++)
        si >> profit[i];
}

void Farmacie_fizica::afisare() {

    std::cout << "Numele farmaciei este: " << this -> denumire << '\n';
    std::cout << "Numarul de angajati este: " << this -> nr << '\n';
    std::cout << "Profiturile pe fiecare luna sunt:\n";
    for (unsigned int i = 0; i < 12; i++)
        std::cout << this -> profit[i] << "% ";
    std::cout << "\n\n";
}
