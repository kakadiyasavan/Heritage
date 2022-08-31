#include<iostream>

using namespace std;

class mother{
	
	public:
	
		void display(){
			
			cout<<"Mother : Complete your Homework"<<endl;
			
		}
	
};

class daugther : public mother{
	
	public:
	
		void display(){
			
			cout<<"daugther : I have Complete my Homework"<<endl;
		}
	
};



main(){
	
	daugther obj;
	
	
	obj.mother::display();
	obj.display();
	
}
