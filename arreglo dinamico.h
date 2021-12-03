#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H
#include <cstddef>
#include <iostream>
#include <iomanip>

using namespace std;

class Arreglodinamico
{
    string *arreglo;
    size_t tam;
    size_t cont;
    const static size_t MAX=5;
    public:
        Arreglodinamico();
        ~Arreglodinamico();
        void insertar_final(const string &s);
        void insertar_inicio(const string &s);
        size_t size();
        string operator[](size_t p)
        {
            return arreglo[p];
        }

    private:
        void expandir();
};

#endif // ARREGLODINAMICO_H
