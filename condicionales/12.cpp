#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Numero;
    string dias[] = {"Lunes","Martes","Miercoles","Jueves","Viernes","Sabado","Domingo"};
    
    cout<<"Numero:";cin>>Numero;
    
    if ( Numero >=1 && Numero <=7 ) cout<<"Dia :"<<dias[Numero-1]<<endl;
    else cout<<"Error"<<endl;
    
    return 0;
}