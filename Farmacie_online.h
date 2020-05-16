//
// Created by Delia on 5/14/2020.
//

#ifndef FARMACIE_FARMACIE_ONLINE_H
#define FARMACIE_FARMACIE_ONLINE_H

#include <iostream>

#include "Farmacie.h"

class Farmacie_online : public Farmacie {
    int discount;
public:
    explicit Farmacie_online(std::string denumire = "", int nr = 0, int discount = 0);
    Farmacie_online(const Farmacie_online &f);
    Farmacie_online& operator=(const Farmacie_online &f);
    ~Farmacie_online() override;

    int getNr();
    void citire(std::istream &si) override;
    void afisare() override;
};


#endif //FARMACIE_FARMACIE_ONLINE_H
