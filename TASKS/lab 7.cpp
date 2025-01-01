#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//ARGUMENTS
int info(int x, int y){
	cout<< x+y;
}
int main (){
	info(100,15);
	cout<<endl;
	info(10,19);
	return 0;
}