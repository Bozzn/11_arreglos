//by:Piero García.

#include <iostream>
#include <conio.h>
using namespace std; 
int main(){
    int n;
    cout << "Ingrese la cantidad de elementos que desea agregar al arreglo: "; cin >> n;
    int numeros[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Digite un numero y se guardara en el casillero ["<<i<<"]: "; cin >> numeros[i];
    }
    
    int *dir_num, i = 0;
    dir_num = numeros;
    cout << "--------------NUMEROS PARES E IMPARES--------------";
    while (i < n)
    {
        if (*dir_num % 2 == 0)
        {
            cout << "El numero de la posicion["<<i<<"] es: " << *dir_num << " (PAR)." << endl; 
        }
        else
        {
            cout << "El numero de la posicion ["<<i<<"] es: " << *dir_num << " (IMPAR)." <<endl;

        }
        
        dir_num++;
        i++;
        
    }
    

    return EXIT_SUCCESS;
}