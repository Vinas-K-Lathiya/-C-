#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int i;
	int b=2000;int c=3000;
	for(i=b;i<=c;i++){
		if(i%4==0){
			cout<< "leap year: "<<i;
		}
	}
}
