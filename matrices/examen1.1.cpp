#include<iostream>
#include<cmath> // Esto es necesario para la función abs()
using namespace std;

void imprimir(float a[3][4]) {
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 4; j++)
         cout << a[i][j] << " ";
      cout << "\n";
   }
}

void gaussJordan(float a[3][4]) {
    int i, j, k;
    float factor;
    // Implementación de pivote parcial
    for(i = 0; i < 3; i++) {
        // Buscar la fila con el valor absoluto maximo en columna i
        float maxEl = abs(a[i][i]);
        int maxRow = i;
        for (k = i + 1; k < 3; k++) {
            if (abs(a[k][i]) > maxEl) {
                maxEl = abs(a[k][i]);
                maxRow = k;
            }
        }
        // Intercambiar la fila máxima con la fila actual
        for (k = i; k < 4; k++) {
            float tmp = a[maxRow][k];
            a[maxRow][k] = a[i][k];
            a[i][k] = tmp;
        }
        // Reducción de Gauss-Jordan
        for (j = 0; j < 3; j++) {
            if (i != j) {
                factor = a[j][i] / a[i][i];
                for (k = 0; k < 4; k++) {
                    a[j][k] = a[j][k] - factor * a[i][k];
                }
            }
        }
    }
    // Normalizar las filas
    for(i = 0; i < 3; i++) {
        factor = a[i][i];
        for(k = 0; k < 4; k++) {
            a[i][k] = a[i][k] / factor;
        }
    }
}

int main() {
   char repetir;
   do {
       float a[3][4];
       int i, j;

       cout << "Ingresa los coeficientes de las ecuaciones: \n";
       for(i = 0; i < 3; i++) {
           for(j = 0; j < 4; j++) {
               cin >> a[i][j];
           }
       }
   
       gaussJordan(a);
       cout << "El resultado es:\n";
       imprimir(a);

       cout << "¿Quieres resolver otro sistema de ecuaciones? (s/n): ";
       cin >> repetir;
   } while(repetir == 's' || repetir == 'S');

   return 0;
}
