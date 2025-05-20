#include <iostream>
using namespace std;

int main() {
    //declarar las variables 
    int numero1,numero2,totalsuma,totalresta,totalmulti,totaldiv;
    cout<<"Hola Mundo";

    cout<<" Ingrese el primer numero ";
    cin >>numero1;
     cout<<" Ingrese el segundo numero ";
    cin >>numero2;
    
    totalsuma= numero1 + numero2;
    cout<<" Respuesta Suma "<<totalsuma;

    totalresta= numero1 - numero2;
    cout<<" Respuesta Resta "<<totalresta;

     totalmulti= numero1 * numero2;
    cout<<" Respuesta Multiplicacion "<<totalmulti;

    totaldiv= numero1 / numero2;
    cout<<" Respuesta division "<<totaldiv;

    return 0;
}