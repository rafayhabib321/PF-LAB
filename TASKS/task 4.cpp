#include <iostream>
using namespace std;

int main(){
int age= 20;
bool hasID=true; 
if (age>=18){
	if(hasID){
		cout<<"-: Entry allowed.\n";
	}
else {
	cout<<"-: Please show id.\n ";
}
}

else{
	cout<<"-: Underage. Entry denied.\n";
}
return 0;
}