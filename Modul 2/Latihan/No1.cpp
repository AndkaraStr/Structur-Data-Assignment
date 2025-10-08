#include <iostream>
using namespace std;

const int N = 3;

void penjumlahan(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j]; 
        }   
    }  
}
void pengurangan(int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

void perkalian (int A[N][N], int B[N][N], int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
           C[i][j] = 0;
           for (int k = 0; k < N; k++)
           {
             C[i][j] += A[i][k] * B[k][j];
           }
           
        }
        
    }
    
}

void tampil(int C[N][N]) {
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
        
    }
    
}
int main() {
    
    int matrik1[N][N], matrik2[N][N], hasil[N][N];

    cout<< "Masukan Matrik 1:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrik1[i][j];
        }
        
    }
    cout << "Masukan Matrik 2:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> matrik2[i][j];
        }
        
    }
    

cout << "Hasil Penjumlahan :\n";
penjumlahan(matrik1,matrik2,hasil);
tampil(hasil);
cout << "Hasil Pengurangan :\n";
pengurangan(matrik1,matrik2,hasil);
tampil(hasil);
cout << "Hasil Perkalian :\n";
perkalian(matrik1,matrik2,hasil);
tampil(hasil);

return 0;
}