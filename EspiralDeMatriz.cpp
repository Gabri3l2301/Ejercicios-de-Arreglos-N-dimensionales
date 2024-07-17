#include <iostream>
using namespace std;

void ingresarMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Ingrese el valor de la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void imprimirEspiral(int matriz[5][5], int tam) {
    int fila_inicio = 0, fila_fin = tam - 1;
    int columna_inicio = 0, columna_fin = tam - 1;

    while (fila_inicio <= fila_fin && columna_inicio <= columna_fin) {

        for (int i = columna_inicio; i <= columna_fin; ++i) {
            cout << matriz[fila_inicio][i] << " ";
        }
        fila_inicio++;

        for (int i = fila_inicio; i <= fila_fin; ++i) {
            cout << matriz[i][columna_fin] << " ";
        }
        columna_fin--;

        if (fila_inicio <= fila_fin) {
            for (int i = columna_fin; i >= columna_inicio; --i) {
                cout << matriz[fila_fin][i] << " ";
            }
            fila_fin--;
        }

        if (columna_inicio <= columna_fin) {
            for (int i = fila_fin; i >= fila_inicio; --i) {
                cout << matriz[i][columna_inicio] << " ";
            }
            columna_inicio++;
        }
    }
    cout << endl;
}

int main() {
    int matriz[5][5];
    ingresarMatriz(matriz);

    cout << "Recorrido en espiral: " << endl;
    imprimirEspiral(matriz, 5);

    return 0;
}