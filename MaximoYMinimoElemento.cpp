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

void buscarMaxMin(int matriz[4][4], int &max, int &min, int &maxFila, int &maxCol, int &minFila, int &minCol) {
    max = matriz[0][0];
    min = matriz[0][0];
    maxFila = 0;
    maxCol = 0;
    minFila = 0;
    minCol = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                maxFila = i;
                maxCol = j;
            }
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                minFila = i;
                minCol = j;
            }
        }
    }
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    int matriz[4][4];
    ingresarMatriz(matriz);

    int max, min, maxFila, maxCol, minFila, minCol;
    buscarMaxMin(matriz, max, min, maxFila, maxCol, minFila, minCol);

    cout << "El valor máximo es: " << max << " en la posición (" << maxFila << ", " << maxCol << ")" << endl;
    cout << "El valor mínimo es: " << min << " en la posición (" << minFila << ", " << minCol << ")" << endl;

    return 0;
}
