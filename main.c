#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <pthread.h>
#include <string.h>
#include <conio.h>

typedef struct
{
    int idUsuario;
    char nombreUsuario[40];
    char pass[40];
    int anioNacimiento;
    char genero[40];
    char pais[40];
    //int eliminado; // indica 1 o 0 si el cliente fue eliminado
} stUsuario;

typedef struct
{
    char nombre[40];
} stCanciones;

typedef struct
{
    char nombre[30];
    struct nodo * sig;
} nodo;

stUsuario crearUsuario(char nombreUsuario[40], char password[40], int IDusuario, int anioNacimiento, char genero[40], char pais[40]);
nodo * crearNodo(char nombre[30]);
nodo * agregarAlPrincipioDeLalista(nodo * lista, nodo * nuevoNodo);

int main()
{
    /*
    nodo * lista = inicLista();
    crearPlaylist(lista);*/
    Inicio();

    return 0;
}
