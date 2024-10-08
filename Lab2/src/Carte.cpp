#include "Carte.h"
#include <iostream>
#include <cstring>

Carte::Carte()
{
    strcpy(titlu, "N/A");
    strcpy(autor, "N/A");
    anPublicare = 0;
    numarPagini = 0;
}

void Carte::set(const char t[], const char a[], int an, int nrPagini)
{
    strcpy(this->titlu,t);
    strcpy(this->autor,a);
    this->anPublicare = an;
    this->numarPagini = nrPagini;
}

Carte::Carte(const char t[], const char a[], int an, int nrPagini)
{
    set(t,a,an,nrPagini);
}

const char* Carte::getTitlu()
{
    return titlu;
}

const char* Carte::getAutor()
{
    return autor;
}

int Carte::getAnPublicare()
{
    return anPublicare;
}

int Carte::getNumarPagini()
{
    return numarPagini;
}

void Carte::afiseazaInfo()
{
    std::cout<<"Autorul este : "<<autor<< std::endl;
    std::cout<<"Titlul este : "<<titlu << std::endl;
    std::cout<<"Anul de publicare este : "<<anPublicare << std::endl;
    std::cout<<"Numarul de pagini este : "<<numarPagini << std::endl;
}

Carte::~Carte()
{
    //dtor
}
