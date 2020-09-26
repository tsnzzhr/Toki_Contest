#include<iostream>
#include<cmath>

using namespace std;

int main(){
    signed int a, b, c, d;

    cin >> a >> b >> c >> d;

    int manhattan;
    manhattan = abs(a - c) + abs(b - d);

    cout << manhattan << endl;

    return 0;
}

