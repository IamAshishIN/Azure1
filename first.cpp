#include<iostream>
using namespace std;
class Distance{
	private:
		int meter;
		public:
			Distance():meter(0){}	
			friend int addfive(Distance);
			};
			int addfive(Distance d){
			d.meter+=5;
			return d.meter;
			
			}
int main(){
	Distance d;
	cout<<"distance = "<<addfive(d)<<endl;
	return 0;
}
