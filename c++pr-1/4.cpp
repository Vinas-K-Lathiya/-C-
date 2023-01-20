#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i,n,j;
	cout<< "enter n: ";
	cin >> n;
	
	int a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<a[i];j++){
			if(j*j==a[i]){
				cout << "your square root : " << j;
			}
		}
	}
}
