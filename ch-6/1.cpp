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
			cout<<" a : "<<a <<endl;
			cout << " b : "<<b<<endl;
			cout<<"enter c : "<<c<<endl;
		}
};

int main(){
	y z;
	z.setdata();
	z.getdata();
}
