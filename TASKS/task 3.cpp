#include <iostream>
using namespace std;

int main(){
int score= 100;

if (score=100){
	cout<<"-: Grade:'A+'\n";
}
else if(score>=90){
	cout<<"-: Grade:'A'";
}
else if (score>=90){
	cout<<"-: Grade:'B'\n";
}
else if (score>=70){
	cout<<"-: Grade:'C'\n";
}
else{
	cout<<"-: Grade:'F'\n";
}
return 0;
}