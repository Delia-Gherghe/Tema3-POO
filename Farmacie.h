//
// Created by Delia on 5/14/2020.
//

#ifndef FARMACIE_FARMACIE_H
#define FARMACIE_FARMACIE_H

#include <iostream>

class Farmacie {
protected:
    std::string denumire;
    int nr;
public:
    explicit Farmacie (std::string denumire = "", int nr = 0);
    Farmacie (const Farmacie &f);
    Farmacie& operator=(const Farmacie &f);
    virtual ~Farmacie();
    virtual void citire(std::istream &si) = 0;
    virtual void afisare() = 0;

};


#endif //FARMACIE_FARMACIE_H
