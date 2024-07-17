#include <iostream>
using namespace std;

void ingresarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Ingrese el valor de la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void rotarMatriz(int matriz[4][4]) {
    int aux[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            aux[i][j] = matriz[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matriz[i][j] = aux[3 - j][i];
        }
    }
}

void mostrarMatriz(int matriz[4][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[4][4];
    ingresarMatriz(matriz);

    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz);

    rotarMatriz(matriz);

    cout << "Matriz rotada 90 grados en sentido horario:" << endl;
    mostrarMatriz(matriz);

    return 0;
}