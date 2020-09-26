#include<iostream>

void Output(int arr[], int n) 
{ 
	for (int i = 0; i < n; i++) { 
		printf("%ld\n", arr[i]); 
	} 
} 

void Reverse(int arr[], int n) 
{ 
	int temp; 

	int j = n - 1; 
	for (int i = 0; i < j; i++) { 
		temp = arr[i]; 
		arr[i] = arr[j]; 
		arr[j] = temp; 
		j--; 
	} 
} 

int main() 
{ 
	int arr[105]; 
	int N = 0;

    while (scanf("%ld", &arr[N]) != EOF) {
      N++;
    }

	Reverse(arr, N); 

	Output(arr, N); 

	return 0;
} 
