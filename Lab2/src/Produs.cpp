#include "produs.h"
#include <cstring>
#include <iostream>

// Constructor fără parametru
Produs::Produs() {
    strcpy(denumire, "N/A");
    strcpy(categorie, "N/A");
    pret = 0.0;
    cantitateStoc = 0;
}

// Constructor cu parametru
Produs::Produs(const char d[], const char c[], double p, int stoc) {
    strcpy(denumire, d);
    strcpy(categorie, c);
    pret = p;
    cantitateStoc = stoc;
}

// Metodă de set
void Produs::set(const char denumire[], const char categorie[], double pret, int cantitateStoc) {
    strcpy(this->denumire, denumire);
    strcpy(this->categorie, categorie);
    this->pret = pret;
    this->cantitateStoc = cantitateStoc;
}

// Metode de get
const char* Produs::getDenumire() {
    return denumire;
}

const char* Produs::getCategorie() {
    return categorie;
}

double Produs::getPret() {
    return pret;
}

int Produs::getCantitateStoc() {
    return cantitateStoc;
}

// Metodă de afișare
void Produs::afiseazaInfo() {
    std::cout << "Denumire: " << denumire << std::endl;
    std::cout << "Categorie: " << categorie << std::endl;
    std::cout << "Pret: " << pret << " RON" << std::endl;
    std::cout << "Cantitate in stoc: " << cantitateStoc << std::endl;
}

