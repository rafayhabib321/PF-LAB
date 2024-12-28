#include <iostream>
using namespace std;
int main(){
	int num, bin, value;
	cout<< "enter number";
	cin >> num;
	do{
		num = num/2;
		bin = num % 2;
		if (bin%2==0){
			cout<< "0";
		}
		else{
			cout << "1";
		}
	}while(num>1);
	return 0;
	
}