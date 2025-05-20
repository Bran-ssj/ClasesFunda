#include "iostream"
using namespace std;

int main(){
//declaración de variables
    float nota1, nota2, nota3, promedio, sumaTotal;
    cout<<"Ingrese su primer nota: ";
    cin>>nota1;
    cout<<"Ingresa su segunda nota: ";
    cin>>nota2;
    cout<<"Ingresa su tercer nota: ";
    cin>>nota3;
    //el promedio debe ser mayor a 6 para aprobar
    sumaTotal= nota1 + nota2 + nota3;
    promedio= sumaTotal/3;
cout<<"Tu promedio es "<<promedio<< "\n";
     if(promedio>=6){

        cout<<"Felicidades, usted ha aprobado";
     } else {
        cout<<"Usted ha reprobado ";
     }



return 0;
}
    
