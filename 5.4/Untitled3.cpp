#include<iostream>
using namespace std;

class dimond{
	private :
				int comp_id;
				string comp_name;
				int comp_staff_quantity;
				int comp_revenue ;
 				int comp_import_raw_diamonds ;
				int comp_export_diamonds ;
				string comp_ceo ;
				
	public : 
			dimond(int comp_id,string comp_name,int comp_staff_quantity,int comp_revenue,int comp_import_raw_diamonds,int comp_export_diamonds,string comp_ceo){
				this->comp_id =comp_id;
				this->comp_name = comp_name;
				this->comp_staff_quantity =comp_staff_quantity;
				this->comp_revenue = comp_revenue;
				this->comp_import_raw_diamonds =comp_import_raw_diamonds;
				this->comp_export_diamonds= comp_export_diamonds;
				this->comp_ceo=comp_ceo;
			}
			~dimond(){
				cout <<"enter comp_id : " << comp_id;
				cout <<"enter company name" << comp_name;
				cout <<"enter comp_staff_quantity " << comp_staff_quantity;
				cout <<"enter comp_revenue "  << comp_revenue;
				cout <<"enter comp_import_raw_diamonds " << comp_import_raw_diamonds;
				cout <<"enter comp_export_diamonds " <<  comp_export_diamonds;
				cout <<"enter comp_ceo " <<  comp_ceo;
			}
};


int main(){
	int n,i;
	
	cout<< "enter n : ";
	cin >> n;
	
				int comp_id;
				string comp_name;
				int comp_staff_quantity;
				int comp_revenue ;
 				int comp_import_raw_diamonds ;
				int comp_export_diamonds ;
				string comp_ceo ;
	
	for(i=0;i<n;i++){
	cout <<"enter comp_id : ";
	cin >>	comp_id;
	cout <<"enter company name";
	cin >>	comp_name;
	cout <<"enter comp_staff_quantity ";
	cin >>	comp_staff_quantity;
	cout <<"enter comp_revenue ";
	cin >>	comp_revenue;
	cout <<"enter comp_import_raw_diamonds ";
	cin >>	comp_import_raw_diamonds;
	cout <<"enter comp_export_diamonds ";
	cin >>	comp_export_diamonds;
	cout <<"enter comp_ceo ";
	cin >>	comp_ceo;
		dimond c( comp_id, comp_name, comp_staff_quantity, comp_revenue, comp_import_raw_diamonds, comp_export_diamonds, comp_ceo);
	}
	
	
}
