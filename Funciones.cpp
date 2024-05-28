/*2. Implementar las siguientes funciones:
○ Agregar un nuevo libro al catálogo. Done
○ Mostrar todos los libros en el catálogo. Done
○ Mostrar los libros publicados en los últimos 5 años. Done
3. Crear un menú que permita al usuario seleccionar una de las siguientes opciones:
○ Agregar un libro Done
○ Mostrar todos los libros Done
○ Mostrar libros recientes (menos de 5 años) Done
○ Salir Done
4. Restricciones adicionales:
○ Limitar el tamaño del catálogo a un número máximo de libros. Done
○ No permitir agregar libros con un año de publicación en el futuro. Done
○ Verificar que el ISBN tenga una longitud específica (13 caracteres). Done
○ No permitir que el año de publicación sea menor a 1900. Done */

#include <iostream>
#include "variables.h" // Se incluye el archivo que contiene las variables globales que se usan para el funcionamiento de las funciones

using namespace std;

// Prototipos de las funciones
void menu(); // Funcion que muestra el menu
int registroLibro(); // Funcion principal
void libroMayoroMenor(); // Esta funcion se encarga de verificar que el anio del libro sea mayor que 1900 y menor que 2025

// La funcion principal en la que giran en torno las demas funciones
int registroLibro()
{

    menu();
    cin >> opcion;

    switch (opcion)
    {
    case 1: // Agregar un libro

        cout << "Ingrese el titulo del libro: " << endl;
        cin >> nuevoLibro.titulo;
        cout << "Ingrese el autor del libro: " << endl;
        cin >> nuevoLibro.autor;
        cout << "Ingrese el ISBN del libro: " << endl;
        cin >> nuevoLibro.ISBN;
        libroMayoroMenor();
        arregloLibros[indice] = nuevoLibro;
        indice++;

        break;
    case 2: // Mostrar todos los libros

        for (int i = 0; i < indice; i++) 
        {
            cout << "El titulo del libro es: " << endl;
            cin >> arregloLibros[i].titulo;
            cout << "El autor es: " << endl;
            cin >> arregloLibros[i].autor;
            cout << "ISBN: " << endl;
            cin >> arregloLibros[i].ISBN;
            cout << "El anio de publicacion es: " << endl;
            cin >> arregloLibros[i].anio;
            cout << endl;
        }

        break;
    case 3: // Mostrar los libros recientes(Menos de 5 anios)

        for (int i = 0; i < indice; i++)
        {
            if (arregloLibros[i].anio > 2019)
            {
                cout << "El titulo del libro es: " << endl;
                cin >> arregloLibros[i].titulo;
                cout << "El autor es: " <<  endl;
                cin >> arregloLibros[i].autor;
                cout << "ISBN: " <<  endl;
                cin >> arregloLibros[i].ISBN;
                cout << "El anio de publicacion es: " <<  endl;
                cin >> arregloLibros[i].anio;
                cout << endl;
            }
        }

        break;
    case 4: // Salida

        cout << "Bye :) " << endl;
        break;

    default:
        cout << "La opcion no es valida.... " << endl;
        break;
    }
    if (opcion != 4)
    {
        menu();
    }
    return 0;
}

// Funcion para mostrar el menu
void menu()
{
    cout << "Ingrese una opcion: " << endl;
    cout << "1. Agregar un nuevo libro al catalogo. " << endl;
    cout << "2. Mostrar todos los libros en el catalogo. " << endl;
    cout << "3. Mostrar los libros publicados en los ultimos 5 años. " << endl;
    cout << "4. Salir " << endl;
    cout << endl;
}

// Funcion para verificar que el anio del libro sea mayor que 1900 y menor que 2025
void libroMayoroMenor()
{
    cout << "Cual es el anio de publicacion del libro? " << endl;
    while (nuevoLibro.anio < 1900 || nuevoLibro.anio > 2025)
    {
        cout << "El anio del libro tiene que ser mayor a 1900 y menor que 2025, porfavor ingresar un anio valido:  " << endl;
        cin >> nuevoLibro.anio;
    }
}