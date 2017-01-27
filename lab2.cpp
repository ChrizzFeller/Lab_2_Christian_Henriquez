#include <iostream>

using namespace std;

int menu();

int main() {
	int resp = menu();
	if (resp == 1) {
		int x, y, cont = 1 ;
		cout << "Ingrese el numero de filas: \n";
		cin >> x;
		y = x + 1;
		int matriz[x][y];
		for (int i=0; i < x*y ; i++) {
			for(int f=0; f < x ; f++) {
				for(int c=0; c < y; c++) {
					if (f==c) {
						matriz[f][c] = cont;
						cont++;
					} else if(f+1 != NULL || c+1 != NULL) {
						
					}
				}
			}
		}
	} else if (resp == 2) {
	
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
