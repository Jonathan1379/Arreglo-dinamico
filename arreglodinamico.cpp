#include "Arreglodinamico.h"

Arreglodinamico::Arreglodinamico()
{
    arreglo= new string[MAX];
    cont=0;
    tam=MAX;
}

Arreglodinamico::~Arreglodinamico()
{
    delete[] arreglo;
}

void Arreglodinamico::insertar_final(const string &s)
{

    if(cont==tam){
        expandir();

    }
        arreglo[cont]=s;
        cont++;
}
void Arreglodinamico::insertar_inicio(const string &s)
{
     if(cont==tam){
        expandir();

    }

    for(size_t i=cont;i>0;i--){
        arreglo[i]=arreglo[i-1];

    }
    arreglo[0]=s;
    cont++;

}
size_t Arreglodinamico::size()
{

    return cont;
}
void Arreglodinamico::expandir()
{
    string *nuevo=new string[tam+MAX];
    for(size_t i=0;i<cont;i++){
        nuevo[i]=arreglo[i];

    }
    delete[] arreglo;
    arreglo=nuevo;
    tam= tam + MAX;

}
