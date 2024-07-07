//by:Piero García.

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main(){
    int n;
    float promedio[7], suma;
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    for (int i = 0; i < 7; i++)
    {
        cout << "Ingrese el numero de temperaturas registradas el dia " << dias[i] << " : "; cin >> n;
        float temperature[n];
        suma = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese la temperatura " << i + 1 << ": "; cin >> temperature[i];
        suma = suma + temperature[i];
    }
        promedio[i] = suma / n;
    }
    
    float min; 
    min = 999;
    for (int i = 0; i < 7; i++)
    {
        if (promedio[i] < min)
        {
        min = promedio[i];
        }
        
    }
    
    float max;
    max = -999;
    for (int i = 0; i < 7; i++)
    {
        if (promedio[i] > max)
        {
        max = promedio[i];
        }
    }
    
cout << "\n----------REGISTRO DE DIAS-----------\n\n";

    cout << "PROMEDIO: \n";
    for (int i = 0; i < 7; i++)
    {
            cout << dias[i] << ": " <<  promedio[i] << " C.\n";
    }
    

cout << "\n-----------EL/LOS DIAS CON MENOR TEMPERATURA-----------\n\n";

    //IMPRIMIR LOS DIAS CON MENOR TEMPERATURA.
    for (int i = 0; i < 7; i++)
    {
        if (promedio[i] == min)
        {
            cout << dias[i] << ": " << min << " C.\n";
        }
        
    }
    
    float val;
    cout << "\n-----------EL/LOS DIAS CON MAYOR TEMPERATURA-----------\n\n";

    //IMPRIMIR LOS DIAS CON MAYOR TEMPERATURA.
    cout << "Ingrese un un valor: "; cin >> val;
    if (val == max)
    {
    
    for (int i = 0; i < 7; i++)
    {
        if (promedio[i] == max)
        {
            cout << dias[i] << ": " << max << " C.\n";
        }
        
    }
    }
    else
    {
        cout << "ERROR | El valor ingresado no es la temperatura maxima.";
    }

    return EXIT_SUCCESS;
}
