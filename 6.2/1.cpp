#include <iostream>
using namespace std;

class p{
		protected:
			float temp;
		public:
			void setdata(){
				cout << "enter tem : ";
				cin >> temp;
			}
};

class q : public p{
	public:
		void setData(){
			cout << "fer : " << (temp*9/5)+32 << endl;
		}
};
class r : public q{
	public:
		void kel(){
			cout << "kel : " << (temp+459.67)*5/9 << endl;
		}
};

int main(){
	r R;
	
	R.setdata();
	R.setData();
	R.kel();
}
