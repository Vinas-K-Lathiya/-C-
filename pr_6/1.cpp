#include<iostream>
using namespace std;

class message{
	private :
		string msg;
	public : 
	 message(){
		cout << "enter message ";
		cin >> msg;
	}
	void print (){
		cout << msg;
	}
	void print(string a){
		cout << msg << "     "<< a << endl;
	}	
};

int main(){
	message b;
	b.print();
	b.print("hiiiiiiii  ");
	
}
