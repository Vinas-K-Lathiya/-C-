#include<iostream>
using namespace std;


class employ {
	private:
			int car_id;
 			string car_company_name;
 			string car_color;
 			string car_model;
			 int car_release_year; 
 	public: 
 		void setdata(){
 				cout << "enter car id :";
 				cin >> car_id;
 				cout << "enter car_company_name  :";
 				cin >> car_company_name;
 				cout << "enter car_color  :";
 				cin >> car_color;
 				cout << "enter car_model  :";
 				cin >> car_model;
 				cout << "enter  car_release_year :";
 				cin >> car_release_year;
			 }
		void getdata(){
			cout << car_id << endl;
			cout << car_company_name<< endl;
			cout << car_color<< endl;
			cout << car_model<< endl;
			cout << car_release_year<< endl;
		}
};

int main(){
employ s1,s2,s3,s4;
  		
  		s1.setdata();
  		s1.getdata();
  		s2.setdata();
  		s2.getdata();
  		s3.setdata();
  		s3.getdata();
  		s4.setdata();
  		s4.getdata();
}
