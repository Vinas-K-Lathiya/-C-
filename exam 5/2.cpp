#include<iostream>
using namespace std;

class mother{
	public :
		void display(){
			cout << "hii ";
		}
};
class daughter : public mother{
	public :
		void display(){
			cout << "hello ";
		}
};

int main(){
	daughter d;
	d.daughter::display();
	d.mother::display();
}

