Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@Jonathan1379 
Jonathan1379
/
Arreglo-dinamico
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
Settings
Arreglo-dinamico/arreglo dinamico.h
@Jonathan1379
Jonathan1379 Create arreglo dinamico.h
Latest commit 8fd22eb on 3 Dec 2021
 History
 1 contributor
30 lines (26 sloc)  583 Bytes

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
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
You have no unread notifications
