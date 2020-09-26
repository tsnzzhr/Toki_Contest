#include<iostream>
#include<math.h>

using namespace std;

int a,b,k,x;

int func(int x, int k){
    if(k == 0)
        return x;
    else 
        return abs(a*func(x,k-1)+b);
}

int main(){
    cin >> a >> b >> k >> x;

    cout << func(x,k) << endl;

    return 0;

}