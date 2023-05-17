// P014_Bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//JULIO CESAR ESPINOZA VASQUEZ

#include <iostream>

int main()
{
    int opc = 0;
    int aux = 0;
    int i = 1000;

    while (true)
    {
        std::cout << " \tHola que, deseas hacer?\n ";
        std::cout << " 1.-Contar de 100 a 0\n ";
        std::cout << " 2-Contar hasta 100 lento\n ";
        std::cout << " 3-Contar de 10 en 10\n ";


        std::cin >> opc;
        switch (opc)
        {
        case 1: // contandor de 1000 al 0
            std::cout << "Estas en el contador del 1000 al 0\n";
            std::cout << "Con cual ciclo quiere hacer esto 1- for 2- while 3- do while\n";
            std::cin >> opc;
            switch (opc)
            {
            case 1:
                for (int i = 1000; i >= 0; i--)
                {
                    std::cout << "El contador va en: " << i << std::endl;

                }
                break;
            case 2:
                i = 1000;
                while (i >= 0) {
                    std::cout << "El contadorva en " << i << "\n";
                    i--;
                }

                break;
            case 3:
                i = 1000;
                do {

                    std::cout << i << std::endl;
                    i--;
                } while (i >= 0);

                break;
            default:
                std::cout << "no se cual es esa opcion\n" << std::endl;
                break;
            }
            system("pause");
            break;
        }
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
