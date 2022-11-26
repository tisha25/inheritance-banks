#include<iostream>

using namespace std;

class RBI{
	
	public:
	
	float rate;
	
};
class SBI : public RBI{
	
	public:
		
		float getROI(){
			
			rate = 35;
			
			return rate;
		}
};
class BOB : public RBI{
	
	public:
		
		float getROI(){
			
			rate = 34.0;
			
			return rate;
		}	
};
class ICICI : public RBI{
	
	public:
		
		float getROI(){
			
			rate = 19.0;
			
			return rate;
		}
	
};
main(){
	
	SBI obj1;
	BOB obj2;
	ICICI obj3;
	
	
	cout<<"SBI :- "<<obj1.getROI()<<endl;
	cout<<"BOB :- "<<obj2.getROI()<<endl;
	cout<<"ICICI :- "<<obj3.getROI()<<endl;
	
	
}
