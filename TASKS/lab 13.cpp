#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//function overloaded
int info(int x, int y){
	return x+y;
}

double info(double x, double y){
	return x+y;
}
int main (){
	cout<<info(50,50)<<endl;
	cout<<info(50.5,10.9);
	return 0;
}