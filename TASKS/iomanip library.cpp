#include <iostream>
#include <iomanip> //iomanip library

using namespace std;

int main(){
	//left and right alignment
	double marks = 50.45;
	cout<<left<<setw(10)<<":Students"
	<<right<<setw(10)<<"Marks\n";
	cout<<left<<setw(10)<<":Rafay"
	<<right<<setw(9)<<marks<<endl;
	
	//setting precision
	cout<<"-:setprecision\n";
	double pi =3.14159265358979;
	cout<<setprecision(4)<<pi<<endl;
	
	//Padding Characters
	cout <<setw(10)<<setfill('+')<<2;
	return 0;
}