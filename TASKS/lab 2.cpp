#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//funtion declaration
void student();
int marks(int x);


void student (){
	cout<<"NAME : ABDUL RAFAY\n";
	cout<<"ID : F24CSC012\n";
	cout<<"DEPARTEMENT : COMPUTER SCIENCE\n";
}

int marks (int x){
	cout<<"MARKS : "<<x;
}


int main (){
	student ();
	marks(15);
	return 0;
}