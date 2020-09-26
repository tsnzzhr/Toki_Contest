#include<iostream>
#include<vector>

using namespace std;

int main()
{   
    int num;

    vector <int> arr;

    while (scanf("%d", &num) != EOF){
        arr.push_back(num);
    }
    
    for (int b = arr.size() - 1; b >= 0; b--){
        cout << arr.at(b) << " ";
    }

    cout << endl; 
    
    return 0;
}