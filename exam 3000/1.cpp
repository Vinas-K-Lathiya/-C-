#include<iostream>
using namespace std;

class employee{
	private:
			int	id,salary;
			string name,role,address,email,contact;
			float experience;
			
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
			cout << "enter contact: ";
			cin >> contact;
			cout << "enter address: ";
			cin >> experience;
		}
		void getdata(){
			cout << " id : "<<id << endl;
			cout << " salary : " << salary << endl;
			cout << " name : " << name<< endl;
			cout << " role : " << role<< endl;
			cout << " address: "<< address<< endl;
			cout << " email: " << email<< endl;
			cout << " contact: " << contact<< endl;
			cout << " experience: " << experience<< endl;
		}
};

int main(){
	employee a[5];
	int i;int n=5;
	for(i=0;i<n;i++){
		a[i].setdata();
		a[i].getdata();
	}
	
	
	
	
	
}
