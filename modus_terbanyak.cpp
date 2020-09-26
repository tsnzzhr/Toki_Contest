#include <map>
#include<iostream>

using namespace std;

map<int, int> m;
int in_put, check = -1, modus;

int main()
{   //misal in_putut 3 brrti kita assign 3 angka, ini in_pututnya dri blkg
    cin >> in_put;
    for (int a = in_put; a > 0; a--) {
        cin >> in_put;
        
        m[in_put]++;
        //indeks ke-in_put dari map nilainya nambah 1

        //jika indeks ke-in_put+1 nilainya lebi besar dari check
        if (m[in_put] > check) {
            check = m[in_put];//check ganti value jdi nilainya indeks ke-in_put yg sudah ditambah 1
            modus = in_put;//modus ganti value jdi 3
        } else if (m[in_put] == check) {
            modus = (modus < in_put) ? in_put : modus;//assign nilai modus kalo kondisi modus apaka lebih kecil atau lebih besar dari in_put
        }
    }

    cout << modus << endl;

    return 0;
    //system("pause");

}