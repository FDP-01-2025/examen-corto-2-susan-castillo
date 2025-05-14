#include <iostream>
using namespace std;

int main()
{
    int age = 0, option1 = 0, option2;
    double saldo = 1000, precio = 0, restante = 0, faltante = 0, descuento = 0;

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
        cin >> option1;

        switch (option1)
        {
        case 1:
            cout << "ESTUDIANTE. Dispositivos disponibles (Descuento del 20%): \n";
            cout << "1. Laptop Básica: $900 \n";
            cout << "2. Tablet Estudiantil: $600 \n";
            cout << "3. Chromebook: $700 \n";
            cin >> option2;

            // SWITCH que valida el producto seleccionado.
            switch (option2)
            {
            case 1:
                precio = 900;
                cout << "Producto seleccionado: Laptop Básica: $900 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {

                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Laptop Básica \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!. \n Dispositivo comprado: Laptop Básica \n Dinero restante: " << restante;
                }
                break;
            case 2:
                precio = 600;
                cout << "Producto seleccionado: Tablet Estudiantil: $600 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Tablet Estudiantil \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!. \n Dispositivo comprado: Tablet Estudiantil \n Dinero restante: " << restante;
                }
                break;
            case 3:
                precio = 700;
                cout << "Producto seleccionado: Chromebook: $700 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Chromebook \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!. \n Dispositivo comprado: Chromebook \n Dinero restante: " << restante;
                }
                break;
            default:
                cout << "Por favor intentalo nuevamente. El numero de dispositivo seleccionado no existe.";
                break;
            }
            break;
        case 2:
            cout << "PROFESIONALES. Dispositivos disponibles (Descuento del 10%): \n";
            cout << "1. Laptop Avanzada: $1500 \n";
            cout << "2. Tablet Pro: $1200 \n";
            cout << "3. Estación de Trabajo: $2000 \n";
            cin >> option2;

                        // SWITCH que valida el producto seleccionado.
            switch (option2)
            {
            case 1:
                precio = 1500;
                cout << "Producto seleccionado: Laptop Avanzada: $1500 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {

                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Laptop Avanzada \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.10);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!. \n Dispositivo comprado: Laptop Avanzada \n Dinero restante: " << restante;
                }
                break;
            case 2:
                precio = 1200;
                cout << "Producto seleccionado: Tablet Pro: $1200 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Tablet Pro \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.10);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!. \n Dispositivo comprado: Tablet Pro \n Dinero restante: " << restante;
                }
                break;
            case 3:
                precio = 2000;
                cout << "Producto seleccionado: Estación de Trabajo: $2000 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Estación de Trabajo \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!. \n Dispositivo comprado: Estación de Trabajo \n Dinero restante: " << restante;
                }
                break;
            default:
                cout << "Por favor intentalo nuevamente. El numero de dispositivo seleccionado no existe.";
                break;
            }
            break;
        case 3:

            break;

        default:
        cout << "Por favor intentalo nuevamente. El numero de categoria no existe.";
            break;
        }
    }

    return 0;
}