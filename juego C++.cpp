#include <stdio.h>
#include <windows.h>

int main ()
{
    printf("*");

    HANDLE hCon;
    hCon = GetStdHandle();

    SetConsoleCursorPosition();
}
