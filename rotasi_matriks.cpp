/* C Program to rotate matrix by 90 degrees */
#include<iostream>

using namespace std;

int main(){
    
    int matrix[101][101];
    int m,n,i,j;

    cin >> m >> n;
 
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
 
    for(i=0;i<n;i++){
        for(j=m-1;j>=0;j--){
            cout << matrix[j][i];
        
            if(j != 0){
            cout << " ";
            }
        }
        cout << endl;
    }
    
    //system("pause");
    return 0;
}