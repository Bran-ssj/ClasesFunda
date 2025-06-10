#include <iostream>

float cum(float Notauno, float Notados, float Notatres, float Sumanotas, int sumUV)
{
    float Sumanotas = 0;
    Sumanotas = Notauno + Notados + Notatres;
    float sumUV = 0;
    sumUV = Notauno * 5 + Notados * 5 + Notatres * 5;
    float resultado = 0;
    resultado = sumUV / 3;
    return resultado;
}
using namespace std;
struct Estudiante
{
    string nombre;
    string carnet;
    int edad;
    float cum;
};
int main()
{























    return 0;
}