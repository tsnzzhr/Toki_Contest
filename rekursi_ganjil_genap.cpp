#include<iostream>

using namespace std;

int recur(int number){
    if (number == 1)
        return 1;
    else if(number % 2 == 0)
        return number/2 * recur(number-1);    
    else if(number % 2 != 0)
        return number * recur(number-1);
}


int main(){
    
    int num;
    cin >> num;

    cout << recur(num) << endl;

    //system("pause");
    return 0;
}