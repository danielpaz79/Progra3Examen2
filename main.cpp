#include "Lista.h"
#include "ArbolTrinario.h"
#include "Evaluador.h"
#include <fstream>
#include <list>
#include <vector>
#include <math.h>
using namespace std;

//2 ejercicios a realizar estan ubicados en el archivo Lista.h

//Devuelve el promedio de los valres de mi_lista dada
float obtenerPromedio(std::list<float> mi_lista)
{
//    Nodo<float>*temp;
//    float prom;
//    while(*temp!=NULL)
//    {
//        if(temp->sig!=NULL
//    }
    return -1.0f;
}

//Devuelve la suma de los valres de mi_vector dada
int obtenerSuma(std::vector<int> mi_vector)
{
    return -1;
}

//Devuelve verdadero si encuentra cadena (dada) en el archivo con nombre nombre_archivo (dado), de lo contrario devuelve false
bool existeEnArchivo(string nombre_archivo, string cadena)
{
    ifstream in(nombre_archivo.c_str());//crea un ifstream para poder leerlo
    string cad; //variable para almacenar el string del archivo
    int existen=nombre_archivo.size();// obtenemos el tamano del archivo

    for (int a=0 ; a<existen; a++) //FOR para recorrer segun el tamano
    {
        in>>cad;// entramos a la palabra
        if(cad==cadena) //comparamos si existe la palabra
            return true;//devuelve true si la encuentra
    }
    return false;// caso contrario devuelve falso

}

//Devuelve devuelve el tamano en bytes del archivo con nombre nombre_archivo (dado)
int obtenerTamanoDeArchivo(string nombre_archivo)
{
    ifstream in(nombre_archivo.c_str()); //leemos el archivo mediante objeto ifstream
    in.seekg(0,ios::end); //usamos seekg para movernos al final del archivo
    int tamano = in.tellg();//asignamos el tamano a una variable
    in.seekg(0,ios::beg);//usamor seekg para desplazarnos al inicio
    return tamano; //retornamos el tamano que guardamos en la variable "tamano"
}

//Devuelve true si encuentra el valor num (dado) en el arbol dada su raiz
bool existeEnArbol(NodoTrinario* raiz, int num)
{
    if(raiz ->num == NULL)
        return false;
    else
        return true;
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
