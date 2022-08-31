#include<iostream>

using namespace std;

class mother{
	
	public:
		
		int a=12;
		int b=14;
		
		void setter(){
			
			cout<<"Zebra  : "<<a<<endl;
			
			
		}
		
		void getter(){
			
			cout<<"Dolphin  : "<<b<<endl;	
			
		}
};

main(){
	
	mother obj;
	
	obj.setter();
	obj.getter();
}
