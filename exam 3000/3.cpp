#include<iostream>
using namespace std;

class hotel{
	private :
				int id;
				string name;
				string type;
				int staffsize;
				int roomsize ;
 				int  establish_year ;
				string address ;
				string rating_type ;
				string website;
				
	public : 
			hotel(int id,string name, string type,int staffsize,int roomsize,int establish_year,string address,string rating_type,string website){
				this->id =id;
				this->name = name;
				this->type =type;
				this->staffsize = staffsize;
				this->roomsize =roomsize;
				this->establish_year= establish_year;
				this->address=address;
				this->rating_type=rating_type;
				this->website=website;
			}
			~hotel(){
				cout <<"id : " << id << endl;
				cout <<" name  " << name<< endl;
				cout <<"type  " << type<< endl;
				cout <<"staffsize "  << staffsize<< endl;
				cout <<"roomsize " << roomsize<< endl;
				cout <<"establish_year " <<  establish_year<< endl;
				cout <<"address " <<  address<< endl;
				cout <<"rating_type " <<  rating_type<< endl;
				cout <<"website " <<  website<< endl;
			}
};


int main(){
	
				int id;
				string name;
				string type;
				int staffsize;
				int roomsize ;
 				int  establish_year ;
				string address ;
				string rating_type ;
				string website;
	
	cout <<"enter id : ";
	cin >>	id;
	cout <<"enter name ";
	cin >>	name;
	cout <<"enter type ";
	cin >>	type;
	cout <<"enter staffsize ";
	cin >>	staffsize;
	cout <<"enter roomsize ";
	cin >>	roomsize;
	cout <<"enter establish_year ";
	cin >>	establish_year;
	cout <<"enter address ";
	cin >>	address;
	cout <<"enter rating_type ";
	cin >>	rating_type;
	cout <<"enter website ";
	cin >>	website;
		hotel c( id, name, type, staffsize, roomsize, establish_year, address,rating_type,website);
	
	
}
