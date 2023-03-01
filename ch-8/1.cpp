#include<iostream>
using namespace std;

class admin{
	private :
 			int total_annual_revenue = 10000;
 			string can_terminate = "to_manager,to_emp";
 	protected :
 		    string company_name = "fraud";
		 	int manager_salary = 100;
 			int employee_salary = 10;
 			int total_staff = 2;
 	public:
	 	void myaccess(){
	 			cout << "total revenue : " << total_annual_revenue<<endl;
	 			cout << "can_terminate : " << can_terminate<<endl;
	 			cout << "company_name : " << company_name<<endl;
	 			cout << "manager_salary : " << manager_salary<<endl;
	 			cout << "employee_salary : " << employee_salary<<endl;
	 			cout << "total_staff : " << total_staff<<endl;
		 }		
 	
};

class manager : public admin{
	public :
		void myaccess(){
	 			cout << "company_name : " << company_name<<endl;
	 			cout << "manager_salary : " << manager_salary<<endl;
	 			cout << "employee_salary : " << employee_salary<<endl;
	 			cout << "total_staff : " << total_staff<<endl<<endl;
		 }	
};

class emp : public manager{
	public:
	void myaccess(){
	 			cout << "company_name : " << company_name<<endl;
	 			cout << "employee_salary : " << employee_salary<<endl<<endl;
		 }	
};


int main(){
	emp e;
	
	e.myaccess();
	e.manager::myaccess();
	e.admin::myaccess();
}
