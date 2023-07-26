#include <iostream>
#include <vector>

using namespace std;

// Funci�n para verificar si un n�mero es par
bool esPar(int num) {
    return num % 2 == 0;
}

int main() {
    int filas, columnas;
    
    // Solicitar al usuario el n�mero de filas y columnas
    cout << "Ingrese el n�mero de filas: ";
    cin >> filas;
    cout << "Ingrese el n�mero de columnas: ";
    cin >> columnas;
    
    std::vector< std::vector<int> > matriz(filas, std::vector<int>(columnas));
    
    // Rellenar la matriz con n�meros pares
    int num = 2; // Empezar con el primer n�mero par
    
    for (int fila = 0; fila < filas; ++fila) {
        for (int columna = 0; columna < columnas; ++columna) {
            matriz[fila][columna] = num;
            num += 2; // Incrementar al siguiente n�mero par
        }
    }
    
    // Mostrar la matriz
    std::cout << "Matriz generada:\n";
    for (int fila = 0; fila < filas; ++fila) {
        for (int columna = 0; columna < columnas; ++columna) {
            std::cout << matriz[fila][columna] << "\t";
        }
        std::cout << std::endl;
    }
    
}

