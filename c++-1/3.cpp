#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int a[2500];
	
	int i,j=0,b=2020;
	
	for(i=b;i<=3030;i++){
		if(i%4==0){
			a[j]=i;
		cout << "a["<< j << "] : " << a[j] << "\n";
			j++;
	
		}
	}
}
