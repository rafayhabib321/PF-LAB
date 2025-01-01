#include <iostream>
#include <string>
using namespace std;

struct Employee {
	string name;
	int id;
	float salary;	
};

int main (){
	Employee employee[2]={
	{"john doe",1000,5000.0}, 
	{"john smith",100,5000.0}};
	
	for  (int i=0; i<2; i++){
		cout<<"Employee: "<<i+1<<" : "<< endl;
		cout<<"NAME: "<<employee[i].name<< endl;
		cout<<"ID: "<<employee[i].id<< endl;
		cout<<"SALARY: "<<employee[i].salary<< endl;
		cout<<endl<<endl;
	}
	return 0;
}