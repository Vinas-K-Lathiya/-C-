#include<iostream>
using namespace std;

class customer
{
	private : 
		int id,age;
		string name,telecome,mobile,city,simcard;
		
	public : 
		void getdata()
		{
			cout << "Enter id\t: ";
			cin >> id;
			cout << "Enter name\t: ";
			cin >> name;
			cout << "Enter age\t: ";
			cin >> age;
			cout << "Enter telecome\t: ";
			cin >> telecome;
			cout << "Enter mobile\t: ";
			cin >> mobile;
			cout << "Enter city\t: ";
			cin >> city;
			cout << "Enter simcard\t: ";
			cin >> simcard;
		}
		void setdata(){
			cout << "id\t: " << id << endl
			<<"name\t: " << name << endl
			<<"age\t: " << age << endl
			<<"telecome: " << telecome << endl
			<<"mobile\t: " << mobile << endl
			<<"city\t: " << city << endl
			<<"simcard\t: " << simcard << endl;
		}
};
  int main(){
  		customer s1,s2,s3,s4,s5;
  		
  		s1.getdata();
  		s1.setdata();
  		s2.getdata();
  		s2.setdata();
  		s3.getdata();
  		s3.setdata();
  		s4.getdata();
  		s4.setdata();
  		s5.getdata();
  		s5.setdata();
  }
