#include<iostream>
using namespace std;

int sum(int a[],int n){
	int i,s=0;
	for(i=0;i<n;i++){
		cout << "a[" << i <<"";
		cin >> a[i];
		s += a[i];
	}
	return s;
} 

int avg (int a,int n){
	cout << "average is " << a/n;
}

int main (){
	int n;
	cout << "enter n : ";
	cin >> n;
	int a[n];
	avg(sum(a,n),n);
}







