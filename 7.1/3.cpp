#include<iostream>
using namespace std;

class cricket{
	private:
		int over;
	public :
		void gettotalover(){
			cout << "enter over : ";
			cin >> over;
		}
};

class t20 : public cricket{
	public :
		void gettotalover(){
			cout << "t20 : 20" << endl;
		}
};

class test : public cricket{
	public :
		void gettotalover(){
			cout << "test : 90" << endl;
		}
};


int main(){
	t20 o;
	test o1;
	o.gettotalover();
	o1.gettotalover();
	
}
