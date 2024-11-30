#include <iostream>
using namespace std;

int main(){
int age;
cout<<"Enter your age.\n";
cin>>age;
if (age>=65){
	cout<<"-:You are eligible for a senior citizen discount.\n";
}
else{
	cout<<"-:You are not eligible for a senior citizen discount.\n";
}

return 0;
}