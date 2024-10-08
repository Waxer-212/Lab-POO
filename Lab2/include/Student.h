#ifndef STUDENT_H
#define STUDENT_H


class Student
{
private:
    char nume[50];
    char prenume[50];
    int varsta;
    double medie;
public:
// Constructori
    Student(); // Fără parametru
    Student(const char n[], const char p[], int v, double m); // Cu parametru
// Metodă de set (modificare toți parametrii)
    void set(const char n[], const char p[], int v, double m);
// Metode de get
    const char* getNume();
    const char* getPrenume();
    int getVarsta();
    double getMedie();
// Metodă de afișare
    void afiseazaInfo();
    ~Student();
};

#endif // STUDENT_H
