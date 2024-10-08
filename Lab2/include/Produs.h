#ifndef PRODUS_H
#define PRODUS_H


class Produs
{
private:
    char denumire[50];
    char categorie[50];
    double pret;
    int cantitateStoc;
public:
    // Constructori
    Produs(); // Fără parametru
    Produs(const char d[], const char c[], double p, int stoc); // Cu parametru

    // Metodă de set (modificare toți parametrii)
    void set(const char denumire[], const char categorie[], double pret, int cantitateStoc);

    // Metode de get
    const char* getDenumire();
    const char* getCategorie();
    double getPret();
    int getCantitateStoc();

    // Metodă de afișare
    void afiseazaInfo();
};


#endif // PRODUS_H
