#include<iostream>
using namespace std;

class a{
	public :
		void b(){
			cout << "nothing " << endl;
		}
		void b(int b){
			cout << b<< endl;
		}
		void b(int b,int c){
			cout << b <<"\t"<< c<< endl;
		}
		void b(int b,int c, int d){
			cout << b<<"\t"<<c<<"\t"<<d<< endl;
		}
};

int main(){
	a e;
	e.b();
	e.b(10);
	e.b(10,20);
	e.b(10,20,30);
}
