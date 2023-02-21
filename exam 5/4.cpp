#include<iostream>
using namespace std;

class A{
	protected:
		int id;
	public:
		void seta(){
			cout<<"enter id : ";
			cin>>id;
		}
		
};
class b{
	protected:
		int age;
	public:
		void setb(){
			cout<<"enter age : ";
			cin>>age;
		}
};
class c : public A,public b{
	public :
	void getc(){
		cout << "id : "<<id <<endl<<"age : "<<age << endl;
}
};

int main(){
	c c1;
	c1.seta();
	c1.setb();
	c1.getc();
}
