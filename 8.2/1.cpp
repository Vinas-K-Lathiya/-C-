#include<iostream>
using namespace std;

class mathematical{
	public:
		virtual void calculate(int a)=0; 
};

class A : virtual public mathematical{
	private :
	int a,b;
	public:
		 void calculate(int a){
			switch(a){
				case 1: cout <<"area of circle " <<endl
						<<"enter radious : " ;
						cin >> a;
						cout << "your ans is : " << 3.14*a*a << endl;
						break;
				case 2: cout <<"area of triangle " <<endl
						<<"enter triangle : " ;
						cin >> a;
						cout << "enter height : ";
						cin >> b;
						cout << "your ans is : " << 3.14*a*b << endl;
						break;
				case 3: cout <<"area of rectangle " <<endl
						<<"enter length : " ;
						cin >> a;
						cout << "enter width : ";
						cin >> b;
						cout << "your ans is : " << a*b << endl;
						break;
				default :
					 cout << "invalid";
			}
		}
};

int main(){
	int ch;
	cout << "enter 1 for area of circle. " << endl;
	cout << "enter 2 for area of triangle. " << endl;
	cout << "enter 3 for area of rectangle. " << endl;
	cout << "enter ch : ";
	cin>>ch;
	
	A a1;
	a1.calculate(ch);
}
