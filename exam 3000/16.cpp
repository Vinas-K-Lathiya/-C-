#include<iostream>
using namespace std;

class bank{
	public :
		 bank(){
			cout<< "\t\t:- Bank Managment System -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- Design And Program by -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t    Khushi  G  Beladiya"<<endl;
			cout<<endl;
			cout<< "\t\t        :- Trainer -:       "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t\tAshish Solanki         "<<endl;
			cout<<endl;
			cout<<endl;
		}
};

int main(){
	bank b;
	int a,c;
	long long int d;
	string e,f;
	cout<< "press 1 key to next : " << endl;
	cout<< endl;
	cin >> a;
	switch(a){
		case 1: system("cls");
							cout<<" :- Press 1 to login as administrator or to login as staff"<<endl;
							cout<<endl;
						cout<< "press 1 key to next : " << endl;
						cin >> a;
						system("cls");
					switch(a){
							case 1: cout <<"------------------------------------------------------------" <<endl ;
							cout << "\t\t\t:- welcome to staff -:" <<endl;
							cout <<"------------------------------------------------------------" <<endl ;
							cout << endl;
							cout << endl;
							cout << "\t:- Enter The Name Of Staff \t\t:" ;
							cin >> e;
							cout << "\t:- Enter The Amount Number Of Staff \t:" ;
							cin >> c;
							cout << "\t:- Enter The Phone Number Of Staff \t:" ;
							cin>> d;
							cout << "\t:- Enter The Email Of Staff \t\t:";
							cin >>f;
							system("cls");
							cout <<"------------------------------------------------------------" <<endl ;
							cout << "\t Name \t\t:" <<e << endl;
							cout << "\t Amount Number\t:"<<c <<endl;
							cout << "\t Phone Number \t:"<<d <<endl;
							cout << "\t Email \t\t:"<<f<<endl;
							cout <<"------------------------------------------------------------" <<endl ;
							cout << endl;
							cout << endl;
							cout << endl;
							cout << endl;
							cout << "\t\tPress [1] To withdraw Money" << endl;
							cout << "\t\tPress [2] To Transfer Money" << endl;
							cout << "\t\tPress [3] To deposite Money" << endl;
							cin >> a;
							system("cls");
							switch(a){
								case 1: cout<<"------------------------------------------------------------" <<endl;
										cout<<"\t\tWithdraw The Money : "<<c<<endl;
										cout<<"------------------------------------------------------------" <<endl;
										cout<<endl;
										cout<<endl;
										cout<<"\t\t\tYour Actual Amount Is : "<<c<<endl<<endl;
										cout<<"\t\t\tCongrates Your Amount Has Withdraw Successfully "<<endl<<endl;
										cout<<"\t\t\tYour Accout Balance Is :"<<c-1;
							}
							break;
			default: " invalid";
							}
							break;
			default: " invalid";
	}
}
