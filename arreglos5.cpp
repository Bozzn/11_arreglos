//by:Piero García.

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main(){
    int n, m;
    cout << "\n\n-------------ALUMNOS COMUNES----------------\n\n";
    cout << "Ingrese el numero de alumnos del curso de FP: "; cin >> n;
    cout << "Ingrese el numero de alumnos del curso de PG: "; cin >> m;
    string alumnosFP[n];
    string alumnosPG[m];
    string nomComun[n];
    cout << "Alumnos del curso de FP: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese el nombre del alumno numero["<< i + 1 <<"]: "; cin >> alumnosFP[i]; 
    }
    cout << "Alumnos del curso de PG: \n";
    for (int i = 0; i < m; i++)
    {
        cout << "Ingrese el nommbre del alumno numero["<< i + 1 << "]: "; cin >> alumnosPG[i];
    }
    int y = 0;
cout << "\n\n---------------LOS ALUMNOS QUE LLEVAN EL MISMO CURSO SON-----------------\n\n";
    for (int i = 0; i < m || i < n; i++)
    {
        for (int j = 0; j < m || j < n; j++)
        {
            
        if (alumnosFP[i] == alumnosPG[j])
        {
            nomComun[y] = alumnosFP[i];
            y++;
        }
        }
        
    }
    
    cout << "Total: " << y << " Estudiantes \n";
    for (int i = 0; i < y; i++)
    {
    cout << nomComun[i] << ".\n";
    }
    
    





    return EXIT_SUCCESS;
}