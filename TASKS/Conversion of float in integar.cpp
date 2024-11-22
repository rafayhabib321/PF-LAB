#include <iostream>
using namespace std;

int main(){
	
	//conversion of float into int.
float floatval;
cout<<"-:Enter a floating point value:\n";	
cin>>floatval;	
int intval = static_cast<int>(floatval);			//converting float into integar
cout<<"-:converting in to int: "<<intval<<endl;		//displaying output

	//ASCII conversion
char char1 ='A';
int a = 5;
char char2 = char1 + a;
cout<<"-:character '"<<char1<<"' + "<<a<<" = "<<char2<<" (ASCII Value: " << (int)char2 << ")"<<endl;   //converting char2 value

	return 0;
}