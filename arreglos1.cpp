#include  <iostream>
#include <conio.h>
using namespace std; 
int main(){ 
    int n, s = 0; float j = 0, porcent;
cout <<"----------SUMA Y PORCENTAJE DE 0S----------\n\n";
    cout << "Ingrese la cantidad de elementos: "; cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el casillero ["<<i<<"]: "; cin >> array[i];
        s = s + array[i];
        if (array[i] == 0)
        {
            j++;
        }
        
    }
    porcent = (j / n) * 100;

    cout << "La suma de los numeros ingresados son: " << s << "\n\n";
    cout << "El porcentaje de 0 dentro del array es: " << porcent << " %." << endl;

    return EXIT_SUCCESS;
}