#include <iostream>
using namespace std;

void ingresarMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Ingrese el valor de la matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void buscarValor(int matriz[3][3], int valor) {
    bool encontrado = false;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] == valor) {
                cout << "El valor " << valor << " se encuentra en la Fila " << i << ", Columna " << j << endl;
                encontrado = true;
            }
        }
    }
    if (!encontrado) {
        cout << "El valor " << valor << " no se encuentra en la matriz." << endl;
    }
}

int main() {
    int matriz[3][3];
    ingresarMatriz(matriz);

    int valor;
    cout << "Ingrese el valor que desea buscar: ";
    cin >> valor;

    buscarValor(matriz, valor);

    return 0;
}
