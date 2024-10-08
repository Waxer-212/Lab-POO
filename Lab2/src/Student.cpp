#include "Student.h"
#include <cstring>
#include <iostream>

Student::Student()
{
    strcpy(nume, "N/A");
    strcpy(prenume, "N/A");
    varsta = 0;
    medie = 0.0;
}

void Student::set(const char n[], const char p[], int v, double m)
{
    strcpy(nume,n);
    strcpy(prenume,p);
    varsta = v;
    medie = m;
}

Student::Student(const char n[], const char p[], int v, double m)
{
    set(n,p,v,m);
}

const char* Student::getNume()
{
    return nume;
}

const char* Student::getPrenume()
{
    return prenume;
}

int Student::getVarsta()
{
    return varsta;
}

double Student::getMedie()
{
    return medie;
}

void Student::afiseazaInfo()
{
    std::cout<<"Numele este : "<<nume<< std::endl;
    std::cout<<"Prenumele este : "<<prenume << std::endl;
    std::cout<<"Varsta este : "<<varsta << std::endl;
    std::cout<<"Media este : "<<medie << std::endl;
}

Student::~Student()
{
    //dtor
}
