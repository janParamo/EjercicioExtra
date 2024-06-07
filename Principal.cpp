#include <iostream>
#include "Funciones.cpp" // Es el archivo que contiene las funciones que se usan en el programa
//#include <locale.h> libreria para usar caracteres especiales 

using namespace std;


int main()
{
    //setlocale(LC_ALL, "spanish");  Se usa para que se pueda imprimir caracteres especiales
    registroLibro(); // Se llama a la funcion principal
    return 0;
}
