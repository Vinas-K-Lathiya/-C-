#include<iostream>
using namespace std;

class privat{
	public:
		const int id=69;
	void getdata(){
		cout << "id : " << id;
	}	
};
int main(){
	privat p;
	p.getdata();
}
