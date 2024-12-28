#include <iostream>
using namespace std;
//stand alone function.
	void chr();

//return fucntion.
	int num (int a, int b);
 
int main (){
	//stand alone function
	chr();
	cout<<"inverted triangle.\n";
	
	//return function
	int a,b;
	cout<<"enter a and b num.\n";
	cin>>a;
	cin>>b;
	cout<<a<<" X "<<b<<" = "<<num(a,b);
	return 0;
}

	//stand alone function
	void chr(){ 
	  int n = 5;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
	}
	
	//return function
	int num (int a, int b){
		return a*b;
	}