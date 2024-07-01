#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int hallarminimo(int, int);
int main(){
    int temperature[7];
    int s, promedio;
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cout << "Ingrese la temperatura del dia " << dias[j] << " :"; cin >> temperature[i];
        }
        s = s + temperature[i];
    }
    promedio = s / 7;
    return EXIT_SUCCESS;
}
int hallarminio(int a){
    int min = 0;
    for (int i = 0; i < 7; i++)
    {
        if (a < min)
        {
            min = a;
        }
        
    }
    
    return min;