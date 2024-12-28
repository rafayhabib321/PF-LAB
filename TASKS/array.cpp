#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int number[5];
	int sum =0;
	for(int i=0; i<5; i++){
		cout<<"number"<<i+1<<endl;
		cin>>number[i];
	}
	for(int i=0; i<5; i++){
		sum+=number[i];
	}
	for(int i=0; i<5; i++){
		cout<<number[i]<<setw(10);
	}
	double average = static_cast<double>(sum)/5;
	cout<<'\n'<<average<<"%";
	return 0;
}