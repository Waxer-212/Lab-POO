#ifndef ELEV_H
#define ELEV_H


class Elev
{
    char* nume;
    char* scoala;
    int n;
    int* note;
public:
    Elev();
    Elev(const char*, const char*, int*, int);
    Elev(const Elev&);
    Elev& operator=(const Elev&);
    ~Elev();
    const char* getNume() const;
    const char* getScoala() const;
    int getNumarNote() const;
    int* getNote() const;
    void setNume(const char*);
    void setScoala(const char*);
    void setNote(int*, int);
    void afisare() const; //afiseaza toate atributele clasei
    double calculareMedie() const; //returneaza media vectorului note
    int notaMinima() const; //nota minima din vectorul note
    int notaMaxima() const; //nota maxima din vectorul note
};

#endif // ELEV_H
