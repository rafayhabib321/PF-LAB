#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int id;
	float gpa;	
};

int main (){
	Student s1;
	
	s1.name="ABDUL RAFAY";
	s1.id= 29182;
	s1.gpa=3.7;
	
	cout<<"NAME : "<<s1.name<<endl;
	cout<<"ID : "<<s1.id<<endl;
	cout<<"GPA : "<<s1.gpa<<endl;
	return 0;
}