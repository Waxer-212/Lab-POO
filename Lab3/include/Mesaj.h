#ifndef MESAJ_H
#define MESAJ_H

class Mesaj {
    char* text;
public:
    Mesaj();
    Mesaj(const char*);
    Mesaj(const Mesaj&);
    Mesaj& operator=(const Mesaj&);
    void setText(const char*);
    void display() const;

    ~Mesaj();
};

#endif // MESAJ_H

