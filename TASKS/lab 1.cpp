#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//funtion signature

void info (int x,int y){
	cout<<x+y;
}

void info (double x, int y){
	cout<<x-y;
}


int main (){
	info (15.5,5);
	return 0;
}