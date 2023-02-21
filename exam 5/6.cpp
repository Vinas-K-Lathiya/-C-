#include<iostream>
using namespace std;

class A{
	protected :
		int id,salary;
		string name,role,experience,compname,add,email,contact;
	public :
		void seta(){
			cout <<"enter id : ";
			cin >> id;
			cout <<"enter name : ";
			cin >> name;
			cout <<"enter role : ";
			cin >> role;
		}
};

class B:public A{
	public :
	void setb(){
			cout <<"enter salary : ";
			cin >> salary;
			cout <<"enter experience : ";
			cin >> experience;
		}
};
class C:public A{
	public :
	void setc(){
			cout <<"enter compname : ";
			cin >> compname;
			cout <<"enter add : ";
			cin >> add;
		}
	void getc(){
		    cout <<"enter id : "<<id<<endl;
			cout <<"name : " <<name<<endl;
			cout <<"role : " <<role<<endl;
			cout <<"salary : " <<salary<<endl;
	}
};
class D:public A{
	public :
	void setd(){
			cout <<"enter email : ";
			cin >> email;
			cout <<"enter contact : ";
			cin >> contact;
		}
	void getd(){
			cout  << "id : "<<id<<endl;
			cout <<"name : " <<name<<endl;
			cout <<"role : " <<role<<endl;
			cout <<"salary : " <<salary<<endl;
			cout <<"experience : " <<experience<<endl;
			cout <<"compname : " <<compname<<endl;
			cout <<"add : "<<add<<endl;
			cout <<"email : " <<email<<endl;
			cout <<"contact : " <<contact<<endl;
	}
};

int main(){
	A a;
	a.seta();
	B b;
	b.setb();
	C e;
	e.setc();
	e.getc();
	D d;
	d.setd();
	d.getd();
}
