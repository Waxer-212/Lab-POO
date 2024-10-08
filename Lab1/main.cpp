#include <iostream>
#include <cstring>


struct Persoana {
    char nume[30];
    double venit;
};

void setValori(Persoana persoane[]) {
    // Setarea valorilor pentru fiecare persoană
    strcpy(persoane[0].nume, "Ion Popescu");
    persoane[0].venit = 2500.50;

    strcpy(persoane[1].nume, "Maria Ionescu");
    persoane[1].venit = 3200.75;

    strcpy(persoane[2].nume, "Vasile Georgescu");
    persoane[2].venit = 1800.00;

    strcpy(persoane[3].nume, "Elena Vasilescu");
    persoane[3].venit = 4000.00;

    strcpy(persoane[4].nume, "Andrei Munteanu");
    persoane[4].venit = 2900.25;

    strcpy(persoane[5].nume, "Sorin Radu");
    persoane[5].venit = 1500.60;

    strcpy(persoane[6].nume, "Gabriela Stan");
    persoane[6].venit = 3600.40;

    strcpy(persoane[7].nume, "Cristian Dumitru");
    persoane[7].venit = 2100.80;

    strcpy(persoane[8].nume, "Ana Marin");
    persoane[8].venit = 3700.90;

    strcpy(persoane[9].nume, "Daniela Cristea");
    persoane[9].venit = 4500.00;
}


void afiseazaPersoane(const Persoana persoane[], int marime) {
    for (int i = 0; i < marime; ++i) {
        std::cout << "Nume: " << persoane[i].nume << ", Venit: " << persoane[i].venit << std::endl;
    }
}

void sorteazaPersoane(Persoana persoane[], int marime) {
    for (int i = 0; i < marime - 1; ++i) {
        for (int j = 0; j < marime - i - 1; ++j) {
            if (persoane[j].venit > persoane[j + 1].venit) {
                // Schimbare persoană
                Persoana temp = persoane[j];
                persoane[j] = persoane[j + 1];
                persoane[j + 1] = temp;
            }
        }
    }
}

void stergePersoana(Persoana persoane[], int index, int& dimensiune)
{
    //Mutam fiecare persoana cu o pozitie mai in spate incepand cu persoana care trebuie sa fie stearsa
    for(int i = index - 1; i < dimensiune - 1; i++)
    {
        persoane[i] = persoane[i+1];
    }

    dimensiune--;

}

void adaugaPersoana(Persoana persoane[], int& dimensiune)
{
    //Creem persoana
    Persoana om;
    std::cout<<"Care este numele persoanei ? ";
    std::cin>>om.nume;
    std::cout<<"Care este venitul persoanei ? ";
    std::cin>>om.venit;

    //verificam daca marimea este mai mare decat marimea maxima
    if(dimensiune >= 10)
        return;

    //Adaugam persoana in lista pe ultima pozitie si modificam dimensiunea
    persoane[dimensiune] = om;
    dimensiune++;
}
int main() {
    // 1. Declară un vector de 10 elemente de tip Persoana.
    Persoana persoane[10];
    int marime = 10;

    // 2. Apelează o funcție setValori(Persoana persoane[]) pentru a seta valorile în acest vector.
    setValori(persoane);

    // 3. Apelează o funcție afiseazaPersoane(const Persoana persoane[], int marime) pentru a afișa lista de persoane.
    std::cout << "Lista persoanelor:\n";
    afiseazaPersoane(persoane, 10);

    // 4. Apelează o funcție sorteazaPersoane(Persoana persoane[], int marime) pentru a sorta persoanele după venit.
    sorteazaPersoane(persoane, 10);

    // 5. Afișează din nou lista sortată cu funcția afiseazaPersoane.
    std::cout << "Lista persoanelor sortate după venit:\n";
    afiseazaPersoane(persoane, 10);

    //6.Sterge persoana de pe pozitia 'x' din vectorul de persoane
    stergePersoana(persoane,3,marime);

    std::cout<<"\n\n";
    afiseazaPersoane(persoane, marime);
    //7. Adauga in vectorulu de persoane o noua persoana doar daca aceasta are spatiu
    adaugaPersoana(persoane,marime);

     std::cout<<"\n\n";
    afiseazaPersoane(persoane, marime);


    return 0;
}


