#include<iostream>
using namespace std;

class B {
	public :
		void calc(int a,int b){
			cout << "division : " << a/b << endl;
		}
		void calc(int a,int b,int c){
			cout << "subtraction : " << a-b-c << endl;
		}
		void calc(int a,int b,int c,int d){
			cout << "multiplication : " << a*b*c*d << endl;
		}
		void calc(int a,int b,int c,int d,int e){
			cout << "addition : " << a+b+c+d+e << endl;
		}
};


int main(){
	B f;
	
	f.calc(5,6);
	f.calc(5,6,7);
	f.calc(5,6,7,8);
	f.calc(5,6,7,8,9);
	
}
