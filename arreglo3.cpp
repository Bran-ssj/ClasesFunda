#include <iostream>
using namespace std;

int main()
{
    float notas2[5];
    for (int i = 0; i < 5; i++)
    {
        cout << " Ingrese la nota " << i + 1 << endl;

        cin >> notas2[i];
    }
    cout << "===============" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Todas las notas: " << notas2[i] << endl;
    }
    cout << "===============" << endl;
    for (int i = 4; i >= 0; i--)
    {
        cout << "--Todas las notas: " << notas2[i] << endl;
    }
    return 0;
}