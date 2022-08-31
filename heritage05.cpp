#include<iostream>

using namespace std;

class a{
	
	public:
		
		int id;
		char name;
		char role;
		int salary;
		int experience;
		char comp_name;
		char address;
		char email;
		int contact;
		
		void setter(){
		
			
		
			cout<<"Enter Employee ID : ";
			cin>>id;
			cout<<endl;
			cout<<"Enter Employee NAME : ";
			cin>>name;
			cout<<endl;
			cout<<"Enter Employee ROLE : ";
			cin>>role;
			cout<<endl;
		}
};

class b : public a{
	
	public:
		
		void setter(){
			
		
			
			cout<<"Enter Employee SALARY : ";
			cin>>salary;
			cout<<endl;
			cout<<"Enter Employee EXPERIENCE : ";
			cin>>experience;
			cout<<endl;
		}
};

class c : public b{
	
	public:
		
		void setter(){
			
		
			
			cout<<"Enter Employee COMPANY NAME : ";
			cin>>comp_name;
			cout<<endl;
			cout<<"Enter Employee ADDRESS : ";
			cin>>address;
			cout<<endl;
		}
		
		void getter(){
			
			cout<<"Employee name : "<<name<<endl;
			cout<<"Employee role : "<<role<<endl;
			cout<<"Employee salary : "<<salary<<endl;
		}
};

class d : public c{
	
	public:
		
		void setter(){
			
			cout<<"Enter Employee EMAIL : ";
			cin>>email;
			cout<<endl;
			cout<<"Enter Employee CONTACT : ";
			cin>>contact;
			cout<<endl;
		}
		
		void getter(){
			
			cout<<"Employee id : "<<id<<endl;
			cout<<"Employee experience : "<<experience<<endl;
			cout<<"Employee company name : "<<comp_name<<endl;
			cout<<"Employee address : "<<address<<endl;
			cout<<"Employee email : "<<email<<endl;
			cout<<"Employee contact : "<<contact<<endl;
		}
};

main(){
	d obj;
	
	obj.a::setter();
	obj.b::setter();
	obj.c::setter();
	obj.d::setter();
	
	obj.c::getter();
	obj.d::getter();
}
