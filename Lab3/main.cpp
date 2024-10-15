#include <iostream>
#include "Mesaj.h"
#include "Elev.h"

using namespace std;


Mesaj& createMesaj(Mesaj& mesaj) {
    return mesaj; // Apelează constructorul de copiere
}

void func()
{
    Mesaj a;
}

int main() {
    /*
    Mesaj mesaj1; // Constructor implicit
    Mesaj mesaj2("Salut!"); // Constructor cu parametrul
    Mesaj mesaj3(mesaj2); // Constructor de copiere

   createMesaj(mesaj2); // Apelează constructorul de copiere

    mesaj1.setText("Mesaj modificat."); // Modifică textul
    mesaj1.display(); // Afișează mesajul

    mesaj3 = mesaj2; // Apelare operator =
    mesaj3.display(); // Afișează mesajul copiat
    */

        /*
    Mesaj mesaj1("Salut!");
    Mesaj mesaj2;
    //mesaj2 = mesaj1; // Apelează operatorul de atribuire
    mesaj1.display(); // Afișează mesaj1
    mesaj2.display(); // Afișează mesaj2
    mesaj2.setText("Bună ziua!"); // Modifică mesaj2
    mesaj1.display(); // Afișează mesaj1
    mesaj2.display(); // Afișează mesaj2

    func();
    cout<<"a";
    */

    Elev elev1;
    int v[] = {10,6,4,5 };
    Elev elev2("Mihai","Scoala10",v,4);

    elev1.setNote(v,4);
    elev1.setNume("Ion");
    elev1.setScoala("Scoala3");

    Elev elev3(elev1);
    cout<<elev3.getNume()<<" "<<elev3.getScoala()<<" "<<elev3.getNumarNote()<<std::endl;

    elev2.afisare();

    cout<<endl;
    cout<<"Nota minima : " << elev2.notaMinima()<<endl;
    cout<<"Nota maxima : "<<elev2.notaMaxima()<<endl;
    cout<<"Media notelor :"<<elev2.calculareMedie()<<endl;
    return 0;
}


