#include <iostream>

using namespace std;

int menu();
int recur(int f, int c);

int main() {
	int resp = menu();
	if (resp == 1) {
		int x, y, cont = 1 ;
		cout << "Ingrese el numero de filas: \n";
		cin >> x;
		y = x + 1;
		int matriz[x][y];
		for(int f=0; f < x ; f++) {
			for(int c=0; c < y; c++) {
				if (f==c) {
					matriz[f][c] = cont;
					cont++;
				} else if (c == f+1 && matriz[f+1][c+1] == NULL) {
					matriz[f][] = cont;
				}
			}
		}
	} else if (resp == 2) {
		int tam;
		cout << "Ingrese el tamaño del arreglo.";
		cin >> tam;
		int arr[tam];
		for (int i = 0; i < tam; i++) {
		
		}
	} else {
	
	}
	return 0;
}

int menu() {
	cout << "-------Menu-------\n";
	cout << "1) Ejercicio 1\n";
	cout << "2) Ejercicio 2\n";
	cout << "3) Ejercicio 3\n";
	int resp;
	cin >> resp;
	return resp;
}

int recur(int f, int c, int n) {
	if () {
	
	} else if () {
	
	} else {
	
	}
}
