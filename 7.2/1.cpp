#include<iostream>
using namespace std;

class OPR{
	private :
		int a,b;
	public:
		OPR(int a){
			this->a=a;
		}
		OPR(){
			
		}
		OPR operator<(OPR o){
			OPR tmp;
			if(a<o.a)
					tmp=o.a;
			else 
			tmp=a;
		}
		void getdata(){
			cout << a << endl;
			
		}
};

int main(){
	OPR o1(5);
	OPR o2(30);
	OPR o3;
	
	o3 = o1 < o2;
	o1.getdata();
	o2.getdata();
	cout << "higher value : ";
	o3.getdata();
}
