#include <iostream>
#include <windows.h>
using namespace std;

void ingresarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor de la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void intercambioFilas(int matriz[4][4], int fila1, int fila2) {
    for (int i = 0; i < 4; i++) {
        int temp = matriz[fila1][i];
        matriz[fila1][i] = matriz[fila2][i];
        matriz[fila2][i] = temp;
    }
}

void imprimirMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int matriz[4][4];
    ingresarMatriz(matriz);
    
    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    intercambioFilas(matriz, 0, 2);

    cout << "Matriz después del intercambio de filas:" << endl;
    imprimirMatriz(matriz);

    return 0;
}
