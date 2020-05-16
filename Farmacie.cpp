//
// Created by Delia on 5/14/2020.
//

#include <iostream>
#include <utility>

#include "Farmacie.h"

Farmacie::Farmacie (std::string denumire, int nr){

    this -> denumire = std::move(denumire);
    this -> nr = nr;
}

Farmacie::Farmacie(const Farmacie &f){

    this -> denumire = f.denumire;
    this -> nr = f.nr;
}

Farmacie& Farmacie::operator=(const Farmacie &f) {

    if (this == &f) return *this;
    this -> denumire = f.denumire;
    this -> nr = f.nr;
    return *this;
}

Farmacie::~Farmacie() {

    this -> denumire.clear();
    this -> nr = 0;
}

void Farmacie::citire(std::istream &si){

    si >> denumire;
    si >> nr;
}
