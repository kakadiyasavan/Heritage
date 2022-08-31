#include<iostream>

using namespace std;

class y{
	
	public:
		
		int a;
		int b;
		
		void sh(){
			
			cout<<"Enter the square Number : ";
			cin>>a;
			
			b=a*a;
		
			cout<<"square value : "<<b<<endl;
			cout<<endl<<endl;	
			
		}
	
};

class a:public y{
	
	public:
	
		int a;
		int b;	
	
		void vi(){
			
			cout<<"Enter the Cube Number : ";
			cin>>a;
			b=a*a*a;
		
			cout<<"Cube value : "<<b<<endl;	
			cout<<endl<<endl;
		}
};

main(){
	
	a obj;
	
	obj.sh();
	obj.vi();	
}
