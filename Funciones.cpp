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
int menu();              // Funcion que muestra el menu
int registroLibro();     // Funcion principal
void libroMayoroMenor(); // Esta funcion se encarga de verificar que el anio del libro sea mayor que 1900 y menor que 2025

// Funcion para mostrar el menu
int menu()
{
    system("cls || clear");
    cout << "Menu de opciones: " << endl;
    cout << "1. Agregar un nuevo libro al catalogo. " << endl;
    cout << "2. Mostrar todos los libros en el catalogo. " << endl;
    cout << "3. Mostrar los libros publicados en los ultimos 5 anios. " << endl;
    cout << "4. Salir " << endl;
    cout << "Seleccione una opcion: " << endl;
    cin >> opcion;
    return opcion;
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
    system("pause");
}

// La funcion principal en la que giran en torno las demas funciones
int registroLibro()
{
    while (opcion != 4)
    {
        opcion = menu();
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
            system("pause");
            break;
        case 2: // Mostrar todos los libros

            for (int i = 0; i < indice; i++)
            {
                cout << "El titulo del libro es: " << arregloLibros[i].titulo << endl;
                cout << "El autor es: " << arregloLibros[i].autor << endl;
                cout << "ISBN: " << arregloLibros[i].ISBN << endl;
                cout << "El anio de publicacion es: " << arregloLibros[i].anio << endl;
                cout << endl;
            }
            system ("pause");
            break;
        case 3: // Mostrar los libros recientes(Menos de 5 anios)

            for (int i = 0; i < indice; i++)
            {
                if (arregloLibros[i].anio > 2019)
                {
                    cout << "El titulo del libro es: " << arregloLibros[i].titulo << endl;
                    cout << "El autor es: " << arregloLibros[i].autor << endl;
                    cout << "ISBN: " << arregloLibros[i].ISBN << endl;
                    cout << "El anio de publicacion es: " << arregloLibros[i].anio << endl;
                    cout << endl;
                }
            }
            system("pause");
            break;
        case 4: // Salida

            cout << "Bye :) " << endl;
            system("pause");
            break;

        default:
            cout << "La opcion no es valida.... " << endl;
            system("pause");
            break;
        }
    }
    return 0;
}