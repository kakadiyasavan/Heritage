#include<iostream>

using namespace std;

class x{
	
	public:
		
		void employee1(){
			cout<<"Employee ID :  A2R850"<<endl;
			cout<<"Employee NAME : Mayank"<<endl;
			cout<<"Employee SALARY : 40,000"<<endl;
			cout<<endl<<endl;
		}
	
};

class y{
	
	public:
		
		void employee2(){
			cout<<"Employee ID :  G2R260"<<endl;
			cout<<"Employee NAME : Umang"<<endl;
			cout<<"Employee SALARY : 42,000"<<endl;
			cout<<endl<<endl;
		}
};

class z : public x,public y{
	
	public:
		
		void employee3(){
			cout<<"Employee ID :  S9U105"<<endl;
			cout<<"Employee NAME : Jugal"<<endl;
			cout<<"Employee SALARY : 35,000"<<endl;
			cout<<endl<<endl;
		}
};

main(){
	
	z obj;
	
	obj.employee1();
	obj.employee2();
	obj.employee3();
}
