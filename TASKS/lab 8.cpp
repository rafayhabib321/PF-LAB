#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//DEFAULT PARAMETER
void info(int x=6){
	cout<< x;
}
void info(int x=6, int y=8){
	cout<< x+y;
}
int main (){
	info(6);
	return 0;
}