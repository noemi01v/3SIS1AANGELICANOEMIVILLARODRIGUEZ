#include <iostream>
#include <vector>

using namespace std;

// Función para verificar si un número es par
bool esPar(int num) {
    return num % 2 == 0;
}

int main() {
    int filas, columnas;
    
    // Solicitar al usuario el número de filas y columnas
    cout << "Ingrese el número de filas: ";
    cin >> filas;
    cout << "Ingrese el número de columnas: ";
    cin >> columnas;
    
    std::vector< std::vector<int> > matriz(filas, std::vector<int>(columnas));
    
    // Rellenar la matriz con números pares
    int num = 2; // Empezar con el primer número par
    
    for (int fila = 0; fila < filas; ++fila) {
        for (int columna = 0; columna < columnas; ++columna) {
            matriz[fila][columna] = num;
            num += 2; // Incrementar al siguiente número par
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

