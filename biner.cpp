#include<iostream>

using namespace std;

void binary(int num){
    if(num>1){
        binary(num/2);
    }
    cout << num % 2;
}


int main(){
    
    int number;

    cin >> number;

    binary(number);

    cout << endl;
    
    return 0;
}