#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	float c1,c2,c3,c4,c5;
	float total_marks;
	char grade;
	
	cout<<"C1"<<endl;
	cin>>c1;
	cout<<"C2"<<endl;
	cin>>c2;
	cout<<"C3"<<endl;
	cin>>c3;
	cout<<"C4"<<endl;
	cin>>c4;
	cout<<"C5"<<endl;
	cin>>c5;
	
	total_marks=c1+c2+c3+c4+c5;
	float percentage = (total_marks/500)*100;
	
	cout<<"Total marks is"<<total_marks<<endl;
	
	cout<<"Percentage"<<percentage<<"%"<<endl;
	 if (percentage >= 90) {
        grade = 'A+';  // Grade A+
    } else if (percentage >= 70 && percentage < 90) {
        grade = 'A';   // Grade A
    } else if (percentage >= 50 && percentage < 70) {
        grade = 'B';   // Grade B
    } else {
        grade = 'F';   // Grade F
    }

    // Output the grade
    cout << "Grade: " << grade << endl;

	
	return 0;
}