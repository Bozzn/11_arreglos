//by:Piero García.

#include <iostream>
#include <conio.h>
using namespace std;
int *arreglo, numArreglo, num;

int multiplos(int num, int limt);
void PrintVector();


int main(){
    cout << "\n\n------------RELLENAR ARREGLO CON MULTIPLOS--------------\n\n";
    PrintVector();
    delete[] arreglo;

    return EXIT_SUCCESS;
}
void PrintVector(){
    
    cout << "Ingrese el tamaño de almacenamiento que desea tener en el arreglo: "; cin >> numArreglo;
    arreglo = new int [numArreglo];
    cout << "Ingrese un numero y rellenare el arreglo con sus multiplos: "; cin >> num;
    multiplos(num, numArreglo);
    for (int i = 0; i < numArreglo; i++)
    {
        cout << "Elemento ["<<i<<"]: " << arreglo[i] << endl;
    }
    
    

}
int multiplos(int num, int limit){
    
    for (int i = 0; i < limit; i++)
    {
        arreglo[i] = num * (i+1);   
    }
    return 0;
    
}
