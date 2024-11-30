#include <iostream>
using namespace std;

int main(){
int num1;
int num2;
cout<<"Enter two numbers\n";
cin>>num1;
cin>>num2;
if (num1>num2){
	cout<<num1<<" is greater than "<<num2;
}
if (num1<num2){
	cout<<num1<<" is less than "<<num2;
}
else{
	cout<<"both numbers are equal\n";
}

return 0;
}