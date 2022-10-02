#include "pch.h"
#include<stdlib.h>
#include <ctime>
using namespace System;



int main(array<System::String ^> ^args)
{
    srand(time(NULL));
    Console::WriteLine("BIENVENIDO A LA CARRERA 'LIEBRE VS TORTUGA'");
    int* liebre;
    int* tortuga;
    int pistaLiebre[70];
    int pistaTortuga[70];
    Console::WriteLine();
    Console::WriteLine("Empieza la carrera, la liebre y la tortuga se encuentran en la posici�n 1");
    Console::WriteLine("PRESIONE ENTER PARA EMPEZAR LA CARRERA");
    Console::WriteLine();
    Console::ReadKey();


    int T = 0;
    int L = 0;
    while (T < 70 && L < 70) {
        for (int i = 0; i < 70; i++) {
            pistaTortuga[i] = rand() % 10;
            pistaLiebre[i] = rand() % 10;

        }
        liebre = pistaLiebre;
        tortuga = pistaTortuga;


        if (T == L) {
            Console::WriteLine("OUCH! SE TOPAN EN LA POSICI�N " + T);
        }
        if (0 <= *liebre && 1 >= *liebre) {
            liebre = liebre;
            L = L;
            Console::WriteLine("La liebre se encuentra en la posici�n " + L + " ya que se qued� dormida");
        }
        else if (2 <= *liebre && 3 >= *liebre) {
            liebre = liebre + 9;
            L = L + 9;
            Console::WriteLine("La liebre se encuentra en la posici�n " + L + " con un gran salto");
        }
        else if (4 == *liebre) {
            liebre = liebre - 12;
            L = L - 12;
            if (L < 0) {
                L = 1;
                liebre = &pistaLiebre[0];
            }
            Console::WriteLine("La liebre se encuentra en la posci�n " + L + " con un gran resbal�n");
        }
        else if (5 <= *liebre && 7 >= *liebre) {
            liebre = liebre + 1;
            L = L + 1;
            Console::WriteLine("La liebre se encuentra en la posici�n " + L + " con un salto peque�o");
        }
        else if (8 <= *liebre && 9 >= *liebre) {
            liebre = liebre - 2;
            L = L - 2;
            if (L < 0) {
                L = 1;
                liebre = &pistaLiebre[0];
            }
            Console::WriteLine("La liebre se encuentra en la posici�n " + L + " con un resbal�n peque�o");
        }

        if (0 <= *tortuga && 5 >= *tortuga) {
            tortuga = tortuga + 3;
            T = T + 3;
            Console::WriteLine("La tortuga se encuentra en la posici�n " + T + " con un pas� veloz");
        }

        else if (*tortuga == 6 || *tortuga == 7) {
            tortuga = tortuga - 6;
            T = T - 6;
            if (T < 0) {
                T = 1;
                tortuga = &pistaTortuga[0];
            }
            Console::WriteLine("La tortuga se encuentra en la posici�n " + T + " con un resbalon");
        }
        else if (8 <= *tortuga && 9 >= *tortuga) {
            tortuga = tortuga + 1;
            T = T + 1;
            Console::WriteLine("La tortuga se encuentra en la posici�n " + T + " con un paso lento");
        }

        Console::ReadKey();
        Console::WriteLine();
    }
    if (T >= 70) {
        Console::WriteLine("EL MILAGRO HA SUCEDIDO! LA TORTUGA HA GANADO!");
        Console::WriteLine("SE LLEVA SUS ZANAHORIAS Y LECHUGA FRESCA A CASA");
    }
    if (L >= 70) {
        Console::WriteLine("LAS APUESTAS ERAN SEGURAS! GANA LA LIEBRE!");
        Console::WriteLine("SE LLEVA SUS ZANAHORIAS Y LECHUGA FRESCA A CASA");
    }


    return 0;
}
