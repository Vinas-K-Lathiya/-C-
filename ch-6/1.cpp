#include<iostream>
using namespace std;
class x{
	protected:
		int a;
		int b;
		int c;
};

class y : public x{
	public :
		void setdata(){
			cout<<"enter a : ";
			cin>>a;
			cout << "enter b :";
			cin>>b;
			cout<<"enter c :";
			cin>>c;
		}
		void getdata(){
			cout<<"a : "<<a*a*a <<endl;
			cout << "b : "<<b*b*b<<endl;
			cout<<"c : "<<c*c*c<<endl;
		}
};

