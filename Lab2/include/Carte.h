#ifndef CARTE_H
#define CARTE_H


class Carte {
private:
    char titlu[50];
    char autor[50];
    int anPublicare;
    int numarPagini;
public:
    // Constructori
    Carte(); // Fără parametru
    Carte(const char t[], const char a[], int an, int nrPagini); // Cu parametru
    // Metodă de set (modificare toți parametrii)
    void set(const char t[], const char a[], int an, int nrPagini);
    // Metode de get
    const char* getTitlu();
    const char* getAutor();
    int getAnPublicare();
    int getNumarPagini();
    // Metodă de afișare
    void afiseazaInfo();
    ~Carte();
};
#endif // CARTE_H
