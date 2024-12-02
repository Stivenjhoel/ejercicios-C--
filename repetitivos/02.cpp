#include <iostream>

using namespace std;

int main()
{
    int Multipicando, Multiplicador;
    
    cout<<"Multipicando : ";cin>>Multipicando;
    cout<<"Multiplicador : ";cin>>Multiplicador;

    for (int n = Multipicando; Multiplicador-- > 1; Multipicando += n );
    cout<<"Producto ="<<Multipicando<<endl;
    return 0;
}
