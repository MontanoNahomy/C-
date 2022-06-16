#include <iostream>

using namespace std;

int main ()
{
    cout<<"Ejemplo del bucle while";

    int cont=10;
    int tabla =5;
    do {
        cout<<"\n"<<tabla << " X " << cont <<" = " << (tabla*cont);
        cont --;
    } while(cont>=1);
    
    return 0;
}