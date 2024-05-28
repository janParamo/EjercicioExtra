/*1. Requisitos del Programa:
○ Definir la estructura del libro:
○ Título
○ Autor
○ ISBN
○ Año de publicación*/

#define MAX_STR 40 // Long de las cadenas texto
#define MAX_REG 100 // Cantidad maxima de registro de libros en este caso permite un maximo de 100 libros

struct LIBROS // Estructura de los libros 
{
    char titulo[MAX_STR]; 
    char autor[MAX_STR];
    char ISBN[13];
    int anio;
};

LIBROS arregloLibros[MAX_REG]; // En este arreglo se guardan los libros que se ingresan
LIBROS nuevoLibro; // En este variable se guardarian los libros que se van ingreando


//Variables que se usan para el menu
int opcion; // Para que el usuario elija una opcion del menu
int indice = 0; // Variable que se usa para almacenar los libros que se han ingresado