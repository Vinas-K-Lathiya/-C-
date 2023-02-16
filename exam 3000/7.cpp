#include<iostream>
using namespace std;

class greeting{
	private:
		int id;
	public : 
	greeting (int id){
	cout << "id : "<< id;
    }
};

int main(){
	greeting g(101);
}
