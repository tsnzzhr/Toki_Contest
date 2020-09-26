#include <iostream>

using namespace std;

int main()
{
    int b;
    cin >> b;

    if(b < 10){
        cout << "satuan" << endl;
    }else if(b >= 10 && b < 100){
        cout << "puluhan" << endl;
    }else if(b >= 100 && b < 1000){
        cout << "ratusan" << endl;
    }else if(b >= 1000 && b < 10000){
        cout << "ribuan" << endl;
    }else if(b >= 10000 && b < 100000){
        cout << "puluhribuan" << endl;
    }

    return 0;
}