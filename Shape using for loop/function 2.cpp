#include<iostream>
using namespace std;

int calculateSum(int marks[], int size);
float calculateAvg(int marks[], int size);
int main() {
    int size, sum;
    cout << "Enter size" << endl;
    cin >> size;

    int studentsMarks[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter your marks " << i + 1 << ": " << endl;
        cin >> studentsMarks[i];
    }

    sum = calculateSum(studentsMarks, size);
    float avg = calculateAvg(studentsMarks, size); 

    cout << "Your total sum is " << sum << endl;
    cout << "Your average is " << avg << endl;
    
    	cout<<"Marks you enter.\n";
    for (int i = 0; i<size; i++){
    	cout<<studentsMarks[i]<<"\t";
	}

    return 0;
}

int calculateSum(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return sum;
}

float calculateAvg(int marks[], int size) {
    int sum = calculateSum(marks, size);
    return (float)sum / size;
}
