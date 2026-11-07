#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    char procesarOtro = 's';

    while (procesarOtro == 's' || procesarOtro == 'S') {
        int cantidadEstudiantes = 0;

        while (cantidadEstudiantes <= 0) {
            cout << "Cantidad de estudiantes: ";
            cin >> cantidadEstudiantes;
            
            if (cin.fail()) { 
                cin.clear();
                cin.ignore(10000, '\n');
                cantidadEstudiantes = 0;
                cout << "Error: Entrada no valida. Ingrese un numero entero." << endl;
            } else if (cantidadEstudiantes <= 0) {
                cout << "Error: La cantidad debe ser mayor que 0." << endl;
            }
        }

        int aprobados = 0;
        int reprobados = 0;
        double sumaPromediosGrupo = 0.0;
        
        double mejorPromedio = -1.0;
        string mejorEstudiante = "";

        int i = 1;
        while (i <= cantidadEstudiantes) {
            string nombre;
            cout << "\nEstudiante " << i << endl;
            cout << "Nombre: ";
            cin >> ws;
            getline(cin, nombre);

            double sumaNotas = 0.0;
            int j = 1;
            
            while (j <= 4) {
                double nota = -1.0;
                
                while (nota < 0 || nota > 100) {
                    cout << "Calificacion " << j << ": ";
                    cin >> nota;
                    
                    if (cin.fail()) { 
                        cin.clear();
                        cin.ignore(10000, '\n');
                        nota = -1.0;
                        cout << "Error: Entrada no valida. Ingrese un numero." << endl;
                    } else if (nota < 0 || nota > 100) {
                        cout << "Error: La calificacion debe estar entre 0 y 100." << endl;
                    }
                }
                sumaNotas += nota;
                j++;
            }

            double promedio = sumaNotas / 4.0;
            
            cout << fixed << setprecision(2);
            cout << "Promedio: " << promedio << " - ";
            
            if (promedio >= 70) {
                cout << "Aprobado\n";
                aprobados++;
            } else {
                cout << "Reprobado\n";
                reprobados++;
            }

            if (promedio > mejorPromedio) {
                mejorPromedio = promedio;
                mejorEstudiante = nombre;
            }

            sumaPromediosGrupo += promedio;
            i++;
        }

        double promedioGeneral = sumaPromediosGrupo / cantidadEstudiantes;

        cout << "\n===== RESUMEN =====" << endl;
        cout << "Aprobados: " << aprobados << " | Reprobados: " << reprobados << endl;
        cout << "Promedio del grupo: " << promedioGeneral << endl;
        cout << "Mejor promedio: " << mejorEstudiante << " (" << mejorPromedio << ")" << endl;

        cout << "\n¿Desea procesar otro grupo? (s/n): ";
        cin >> procesarOtro;
    }

    return 0;
}