#include<iostream>
using namespace std;


class employ {
	private:
			int emp_id;
 			string emp_name;
 			string emp_role;
 			float emp_age;
			 int emp_salary;
 			float emp_experience;
 			string emp_city;
 			string emp_company_name;
 	public: 
 		void setdata(){
 				cout << "enter emp id :";
 				cin >> emp_id;
 				cout << "enter emp name :";
 				cin >> emp_name;
 				cout << "enter emp role :";
 				cin >> emp_role;
 				cout << "enter emp age :";
 				cin >> emp_age;
 				cout << "enter emp salary :";
 				cin >> emp_salary;
 				cout << "enter emp experience :";
 				cin >> emp_experience;
				cout << "enter emp city :";
 				cin >> emp_city;
 				cout << "enter emp company name :";
 				cin >> emp_company_name;
			 }
		void getdata(){
			cout << emp_id << endl;
			cout << emp_name<< endl;
			cout << emp_role<< endl;
			cout << emp_age<< endl;
			cout << emp_salary<< endl;
			cout << emp_experience<< endl;
			cout << emp_city<< endl;
			cout << emp_company_name<< endl;
		}
};

int main(){
employ s1,s2,s3,s4,s5;
  		
  		s1.setdata();
  		s1.getdata();
  		s2.setdata();
  		s2.getdata();
  		s3.setdata();
  		s3.getdata();
  		s4.setdata();
  		s4.getdata();
  		s5.setdata();
  		s5.getdata();
}
