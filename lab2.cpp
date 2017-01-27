#include <iostream>
#include <math.h>

using namespace std;

int menu();

int main() {
	int resp = menu();
	if (resp == 1) {
		int x, y, cont = 1, f = 0, c = 0, cont1 = 0, cont2 = 0;
		cout << "Ingrese el numero de filas: \n";
		cin >> x;
		y = x + 1;
		int mat[x][y];
		for (int i = 0; i < x * y; i++) {
			if (f < x && c < y) {
				mat[f][c] = cont;
				cont++;
				f++;
				c++;
			} else if (f == x && c < y) {
				f == cont1;
				mat[f][c] = cont;
				cont++;
				f++;
				c++;
				cont1++;
			} else if (c == y) {
				c == cont2;
				mat[f][c] = cont;
				cont++;
				f++;
				c++;
				cont2++;
			}
		}
		for(int i=0; i < x ; i++) {
                        for(int j=0; j < y; j++) {
                                cout << "[ " << mat[i][j] << " ] ";
                        }
			cout << "\n";
                }
		/*for(int f=0; f < x ; f++) {
			for(int c=0; c < y; c++) {
				if (f==c) {
					matriz[f][c] = cont;
					cont++;
				} else if (c == f+1 && matriz[f+1][c+1] == 0) {
					matriz[f][c] = cont;
				}
			}
		}*/
		/*for (int i = 0; i < x; i++) {
			for(int j = 0; j < y; j++) {
				cout << "[ " << i << "," << j << " ] ";
				i++;
				if (i == x) {
					if(j != y) {
						i = 0;
					} else { 
						break;
						break;
					}
				}
			}
			cout << "\n";
		}
		*/
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
		double lad1, lad2, lad3, s, area, A = 0,B = 0,C = 0;
		cout << "Ingrese el primer lado: \n";
		cin >> lad1;
		cout << "Ingrese el segundo lado: \n";
		cin >> lad2;
		cout << "Ingrese el tercer lado: \n";
		cin >> lad3;
		s = (lad1 + lad2 + lad3) / 2;
		area = sqrt ((s)*(s-lad1)*(s-lad2)*(s-lad3));
		A = asin(((lad1 * lad1) - (lad2 * lad2)  - (lad3 * lad3)) / -2*(lad2)*(lad3));
		B = acos((-1* (lad1 * lad1) + (lad2 * lad2) - (lad3 * lad3)) / -2*(lad1)*(lad3));
		C = acos((-1* (lad1 * lad1) - (lad2 * lad2) + (lad3 * lad3)) / -2*(lad1)*(lad2));
		bool boo = false;
		if (A == 90 || B == 90 || C == 90) {
			boo = true;
		}
		if (boo == true) {
			cout << "El triangulo es rectangulo.\n";
		} else {
			cout << "El triangulo no es rectangulo.\n";
		}
		cout << "El area es de: " << area << "\n";
		cout << "El angulo a es de: " << A << "\n";
		cout << "El angulo b es de: " << B << "\n";
		cout << "El angulo c es de: " << C << "\n";
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
