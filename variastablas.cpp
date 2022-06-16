#include <iostream>

using namespace std;

int main ()
{
    cout <<  "Ingrese un numero ";
    int tabla;
    cin>>tabla;
    
    int i=1;
    if (tabla >= 0)
	{
	     while (i <= 10)
	        {
		         cout << "\n" << tabla << " X " << i << " = " << (tabla * i) << endl;
                i++;
             }
	    }
	    else
        
		 return 0;
}