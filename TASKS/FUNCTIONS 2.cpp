#include <iostream>
#include <iomanip>
using namespace std;

void greetings();
int add(int a,int b);
int table(int c);
int shape(int y);

void greetings (){
	cout<<"\t\t\tWelcome"<<endl;
}

int add (int a,int b){
	return a+b;
}

int table (int c){
	for(int i=1;i<=10;i++){
		 cout<<c<<" X "<<i<< " = "<<(c*i)<<endl;
}
}
int main (){
	int choice,num1,num2,num;
	greetings();
	do{
		cout<<"\nCALCULATOR\n";
		cout<<"1.ADD TWO NUMBERS\n";
		cout<<"2.TABLE\n";
		cout<<"3.EXIT\n";
		cin>>choice;
		
		switch(choice){
			
			case 1:
				cout<<"Enter two numbers\n";
				cout<<"1.";cin>>num1;
				cout<<"2.";cin>>num2;
				cout<<"Sum of two numbers "<<add(num1,num2)<<endl;
				break;
				
				case 2:
					cout<<"Enter one number\n";
					cout<<"1.";cin>>num;
					cout<<"Table of "<<num<<" is:\n"<<table(num)<<endl;
					break;
		}
	}while(choice!=3);{
		cout<<"EXITING.......";
	}
	
	
	return 0;
}