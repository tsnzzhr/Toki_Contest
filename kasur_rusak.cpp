#include<iostream>
#include<string.h>

using namespace std;

bool _check_(char str[], int s, int e) { 
    //s itu indeks pertama string, e itu indeks terakhir di string
    //kalo isinya string s dan e sama, brrti bener palindrom
	if (s == e) 
	    return 1; 

    //kalo isinya string dan e beda, brrti bukan palindrom
	if (str[s] != str[e]) 
	    return 0; 

    //ini kalo hurufnya lebih dari 3
	if (s < e + 1) 
	    return _check_(str, s + 1, e - 1); 

	return 1; 
} 

bool is_Palindrome(char str[]) { 
    int n = strlen(str); 

    //kalo string kosong diitung palindrom
    if (n == 0) 
	    return 1; 
    //kalo nggak kosong manggil fungsi atasnya
    return _check_(str, 0, n - 1); 
} 

int main() { 
	char str[100];

    cin >> str; 

	if (is_Palindrome(str)) 
	    cout << "YA" << endl;
	else
	    cout << "BUKAN" << endl; 

	return 0; 
} 
