//Se incluyen las librerias
#include <iostream>
using namespace std;

int main()
{
    //Declaracion de variables
    string option1;
    int age = 0, option2;
    double saldo = 1000, precio = 0, restante = 0, faltante = 0, descuento = 0;

    //Datos de entrada
    cout << "BIENVENIDO A NUESTRA TIENDA. \n";
    cout << "Para comenzar, por favor ingresa tu edad: ";
    cin >> age;

    //Validacion de la edad
    if (age < 16)
    {
        cout << "Lo siento pero no puedes continuar con tu compra.";
    }
    else
    {
        cout << "Gracias! Hemos confirmado tu edad, para continuar por favor selecciona la categoria: \n";
        cout << "1. Estudiante \n";
        cout << "2. Profesional \n";
        cout << "3. Todos \n";
        cout << "Ingrese el tipo de usuario: ";
        cin >> option1;

        //Validadcion del tipo de usuario
        if (option1 == "Estudiante" || option1 == "estudiante")
        {
            cout << "ESTUDIANTE. Dispositivos disponibles (Descuento del 20%): \n";
            cout << "1. Laptop Basica: $900 \n";
            cout << "2. Tablet Estudiantil: $600 \n";
            cout << "3. Chromebook: $700 \n";
            cout << "Seleccione un dispositivo: ";
            cin >> option2;

            // SWITCH que valida el producto seleccionado.
            switch (option2)
            {
            case 1:
                precio = 900;
                cout << "Producto seleccionado: Laptop Basica: $900\n";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {

                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\n Dispositivo: Laptop Basica\n Dinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Laptop Basica" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 2:
                precio = 600;
                cout << "Producto seleccionado: Tablet Estudiantil: $600 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Tablet Estudiantil \n Dinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Tablet Estudiantil" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 3:
                precio = 700;
                cout << "Producto seleccionado: Chromebook: $700 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\n Dispositivo: Chromebook\n Dinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Chromebook" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            default:
                cout << "Por favor intentalo nuevamente. El numero de dispositivo seleccionado no existe.";
                break;
            }
        }
        else if (option1 == "Profesional" || option1 == "profesional")
        {
            cout << "PROFESIONALES. Dispositivos disponibles (Descuento del 10%): \n";
            cout << "1. Laptop Avanzada: $1500 \n";
            cout << "2. Tablet Pro: $1200 \n";
            cout << "3. Estacion de Trabajo: $2000 \n";
            cout << "Seleccione un dispositivo: ";
            cin >> option2;

            // SWITCH que valida el producto seleccionado.
            switch (option2)
            {
            case 1:
                precio = 1500;
                cout << "Producto seleccionado: Laptop Avanzada: $1500 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {

                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\nDispositivo: Laptop Avanzada\nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.10);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Laptop Avanzada" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 2:
                precio = 1200;
                cout << "Producto seleccionado: Tablet Pro: $1200 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\nDispositivo: Tablet Pro\nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.10);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Tablet Pro" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 3:
                precio = 2000;
                cout << "Producto seleccionado: Estación de Trabajo: $2000 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\nDispositivo: Estacion de Trabajo\nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Estación de Trabajo" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            default:
                cout << "Por favor intentalo nuevamente. El numero de dispositivo seleccionado no existe.";
                break;
            }
        }
        else if (option1 == "todos" || option1 == "Todos")
        {
            cout << "Seleccione un dispositivo: ";
            cout << "1. Laptop Basica: $900 \n";
            cout << "2. Tablet Estudiantil: $600 \n";
            cout << "3. Chromebook: $700 \n";
            cout << "4. Laptop Avanzada: $1500 \n";
            cout << "5. Tablet Pro: $1200 \n";
            cout << "6. Estacion de Trabajo: $2000 \n";
            cout << "Seleccione un dispositivo: ";
            cin >> option2;

            switch (option2)
            {
            case 1:
                precio = 900;
                cout << "Producto seleccionado: Laptop Basica: $900 \n";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {

                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\nDispositivo: Laptop Basica\nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Laptop Básica" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 2:
                precio = 600;
                cout << "Producto seleccionado: Tablet Estudiantil: $600 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\nDispositivo: Tablet Estudiantil\nDinero faltante: " << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Tablet Estudiantil" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 3:
                precio = 700;
                cout << "Producto seleccionado: Chromebook: $700 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero.\nDispositivo: Chromebook\nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Chromebook" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 4:
                precio = 1500;
                cout << "Producto seleccionado: Laptop Avanzada: $1500 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {

                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \n Dispositivo: Laptop Avanzada \n Dinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.10);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Laptop Avanzada" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 5:
                precio = 1200;
                cout << "Producto seleccionado: Tablet Pro: $1200 ";
                cout << "Tu saldo: $1000";
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \nDispositivo: Tablet Pro \nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.10);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Tablet Pro" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            case 6:
                precio = 2000;
                cout << "Producto seleccionado: Estación de Trabajo: $2000 ";
                cout << "Tu saldo: $1000" << endl;
                if (precio > saldo)
                {
                    faltante = saldo - precio;
                    cout << "Lo siento pero no tienes suficiente dinero. \nDispositivo: Estación de Trabajo \nDinero faltante: $" << faltante;
                }
                else
                {
                    descuento = precio - (precio * 0.20);
                    restante = saldo - descuento;
                    cout << "Compra exitosa!" << endl;
                    cout << "Dispositivo comprado: Estación de Trabajo" << endl;
                    cout << "Dinero restante: $" << restante;
                }
                break;
            default:
                cout << "Por favor intentalo nuevamente. El numero de dispositivo seleccionado no existe.";
                break;
            }
        }
        else
        {
            cout << "Por favor intentalo nuevamente. La categoria no existe.";
        }

        //Finaliza el programa.
        return 0;
    }
}
