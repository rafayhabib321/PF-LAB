#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//return type
void info(int x, int y){
	cout<< x+y;
}
//return value in integer
int info(double x, int y){
	return x-y;
}
//return value in double
double info(int x, double y){
	return x-y;
}

int main (){
	info(5,5);
	cout<<endl;
	
	cout<<info(25.5,5)<<endl;
	
	cout<<info(100,15.5);
	return 0;
}