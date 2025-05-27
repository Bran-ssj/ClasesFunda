#include <iostream>
using namespace std;

int main(){
//Declarar variables
    int numero=0, suma=0, posicion=0;
    int sumatoria[25]={0};
    
    cout<<"Ingrese un numero entero "<<endl;
    cin>>sumatoria[posicion];



    while (sumatoria[posicion] >= 0){

       
        cout<<"Ingrese otro numero "<<endl;
        posicion++;
        cin>>sumatoria[posicion];

    }

    for(int i=0 ; i<posicion; i++){
        suma = suma + sumatoria[i];

    }
    cout<<"La suma total es: "<<suma;
    
    
    return 0;
}
