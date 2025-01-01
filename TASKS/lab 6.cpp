#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//parameters
int info(int x, int y){
	return x*y;
}
int main (){
	cout<<info(5,5);
	return 0;
}