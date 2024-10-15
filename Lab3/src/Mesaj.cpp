#include <iostream>
#include <cstring>
#include "Mesaj.h"

Mesaj::Mesaj() {
    text = nullptr;
    std::cout << "Constructor implicit apelat.\n";
}

Mesaj::Mesaj(const char* msg) {
    text = new char[strlen(msg) + 1];
    strcpy(text, msg);
    std::cout << "Constructor cu parametrul apelat.\n";
}

Mesaj::Mesaj(const Mesaj& other) {
    if (other.text) {
        text = new char[strlen(other.text) + 1];
        strcpy(text, other.text);
    } else {
        text = nullptr;
    }
    std::cout << "Constructor de copiere apelat.\n";
}
/*
Mesaj& Mesaj::operator=(const Mesaj& other) {
    if (this != &other) {
        delete[] text;
        if (other.text) {
            text = new char[strlen(other.text) + 1];
            strcpy(text, other.text);
        } else {
            text = nullptr;
        }
    }
    std::cout << "Operatorul de asignare apelat.\n";
    return *this;
}
*/
void Mesaj::setText(const char* msg) {
    delete[] text;
    text = new char[strlen(msg) + 1];
    strcpy(text, msg);
}

void Mesaj::display() const {
    if (text) {
        std::cout << text << std::endl;
    } else {
        std::cout << "Mesaj gol." << std::endl;
    }
}


Mesaj::~Mesaj() {
    delete[] text;
    std::cout << "Destructor apelat.\n";
}
