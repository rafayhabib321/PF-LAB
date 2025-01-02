#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct book {
	char name[50];
	char author[50];
	int pages;
};

int main (){
	int i=0;
	book no[4]={{"The lion king","charles",500},{"The earth","smith",5000},{"The Empire","Arthur",200},{"The Necklace","John",250}};
	cout<<setw(50)<<"LIBRARY\n";
	
//	for (int i=0; i<4; i++){
		//cout<<"-> Book"<<no[i].name<<endl;
		//cout<<"-> Author"<<no[i].author<<endl;
		//cout<<"-> Pages"<<no[i].pages<<endl;
		//cout<<endl<<endl;
		
	//};
	
	
//	while(i<4){
//		cout<<"-> Book"<<no[i].name<<endl;
//		cout<<"-> Author"<<no[i].author<<endl;
//		cout<<"-> Pages"<<no[i].pages<<endl;
//		cout<<endl<<endl;
//		i++;
//	};
		cout<<"BOOK"<<setw(25)<<"AUTHOR"<<setw(25)<<"PAGES\n";
		do{
		cout<<no[i].name;
		cout<<setw(17)<<no[i].author;
		cout<<setw(25)<<no[i].pages;
		cout<<endl<<endl;
		i++;
	}while(i<4);
	
	return 0;
}