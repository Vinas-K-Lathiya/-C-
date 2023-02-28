#include<iostream>
using namespace std;

class A{
	public:
		void getdata(){
			cout <<"hiii  "<< endl;
		}
};

class B : public A{
	public:
		void getdata(){
			cout <<"byyyy  "<< endl;
		}
};

int main(){
	B c;
	c.getdata();
}
