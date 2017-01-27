#include <iostream>
#include <cmath>

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
				} else if (c == f+1 && matriz[f+1][c+1] == 0) {
					matriz[f][c] = cont;
				}
			}
		}
	} else if (resp == 2) {
		int tam, mayor = 0, menor = 0;
		cout << "Ingrese el tamaño del arreglo.\n";
		cin >> tam;
		while (tam < 5) {
			cout << "Numero invalido, ingreselo de nuevo.\n";
			cin >> tam;
		}
		int arr[tam];
		for (int i = 0; i < tam; i++) {
			cout << "Ingrese un numero.\n";
			int resp;
			cin >> resp;
			arr[i] = resp;
			if (resp > mayor) {
				mayor = resp;
			}
			if (resp < menor) {
				menor = resp;
			}
		}
		int temp = 0;
		for (int i = 0; i < tam; i++) {
			for (int j = 0; j < tam; j++) {
				if (arr[i] < arr[j]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
		for (int i = 0; i < tam; i++) {
			cout << "[ " << arr[i] << " ] ";
		}
		cout << "\n";
		cout << "El numero mas grande es: " << mayor << "\n";
		cout << "El numero mas pequeño es: " << menor << "\n";
	} else {
		double lad1, lad2, lad3, s, area, A,B,Y;
		cout << "Ingrese el primer lado: \n";
		cin >> lad1;
		cout << "Ingrese el segundo lado: \n";
		cin >> lad2;
		cout << "Ingrese el tercer lado: \n";
		cin >> lad3;
		s = (lad1 + lad2 + lad3) / 2;
		area = sqrt ((s)*(s-lad1)*(s-lad2)*(s-lad3));
		
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
}
