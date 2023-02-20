#include <iostream>
using namespace std;

class rbi{
	protected :
		double rate;
	public:
		void getrol(){
			cout << "intrest : " << rate << "%"<< endl;
		}
};

class sbi : public rbi{
	public :
	void sbiset(){
		cout << " enter sbi rate : " ;
		cin >> rate;
	}
};

class bob : public rbi{
	public :
	void bobset(){
		cout << " enter bob rate : " ;
		cin >> rate;
	}
};
class icici : public rbi{
	public :
	void iciciset(){
		cout << " enter icici rate : " ;
		cin >> rate;
	}
};

int main(){
	sbi s;
	bob b;
	icici i;
	
	s.sbiset();
	b.bobset();
	i.iciciset();
	s.getrol();
	b.getrol();
	i.getrol();
	
}


