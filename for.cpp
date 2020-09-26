#include<iostream>

using namespace std;

int main(){
    int a;
    int total=0;
    int number;
        
    cin >> a;
    for(int i=1; i <= a; i++){
        cin >> number;
        total += number;
    }

    cout << total << endl;

    return 0;

}