#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//funtion call

void info(int x, int y){
	cout<<x+y;
}

int main (){
	info(5,5);
	cout<<endl;
	info(6,6);
	cout<<endl;
	info(8,8);
	
	return 0;
}