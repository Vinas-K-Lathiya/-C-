#include<iostream>
using namespace std;

class greeting{
	private:
		int id;
	public : 
	greeting (int id){
		this->id = id;
	cout << "id : "<< id;
    }
    void getdata(){
    	cout << "id :  " << id << endl;
	}
};

int main(){
	greeting g(101);
	greeting g1=g;
	g1.getdata();
}
