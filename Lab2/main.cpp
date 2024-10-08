#include "produs.h"
#include <iostream>
#include "Student.h"
#include "Carte.h"

int main() {
    // Crearea unui obiect folosind constructorul fără parametru
    Produs produs1;

    // Afișarea informațiilor inițiale
    std::cout << "Informații produs1 (fără parametru):" << std::endl;
    produs1.afiseazaInfo();

    // Crearea unui obiect folosind constructorul cu parametru
    Produs produs2("Laptop", "Electronice", 3499.99, 10);

    // Afișarea informațiilor pentru produs2
    std::cout << "\nInformații produs2 (cu parametru):" << std::endl;
    produs2.afiseazaInfo();

    // Testarea metodei set
    produs1.set("Telefon", "Electronice", 1999.99, 5);

    // Afișarea informațiilor după setare
    std::cout << "\nInformații produs1 după setare:" << std::endl;
    produs1.afiseazaInfo();

    // Testarea metodelor get
    std::cout << "\nDenumire produs1: " << produs1.getDenumire() << std::endl;
    std::cout << "Categorie produs1: " << produs1.getCategorie() << std::endl;
    std::cout << "Preț produs1: " << produs1.getPret() << " RON" << std::endl;
    std::cout << "Cantitate în stoc produs1: " << produs1.getCantitateStoc() << std::endl;

    ///-----------------------------------------------------------
    // Crearea unui obiect folosind constructorul fără parametru
    Carte carte1;

    // Afișarea informațiilor inițiale
    std::cout << "Informații carte1 (fără parametru):" << std::endl;
    carte1.afiseazaInfo();

    // Crearea unui obiect folosind constructorul cu parametru
    Carte carte2("Ion", "LiviuRebreanu", 1900, 10);

    // Afișarea informațiilor pentru produs2
    std::cout << "\nInformații carte2 (cu parametru):" << std::endl;
    carte2.afiseazaInfo();

    // Testarea metodei set
    carte1.set("Poezii", "Mihai Eminescu", 1900, 15);

    // Afișarea informațiilor după setare
    std::cout << "\nInformații carte1 după setare:" << std::endl;
    carte1.afiseazaInfo();

    // Testarea metodelor get
    std::cout << "\nTitlu carte1: " << carte1.getTitlu() << std::endl;
    std::cout << "Autor carte1: " << carte1.getAutor() << std::endl;
    std::cout << "An publicare carte1: " << carte1.getAnPublicare() << std::endl;
    std::cout << "Numar pagini carte1: " << produs1.getCantitateStoc() << std::endl;

    ///-----------------------------------------------------------
    // Crearea unui obiect folosind constructorul fără parametru
    Student student1;

    // Afișarea informațiilor inițiale
    std::cout << "Informații student1 (fără parametru):" << std::endl;
    student1.afiseazaInfo();

    // Crearea unui obiect folosind constructorul cu parametru
    Student student2("Ion", "Liviu", 19, 10);

    // Afișarea informațiilor pentru produs2
    std::cout << "\nInformații student2 (cu parametru):" << std::endl;
    student2.afiseazaInfo();

    // Testarea metodei set
    student1.set("Mihai", "Eminescu", 190, 8);

    // Afișarea informațiilor după setare
    std::cout << "\nInformații student1 după setare:" << std::endl;
    student1.afiseazaInfo();

    // Testarea metodelor get
    std::cout << "\nNume Student1: " << student1.getNume() << std::endl;
    std::cout << "Prenume student1: " << student1.getPrenume() << std::endl;
    std::cout << "Varsta student1: " << student1.getVarsta() << std::endl;
    std::cout << "Medie student1: " << student1.getMedie() << std::endl;

    return 0;
}
