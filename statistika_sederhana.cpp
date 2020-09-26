#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[100];
    int n;
    int x;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> x;
        arr[i] = x;
    }

    sort(arr, arr+n);

    int biggest = arr[n-1];
    int smallest = arr[0];

    cout << biggest << " " << smallest << endl;
    
    return 0;
}