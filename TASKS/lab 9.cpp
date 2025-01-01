#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//pass by value 
int info(int x, int y=17){
	return x+y;
}
int main (){
	cout<<info(50,50);
	return 0;
}