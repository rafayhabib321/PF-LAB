#include <iostream>
using namespace std;

int main(){
	char ch;
	cout<<"enter a character either uppercase or lowercase.\n";
	cin>>ch;
	if(ch>='A'&&ch<='Z'){
		cout<<"The character is an uppercase.";
	}
	else if(ch>='a'&&ch<='z'){
		cout<<"The character is lowercase.";
	}
	else{
		cout<<"This is not a character.";
	}
	
	
	
	return 0;
}