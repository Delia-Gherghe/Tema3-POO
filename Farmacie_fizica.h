//
// Created by Delia on 5/14/2020.
//

#ifndef FARMACIE_FARMACIE_FIZICA_H
#define FARMACIE_FARMACIE_FIZICA_H

#include <iostream>
#include <vector>

#include "Farmacie.h"

class Farmacie_fizica : public Farmacie{
    std::vector<int> profit;
public:
    explicit Farmacie_fizica(std::string denumire = "", int nr = 0, int val = 0);
    Farmacie_fizica(const Farmacie_fizica &f);
    Farmacie_fizica& operator=(const Farmacie_fizica &f);
    ~Farmacie_fizica() override;

    void citire(std::istream &si) override;
    void afisare() override;

};


#endif //FARMACIE_FARMACIE_FIZICA_H
