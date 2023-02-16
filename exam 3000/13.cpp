#include<iostream>
using namespace std;

class train{
	private :
		int  Train_Number ;
		string Train_Name ;
		string Source ;
		string Destination; 
		float Train_time;
		
	public:
		void setdata(){
			cout << "enter Train_Number : " ;
			cin >> Train_Number;
			cout << "Train_Name : ";
			cin >> Train_Name;
			cout << "Source : ";
			cin >> Source;
			cout << "Destination";
			cin >> Destination;
			cout << "Train_time";
			cin >> Train_time;
			cout << endl;
		}
		void getdata(){
			cout << " Train_Number : " << Train_Number<< endl;
			cout << "Train_Name : " << Train_Name << endl;
			cout << "Source : " << Source << endl;
			cout << "Destination : " << Destination << endl;
			cout << "Train_time : "<<Train_time << endl;
		}
};

int main(){
	train t[3]; 
	int i,a;
	for(i=0;i<3;i++){
		t[i].setdata();
	}
	cout<< "enter a : ";
	cin >> a;
	for(i=0;i<3;i++){
		if(a-1==i){
			t[i].getdata();
		}
	}
}
