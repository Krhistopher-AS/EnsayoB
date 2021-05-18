// creando el pull request
// numeros alrevez 

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string numero, numero2 = "";
    cout << "Ingrese el numero estraborico:" << endl;
    cin >> numero;
    for (int i = 0; i < numero.length(); i++)
    {
        numero2.append(numero.substr(numero.length()- 1 - i, 1));
    }
    cout << numero2 << endl;
    if (numero == numero2)
    {
        cout << "El numero es estraborico" << endl;
    }
    else
    {
        cout << "El numero no es estraborico" << endl;
    }

}
