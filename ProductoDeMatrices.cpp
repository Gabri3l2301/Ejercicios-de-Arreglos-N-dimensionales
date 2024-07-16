#include <iostream>
using namespace std;

int main(){
	int matriz1[3][3];
	int matriz2[3][3];
	int producto[3][3] = {};
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Ingrese el valor de la matriz1[" << i << "][" << j << "]: ";
			cin >> matriz1[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout << "Ingrese el valor de la matriz2[" << i << "][" << j << "]: ";
			cin >> matriz2[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 3; k++){
				producto[i][j] = producto[i][j] + (matriz1[i][k] * matriz2[k][j]);
			}
		}
	}
	
	cout << "Matriz resultante del producto: " << endl;
	for (int i=0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			cout << producto[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}