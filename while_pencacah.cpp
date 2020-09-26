#include<iostream>


using namespace std;

int main(){

    int total = 0;
    int num;

    while (scanf("%d", &num) != EOF){
        total += num;
    }

    cout << total << endl;

    return 0;

}