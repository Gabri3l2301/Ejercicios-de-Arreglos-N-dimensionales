#include <iostream>
using namespace std;

void ingresarMatriz(int matriz[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << "Ingrese el valor de la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void reflejarImagen(int matriz[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][5 - j];
            matriz[i][5 - j] = temp;
        }
    }
}

void imprimirMatriz(int matriz[6][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[6][6];
    ingresarMatriz(matriz);

    cout << "Matriz original:" << endl;
    imprimirMatriz(matriz);

    reflejarImagen(matriz);

    cout << "Matriz reflejada horizontalmente:" << endl;
    imprimirMatriz(matriz);

    return 0;
}