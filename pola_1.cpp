  
#include <iostream>

using namespace std;

int main(){   
    int n,b;
    cin >> n >> b;
    
    for(int i=1; i<=n; i++){

        if(i % b == 0){
            cout << "*";
        }else if(i % b != 0){
            cout << i;
        }

        if(i <= n-1){
            cout << " ";
        }else{
            cout << endl;
        }
    }

    //system("pause");
}