#include <stdio.h>
#include <windows.h>

int main ()
{
    printf("*");

    //Tipo handle para controlar punteros de manera abstracta
    HANDLE hCon;

    //Sirve para obtener el puntero de este programa y guardarlo en una variable
    hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    //Se define un objeto de tipo coordenada y se definen posiciones.
    COORD dwPos;
    dwPos.X = 4;
    dwPos.Y = 5;

    //Posiciona el cursor de la consola con el primer parámetro que es el programa y como segundo el objeto que contiene las coordenadas.
    SetConsoleCursorPosition(hCon, dwPos);
    printf("*");

    return 0;
}
