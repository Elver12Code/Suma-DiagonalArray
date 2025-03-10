#include <iostream>
using namespace std;

void llenarMatriz(int matriz[][10], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingresa el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int sumaDiagonales(int matriz[][10], int n) {
    int sumaPrincipal = 0, sumaSecundaria = 0;
    for (int i = 0; i < n; i++) {
        sumaPrincipal += matriz[i][i];
        sumaSecundaria += matriz[i][n - 1 - i];
    }
    return sumaPrincipal + sumaSecundaria;
}

int main() {
    const int MAX = 10;
    int n;
    cout << "Ingresa el tamano de la matriz (max 10): ";
    cin >> n;
    int matriz[MAX][MAX];
    llenarMatriz(matriz, n);
    cout << "Suma de diagonales: " << sumaDiagonales(matriz, n) << endl;
    return 0;
}
