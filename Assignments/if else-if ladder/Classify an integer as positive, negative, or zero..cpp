#include <iostream>
using namespace std;

int main(){
	int num;
	cout<<"Enter a number either positive or negative.\n";
	cin>>num;
	if(num>0){
		cout<<"The number is positive.";
	}
	else if(num<0){
		cout<<"The number is negative.";
	}
	else if(num==0){
		cout<<"The number is zero.";
	}
	else{
		cout<<"This is not a number.";
	}

	return 0;
}