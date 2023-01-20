#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int i,c=0;
	char str[20];
	
	gets(str);
	
	for(i=0; i<strlen(str);i++){
		if(str[i]>=48 && str[i]<=57){
			c++;
		}
	}
	if(c>=1){
		cout << " string is numeric";
	}
	else{
		cout<< "not numeric";
	}
}
