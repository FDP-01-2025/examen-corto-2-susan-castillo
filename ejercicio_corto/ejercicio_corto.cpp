#include <iostream>
using namespace std;

int main()
{
    int age = 0, option = 0;

    cout << "BIENVENIDO A NUESTRA TIENDA.";
    cout << "Para comenzar, por favor ingresa tu edad: ";
    cin >> age;

    if (age < 16)
    {
        cout << "Lo siento pero no puedes continuar con tu compra.";
    }
    else
    {
        cout << "Gracias! Hemos confirmado tu edad, para continuar por favor selecciona el numero de la categoría: \n";
        cout << "1. Estudiante \n";
        cout << "2. Profesional \n";
        cout << "3. Ver todos \n";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "ESTUDIANTE. Dispositivos disponibles: \n";
            cout << "1. Laptop Básica: $900 \n";
            cout << "2. Tablet Estudiantil: $600 \n";
            cout << "3. Chromebook: $700 \n";
            break;
        case 2:
            cout << "PROFESIONALES. Dispositivos disponibles: \n";
            cout << "1. Laptop Avanzada: $1500 \n";
            cout << "2. Tablet Pro: $1200 \n";
            cout << "3. Estación de Trabajo: $2000 \n";
            break;
        case 3:

            break;

        default:
            break;
        }
    }

    return 0;
}