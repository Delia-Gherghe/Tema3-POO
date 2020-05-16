#include <iostream>
#include <fstream>

#include "Farmacie_fizica.h"
#include "Farmacie_online.h"
#include "GestionareFarmacii.h"

std::istream &operator>>(std::istream &si, Farmacie& ob)
{
    ob.citire(si);
    return si;
}

int main() {

    std::ifstream fin("farmacie.in");
    GestionareFarmacii<Farmacie_online> FO;
    GestionareFarmacii<Farmacie_fizica> FF;
    Farmacie_online a;
    Farmacie_fizica b;
    int nrff, nrfo, i;

    fin >> nrff;
    for (i = 0; i < nrff; i++)
    {
        fin >> b;
        FF += b;
    }
    fin >> nrfo;
    for (i = 0; i < nrfo; i++)
    {
        fin >> a;
        FO += a;
    }
    FF.afis();
    FO.afis();
    
    return 0;
}
