#include <iostream>
using namespace std;

int main(){
int number;
cout<<"enter a number\n";
cin>>number;
if (number>0){
	cout<<"-:the number is positive.\n";
}
if (number<0){
	cout<<"-:the number is negative.\n";
}
if(number=0){
	cout<<"-:wrong number\n";
}
return 0;
}