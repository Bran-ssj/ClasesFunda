#include <iostream>

float suma(float Numerouno, float Numerodos)
{
    float resultado = 0;
    resultado = Numerouno + Numerodos;
    return resultado;
}

float resta(float Numerouno, float Numerodos)
{
    float resultado = 0;
    resultado = Numerouno - Numerodos;
    return resultado;
}
float multiplicacion(float Numerouno, float Numerodos)
{
    float resultado = 0;
    resultado = Numerouno * Numerodos;
    return resultado;
}
float division(float Numerouno, float Numerodos)
{
    float resultado = 0;

    if (Numerouno < Numerodos || Numerodos == 0)
    {
        resultado = 5000;
        return resultado;
    }
    else
    {
        resultado = Numerouno / Numerodos;
        return resultado;
    }
}

using namespace std;
int main()
{
    float numero1, numero2, sumatoria = 0, numero3 = 7, numero4 = 56, sumatoria2 = 0, resultadoResta = 0, resultadoMulti = 0, resultadoDiv = 0;
    cout << "Operaciones" << endl;
    cout << "ingrese el primer numero" << endl;
    cin >> numero1;

    cout << "Ingrese el segundo numero" << endl;
    cin >> numero2;

    sumatoria = suma(numero1, numero2);
    sumatoria2 = suma(numero3, numero4);
    resultadoResta = resta(numero1, numero2);
    resultadoMulti = multiplicacion(numero1, numero2);
    resultadoDiv = division(numero1, numero2);

    if (resultadoDiv == 5000)
    {
        cout << "No se puede realizar la division" << endl;
    }

    cout << "El resultado de la suma es: " << sumatoria << endl;
    cout << "El resultado de la segunda suma es: " << sumatoria2 << endl;
    cout << "El resultado de la resta es: " << resultadoResta << endl;
    cout << "El resultado de la multiplicacion es: " << resultadoMulti << endl;
    cout << "El resultado de la division es: " << resultadoDiv << endl;

    return 0;
}