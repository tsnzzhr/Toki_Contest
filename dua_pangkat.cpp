#include <iostream>

using namespace std;

bool check(long long a){
    return (a != 0 && !(a&(a - 1)));
}

int main(){

    long long a;
    cin >> a;
    cout << (check(a) ? "ya" : "bukan") << endl;

    //system("pause");
    return 0;
}