#include "Elev.h"
#include <iostream>
#include <cstring>

Elev::Elev()
{
    nume = nullptr;
    scoala = nullptr;
    n = 0;
    note = nullptr;

    std::cout<<"Constructor fara parametrii\n";
}

Elev::Elev(const char* nume, const char* scoala, int* note, int n){
    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume, nume);

    this->scoala = new char[strlen(scoala) + 1];
    strcpy(this->scoala, scoala);

    this->note = new int[n];
    for(int i = 0; i < n; i++)
    {
        this->note[i] = note[i];
    }

    this->n = n;

    std::cout << "Constructor cu parametrul apelat.\n";
}

Elev::Elev(const Elev& other) {
    if (other.nume) {
        this->nume = new char[strlen(other.nume) + 1];
        strcpy(this->nume, other.nume);
    } else {
        this->nume = nullptr;
    }

    if (other.scoala) {
        this->scoala = new char[strlen(other.scoala) + 1];
        strcpy(this->scoala, other.scoala);
    } else {
        this->scoala = nullptr;
    }
    this->n = other.n;
    if (other.note) {
        this->note = new int[n];
        for(int i = 0; i < n; i++)
        {
            this->note[i] = other.note[i];
        }
    } else {
        this->note = nullptr;
    }


    std::cout << "Constructor de copiere apelat.\n";
}

Elev& Elev::operator=(const Elev& other) {
    if (this != &other) {
        delete[] this->note;
        delete[] this->scoala;
        delete[] this->nume;
        if (other.nume) {
            this->nume = new char[strlen(other.nume) + 1];
            strcpy(this->nume, other.nume);
        } else {
            this->nume = nullptr;
        }

        if (other.scoala) {
            this->scoala = new char[strlen(other.scoala) + 1];
            strcpy(this->scoala, other.scoala);
        } else {
            this->scoala = nullptr;
        }

        if (other.note) {
            this->note = new int[n];
            this->note = other.note;
        } else {
            this->note = nullptr;
        }

        if(other.n)
            this->n = other.n;
    }
    std::cout << "Operatorul de asignare apelat.\n";
    return *this;
}

const char* Elev::getNume()const
{
    return nume;
}

const char* Elev::getScoala()const{
    return scoala;
}

int Elev::getNumarNote()const{
    return n;
}

int* Elev::getNote()const{
    return note;
}


void Elev::setNume(const char* nume)
{
    if(this->nume)
        delete[] this->nume;

    this->nume = new char[strlen(nume) + 1];
    strcpy(this->nume,nume);
}

void Elev::setScoala(const char* scoala)
{
    if(this->scoala)
        delete[] this->scoala;

    this->scoala = new char[strlen(scoala) + 1];
    strcpy(this->scoala, scoala);
}

void Elev::setNote(int*note, int n)
{
    if(this->note)
        delete[] this->note;

    this->n = n;
    this->note = new int[n];

    for(int i = 0; i < n; i++)
    {
        this->note[i] = note[i];
    }
}

void Elev::afisare()const
{
    std::cout<<"Nume : "<<this->nume<<"\nScoala : "<<this->scoala<<"\nAre "<<n<<"note."<<" Acestea sunt : ";
    for(int i = 0; i < n; i++)
    {
        std::cout<< this->note[i] <<" ";
    }
}

double Elev::calculareMedie()const{
    double suma = 0;
    for(int i = 0; i < this->n; i++)
    {
        suma += this->note[i];
    }

    suma = suma / this->n;

    return suma;
}

int Elev::notaMinima()const
{
    int notaMin = 9999;
    for(int i = 0; i < this->n; i++)
    {
        if(this->note[i] < notaMin)
            notaMin = this->note[i];
    }

    return notaMin;
}

int Elev::notaMaxima()const
{
    int notaMax = -1;
    for(int i = 0; i < this->n; i++)
    {
        if(this->note[i] > notaMax)
            notaMax = this->note[i];
    }

    return notaMax;
}

Elev::~Elev()
{
    delete[] nume;
    delete[] scoala;
    delete[] note;
}


