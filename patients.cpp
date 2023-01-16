#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<fstream>


using namespace std;


bool check(char p[]);

struct location{
	char country[20];
	char city[20];
	char street[20];	
};

struct patients{
	 int patient_id;
	char first_name[20];	
	char last_name[20];
	char sex[5];
	 char contactNumber[12];
	 int age;
	location address;
	char blood[2];
	char diseases[30];
	char date[20];
	double billcost;
};
////write and input information


void add(patients patient[],int b){
		ifstream in;
		ofstream out;
	out.open("patients.txt",ios::app);
	for(int i=0;i<b;i++){
		cout<<"\n\n\t\t\t*************************************************************";
		cout<<"\n\n\t\t\t\t\t FILL THE INFORMATION ABOUT "<<i+1;
		cout<<"\n\n\t\t\t*************************************************************\n\n";
		
		out<<endl<<" FILL THE INFORMATION ABOUT "<<i+1<<endl<<endl;
		
		cout << "\nplease Enter the patient ID : \t";
 		cin>>patient[i].patient_id;
		out<<"ID : "<<patient[i].patient_id<<endl;


		do{	
			cout << "\nplease Enter the first patient name : \t";
			cin>>patient[i].first_name;
			if(check(patient[i].first_name)==false){
				cout<<"Invaid Name \n\n";
			}
		}while(check(patient[i].first_name)==false);
		
		out<<"FIRST NAME  : "<<patient[i].first_name<<endl;
		

		do{	
		cout << "\n please Enter the  patient last name : \t";
		cin>>patient[i].last_name;
		if(check(patient[i].last_name)==false){
				cout<<"Invaid Name \n\n";
			}
		}while(check(patient[i].last_name)==false);
		
		out<<"LAST NAME  : "<<patient[i].last_name<<endl;
		
		
		
		cout<<"\nplease Enter the patient gander female or male : \t";
 		cin>>patient[i].sex;
 		
		out<<"GANDER : "<<patient[i].sex<<endl;
	
	do{	cout << "\nplease Enter the patient contact number without any spaces: \t";
		cin >> patient[i].contactNumber;
		cin.ignore();
			if(check(patient[i].contactNumber)==true){
				cout<<"Invalid contactNumber\n\n";
				}
		out<<"content number : "<<patient[i].contactNumber<<endl;
		}while(check(patient[i].contactNumber)==true);
		
		do{
			cout << "\nplease Enter the patient age with numbers : \t";
			cin >> patient[i].age;
			if(patient[i].age>=150){
				cout<<"Invalid Age\n\n";
				}
			}while(patient[i].age>=150);
			
		out<<"AGE : "<<patient[i].age<<endl;
		
		
		cout<<"\n\n\t\t\t ADDRESS \n\n"<<endl;
		out<<endl<<endl<<" ADDRESS "<<endl<<endl;
		
		cout<<"please Enter the country : \t";
		cin>>patient[i].address.country;
		
		out<<"country : "<<patient[i].address.country<<endl;
		
		
		cout<<"please Enter the City : \t";
		cin>>patient[i].address.city;
	
		out<<"city : "<<patient[i].address.city<<endl;
			
		
		cout<<"please Enter the street : \t";
		cin>>patient[i].address.street;
		cin.ignore();
		out<<"Street : "<<patient[i].address.street<<endl;
		
		do{
			if(check(patient[i].diseases)==false){
				cout<<"Invaid Disease \n\n";
			}
			cout << "does the patient had diseases earlier Enter none if not \t";
			cin>>patient[i].diseases;
			cin.ignore();
		}while(check(patient[i].diseases)==false);
		
		out<<"Diseas  : "<<patient[i].diseases<<endl;
			
		
		cout << "please Enter the patient blood group example o+: \t";
		cin>>patient[i].blood;
		
		out<<"Blood : "<<patient[i].blood<<endl;
		

		
		cout << "please Enter the date of today in the format yy / mm / dd : \t";
		cin>>patient[i].date;
		
		out<<"Date : "<<patient[i].date<<endl;
		
		cout<<"You have finished \t"<<i+1<<"\t patient"<<endl;
	
		getche();
		
		
	}
	
	out.close();
}


///check function

bool check(char p[]){
	bool fun;
	for(int i=0;i<strlen(p);i++){
		if(p[i]>=48&&p[i]<=57||p[i]==32){
			fun= false;break;
		}
		else
		fun= true;
	}
	return fun;
}


	
void deleted(patients patient[],int a){
	ifstream in_temp;
	ofstream out_temp;
	
	in_temp.open("patients.txt");
	
	if(!in_temp){
		cout<<"\t\t\tTHE FILE CANNOT FOUND\n\n";exit(0);
	}
	out_temp.open("temp.txt",ios::app);
	

 int i=0;
 
while(!in_temp.eof()&&in_temp){
			
		in_temp>>patient[i].patient_id;
		in_temp>>patient[i].first_name;
		in_temp>>patient[i].last_name;
		in_temp>>patient[i].sex;
		in_temp>>patient[i].contactNumber;
		in_temp>>patient[i].age;
		in_temp>>patient[i].address.country;
		in_temp>>patient[i].address.city;
		in_temp>>patient[i].address.street;
		in_temp>>patient[i].diseases;
		in_temp>>patient[i].blood;
		in_temp>>patient[i].date;
		
		if(patient[i].patient_id !=a ){
				
				out_temp<<endl<<" FILL THE INFORMATION ABOUT "<<i+1<<endl<<endl;
			
				out_temp<<"ID : "<<patient[i].patient_id<<endl;
				out_temp<<"FIRST NAME : "<<patient[i].first_name<<endl;
				out_temp<<"LAST NAME : "<<patient[i].last_name<<endl;
				out_temp<<"GANDER : "<<patient[i].sex<<endl;
				out_temp<<"content number : "<<patient[i].contactNumber<<endl;
				out_temp<<"AGE : "<<patient[i].age<<endl;
				out_temp<<endl<<endl<<" ADDRESS "<<endl<<endl;
				out_temp<<"country : "<<patient[i].address.country<<endl;
				out_temp<<"city : "<<patient[i].address.city<<endl;
				out_temp<<"Street : "<<patient[i].address.street<<endl;
				out_temp<<"Diseas : "<<patient[i].diseases<<endl;
				out_temp<<"Blood : "<<patient[i].blood<<endl;
				out_temp<<"Date : "<<patient[i].date<<endl;
			}
			else{
				cout<<"\n\t\t Rocrded deleted successfully...";getche();
			
			}
		
		i++;

			
}
	in_temp.close();
	out_temp.close();	
	
	remove("patients.txt");
	rename("temp.txt","patients.txt");	
}

	
patients p;

void search(){
	ifstream in_temp;
	char first_name_temp[20];
	
	in_temp.open("patients.txt");
	
	if(!in_temp){
		cout<<"\t\t\tTHE FILE CANNOT FOUND\n\n\n";exit(0);
		}
		
		cout<<"\n\n\t\t\tEnter the first name of patient \t";cin>>first_name_temp;

		while(!in_temp.eof()){
		in_temp>>p.patient_id>>p.first_name>>p.last_name>>p.sex>>p.contactNumber>>p.age>>p.address.country>>p.address.city>>p.address.street>>p.diseases>>p.blood>>p.date;
	
		if(strcmp(p.first_name , first_name_temp)==0){
				cout<<"\n\n\t\t\t*************************************************************";
				cout<<"\n\n\t\t\t\t\t FILL THE INFORMATION ABOUT ";
				cout<<"\n\n\t\t\t*************************************************************\n\n";
				cout<<"ID \t: "<<p.patient_id<<endl;
				cout<<"FIRST NAME \t: "<<p.first_name<<endl;
				cout<<"LAST NAME \t: "<<p.last_name<<endl;
				cout<<"GANDER\t: "<<p.sex<<endl;
				cout<<"content number\t: "<<p.contactNumber<<endl;
				cout<<"AGE\t: "<<p.age<<endl;
				cout<<endl<<endl<<"\t\t\t ADDRESS \n"<<endl;
				cout<<"country \t: "<<p.address.country<<endl;
				cout<<"city \t: "<<p.address.city<<endl;
				cout<<"Street\t: "<<p.address.street<<endl;
				cout<<"Diseas \t: "<<p.diseases<<endl;
				cout<<"Blood \t: "<<p.blood<<endl;
			
			}
		}
		if(strcmp(p.first_name , first_name_temp)==0){
				cout<<"\n\t\t\tThe patient could not exited\n\n";getche();
			}
		in_temp.close();	
}
	

	
