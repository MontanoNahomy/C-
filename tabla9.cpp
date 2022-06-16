#include <iostream>

using namespace std;

int main ()
{
    cout<<"\n\n Ejemplo bucle while que imprime la tabla del 9";

    int tabla=9;
    int i = 1;
    while(i<=10)
    {
        cout<<"\n"<< tabla << " X " << i << " = " << (tabla * i);
        i++;
    }

    // Se pide por teclado un numero entero que debe estar entre 1 y 20.
    //Este numero representa la tabla que el usuario dese agenerar.
    //Se pide un bucle while generar la tabla de multiplicar.

    int num;
    cout<<"\n\n Ingrese la tabla que desea generar: ";
    cin>>num;
    if(!(num >= 1 && num <=20))
    {
        cout<<"\n\n Rango no valido....";
        return 0;
    }

    i = 1;
    while(i<=12)
    {
        cout<<"\n"<< num << " X " << i << " = " << (num * i);
        i++;
    }

    return 0;
}