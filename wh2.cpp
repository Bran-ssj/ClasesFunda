#include <iostream>
using namespace std;

int main()
{
    // Declarar variables
    float horas, precioHora, salario;
    string nombre = "";
    int datos;
    cout << "Ingrese su nombre completo " << endl;
    cin >> nombre;
    // Pedir datos
    cout << "Ingrese su numero de horas" << endl;
    cin >> horas;

    cout << "Ingrese el precio de sus horas de trabajo " << endl;
    cin >> precioHora;

    // Realizar proceso
    if (horas <= 44)
    {
        salario = horas * precioHora;
    }
    else if (horas > 44)
    {
        salario = 44 * precioHora + 1.5 * precioHora * (horas - 44);
    }
    cout << nombre << salario;
 //  ---------------------------------------------------------------------------------------------------
    cout << "¿Quieres calcular mas datos? 1 = Si, 2 = No"<<endl;
    cin >> datos;

    while (datos = 1)
    {
        cout << "Ingrese su nombre completo " << endl;
        cout << nombre;
        // Pedir datos
        cout << "Ingrese su numero de horas" << endl;
        cin >> horas;

        cout << "Ingrese el precio de sus horas de trabajo " << endl;
        cin >> precioHora;

        // Realizar proceso
        if (horas <= 44)
        {
            salario = horas * precioHora;
        }
        else if (horas > 44)
        {
            salario = 44 * precioHora + 1.5 * precioHora * (horas - 44);
        }
        cout << nombre << salario;
    }

    return 0;
}