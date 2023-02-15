#include<iostream>
using namespace std;

class greeting{
	private:
		int id;
	public : 
			void setdata (){
			cout << "id : ";
			cin >> id;
   			 }
    		~greeting(){
    			cout << "id :  " << id << endl;
				}
};

int main(){
	greeting g;
	g.setdata();
}
