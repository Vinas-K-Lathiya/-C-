#include<iostream>
using namespace std;

class student{
	private:
			int	id,salary;
			string name,role,address,email;
			
	public : 
		void setdata(){
			cout << "enter id : ";
			cin >> id;
			cout << "enter salary : ";
			cin >> salary;
			cout << "enter name : ";
			cin >> name;
			cout << "enter role : ";
			cin >> role;
			cout << "enter address: ";
			cin >> address;
			cout << "enter email: ";
			cin >> email;
		}
		void getdata(){
			cout << " id : "<<id << endl;
			cout << " salary : " << salary << endl;
			cout << " name : " << name<< endl;
			cout << " role : " << role<< endl;
			cout << " address: "<< address<< endl;
			cout << " email: " << email<< endl;
		}
};

int main(){
	int i;
	int n;
	cout << "enter value of n: ";
	cin >> n;
	student a[n];
	for(i=0;i<n;i++){
		a[i].setdata();
		a[i].getdata();
	}	
}
