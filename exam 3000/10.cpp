#include<iostream>
using namespace std;

class set{
	private : 
			int n,n1;
			
	public : 
			set(){
				cout << "hiii" << endl;
			}
			set(int n,int n1){
				this->n=n;
				this->n1=n1;
			}
			void get(){
				cout <<"i : "<< n << endl;
				cout << "ii : "<< n1 << endl;
			}			
};
int main(){
	set s;
	set s1(10,20);
	set s2=s1;
	s1.get();  
	s2.get();
}
