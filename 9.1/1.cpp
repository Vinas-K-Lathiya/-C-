#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int ch;
	
	cout <<"enter 1 for division  " << endl <<"enter 2 for your age for voting " << endl <<"enter 3 for password " << endl;
	cin >> ch;
	switch(ch){
		case 1: int a,b;
				cout << "enter a : ";
				cin >>a;
				cout << "enter b : ";
				cin >>b;
				try{
					if(b==0){
						throw b;
					}
					else{
						cout <<"your ans is : "<<a/b<<endl;
					}
			}
			catch(int c){
				cout << "cant divided by 0";
			}
			break;
		case 2:int age;
				cout << "enter your age : ";
				cin >> age;
				try{
					if(age<18){
						throw 18-age;
					}
					else{
						cout << "you are superbbbb";
					}
				}
				catch(int b){
					cout << "plz improve your age";
				}
			break;
		case 3: char w[20];
				cout<< "enter psw : "<< endl;
				cin  >> w[20];
				int upr = 0;
					try {
						for(int i=0 ; i<=strlen(w) ; i++){
							if(w[i]>=65 && w[i]<=90){
								upr ++;
							}
						}
						if(upr > 0){
							throw w;
						}
						else{
							cout <<"your psw correct";
						}
					}
					catch(char b[]){
						cout << "plz enter correct psw ";
					}
			break;
	}
}
