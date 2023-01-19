#include<iostream>
using namespace std;

int main(){
	int i,n;
	cout << "enter value of n : " ;
	cin >> n; 
	int a[n];
	
	for(i=0;i<n;i++){
		cout << "array a[" << i <<"] : " ;
		cin >> a[i] << "HII";
	}
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			cout << "even = " <<a[i] << "\n";
		}
	}
}
