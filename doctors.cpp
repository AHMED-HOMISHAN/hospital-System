#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

struct doctors{
	int doc_id;
	char name[20];
	char day[10];
	char month[10];
	char year[10];
};

void insert(doctors d[],int num);
ifstream in;
ofstream out;


int main(){
	int num=0;
	doctors d[num];
		cout<<"Enter how many doctors \t";
		cin>>num;
		cin.ignore();
		insert(d,num);
		return 0;
}	
void insert(doctors d[],int num){
	out.open("doctor.txt",ios::app);
	cout << "\n\n\n\t\t\t\t\t Enter the information of doctors \n" << endl;
	for (int i = 0; i < num; i++){
		cout<<"\n\nThe information of doctors"<<i+1<<endl;
		out<<"\n\nThe information of doctors"<<i+1<<endl;
			cout<<"\n enter ID :\t";          
			 cin>>d[i].doc_id;
			 out<<"\n doctor_id \t"<<d[i].doc_id<<endl;
        	cout<<"enter name  :";
             cin>>d[i].name;
			 out<<"\n doctor_name \t"<<d[i].name<<endl; 
             cout<<"enter the day  : \t";
             cin>>d[i].day;
             out<<"\n doctor_name \t"<<d[i].day<<endl; 
              cout<<"\n enter the month : \t";
             cin>>d[i].month;
             out<<"\n doctor_name\t"<<d[i].month<<endl; 
			cout<<"enter the year : \t";
             cin>>d[i].year;
             out<<"\n doctor_name\t"<<d[i].year<<endl; 
             cout<<"you have finished "<<i+1<<endl<<endl;getche();
		
	}
		out.close();

}