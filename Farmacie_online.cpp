//
// Created by Delia on 5/14/2020.
//

#include <iostream>
#include <utility>

#include "Farmacie_online.h"

Farmacie_online::Farmacie_online(std::string denumire, int nr, int discount):Farmacie(std::move(denumire), nr){

    this -> discount = discount;
}

Farmacie_online::Farmacie_online(const Farmacie_online &f):Farmacie(f){

    this -> discount = f.discount;
}

Farmacie_online& Farmacie_online::operator=(const Farmacie_online &f) {

    if (this == &f) return *this;
    Farmacie::operator=(f);
    this -> discount = f.discount;
    return *this;
}

Farmacie_online::~Farmacie_online(){

    this -> discount = 0;
}

int Farmacie_online::getNr(){
    return this -> nr;
}

void Farmacie_online::citire(std::istream &si){

    Farmacie::citire(si);
    si >> discount;
}

void Farmacie_online::afisare() {

    std::cout << "Adresa web este: " << this -> denumire << '\n';
    std::cout << "Numarul de vizitatori este: " << this -> nr << '\n';
    std::cout << "Discount-ul este: " << this -> discount << " %\n\n";
}
