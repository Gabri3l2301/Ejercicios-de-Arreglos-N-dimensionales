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

int sumaDiagonales(int matriz[4][4]) {
    int sumaPrincipal = 0, sumaSecundaria = 0;
    for (int i = 0; i < 4; i++) {
        sumaPrincipal += matriz[i][i];
        sumaSecundaria += matriz[i][3 - i];
    }
    return sumaPrincipal + sumaSecundaria;
}

int main() {
    int matriz[4][4];
    ingresarMatriz(matriz);

    int suma = sumaDiagonales(matriz);
    cout << "La suma de las diagonales es: " << suma << endl;

    return 0;
}