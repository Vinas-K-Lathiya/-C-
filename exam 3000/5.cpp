#include<iostream>
using namespace std;

class states{
	public:
		static int totalstate;
		static void statename();
};

int states :: totalstate=28;

void states :: statename(){
	string state[]={"Andhra Pradesh", "Arunachal Pradesh", "Assam", "Bihar", "Chhattisgarh", "Goa", "Gujarat", "Haryana", "Himachal Pradesh", "Jharkhand", "Karnataka", "Kerala", "Madhya Pradesh", "Maharashtra", "Manipur", "Meghalaya", "Mizoram", "Nagaland", "Odisha", "Punjab", "Rajasthan", "Sikkim", "Tamil Nadu", "Telangana", "Tripura", "Uttar Pradesh", "Uttarakhand", "West Bengal"};
	cout << "total state : " << totalstate << endl;
	for(int i=0;i<totalstate;i++){
		cout << "* " << state[i] << endl;
	}
};
int main(){
	states :: statename();
}
