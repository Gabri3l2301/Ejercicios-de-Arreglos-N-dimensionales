#include <iostream>
using namespace std;

void imprimirCuadradoLatino(int N) {
    int cuadradoLatino[N][N];
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cuadradoLatino[i][j] = (i + j) % N + 1;
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << cuadradoLatino[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
	int N;
	cout << "Ingrese el orden de la matriz: " << endl;
    cin >> N;
    imprimirCuadradoLatino(N);

    return 0;
}