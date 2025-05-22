#include <iostream>
using namespace std;

int main(){
    int n,primo,modulo;
    //Declarar variables

primo=1;

cout << "Ingrese un numero "<<endl;

cin >> n;

    for(int i = n - 1 ; i >= 2; i=i-1 ) {
        modulo = n % 1;

        if ( modulo == 0 ){
        cout << "El numero no es primo ";
            primo = 0;
             break;}

        }

        if (primo ==1){
            cout << " El numero es primo ";


        }
        
    
    return 0;
}
