#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n,i;
	cout << "enter n : ";
	cin >> n;
	int a[n];int b[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		b[i]=a[i]*a[i]*a[i];
		
	cout << "cube : " << b[i];
	}
}
