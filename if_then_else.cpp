#include<iostream>

using namespace std;

int main(){
    int a;

    cin >> a;

    if(a > 0){
        cout << "positif" << endl;
    }else if(a == 0){
        cout << "nol" << endl;
    }else{
        cout << "negatif" << endl;
    }

    return 0;
}