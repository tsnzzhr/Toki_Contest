#include <iostream>

using namespace std;

int main() {
  
  int matriks1[101][101], matriks2[101][101], hasil[101][101];
  
  int  m, n, p, jumlah = 0;
  int i, j, k;
  
  //m baris matrik1 n kolom matrik1
  cin >> m >> n >> p;
  //p baris matrik2 q kolom matrik2
  
    //elemen matrik1
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }

    //elemen matrik2
    for(i = 0; i < n; i++){
      for(j = 0; j < p; j++){
        cin >> matriks2[i][j];
      }
    }

    for(i = 0; i < m; i++){
      for(j = 0; j < p; j++){
        for(k = 0; k < n; k++){
          jumlah = jumlah + (matriks1[i][k] * matriks2[k][j]);
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }
    
    //hasil
    for(i = 0; i < m; i++){
      for(j = 0; j < p; j++){
        cout << hasil[i][j];
        
        if(j!=(p-1)){
          cout << " ";
        }
      }
      cout << endl;
    }

  //system("pause");
  //return 0;
}