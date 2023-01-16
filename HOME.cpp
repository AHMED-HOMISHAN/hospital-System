#include<iostream>
#include<iomanip>
#include<conio.h>
#include<cstdlib>
#include<fstream>

#include"patients.cpp"
#include"laborat.cpp"
#include"recipe.cpp"
#include"medicine.cpp"
#include"treatments.cpp"
#include"test result.cpp"
#include"patient_document.cpp"


using namespace std;


struct clinics{
	 int ID;
	char clinics_name[30];
	char working_days[20];
};


struct doctors{
	int doc_id;
	char name[20];
	char birthdate[10];
};



int main(){
	char choose=' ';
	
	unsigned int count=0;
	int num=0;
	string user, pass;
	patients patient[num]; 
	department dep;
	recipes recipe;
	medicines medicine[num];
	treatment treats;
	test_result resulte;
	clinics clinc;
	patient_document ip[num];
	doctors d;
	

while(user!="HR"||user==" "||pass!="123"){
		system("CLS");
		if(count>=3&&count<=5){
			cout<<right<<endl<<setw(80)<<"* YOU HAVE TRIED MORE THAN THREE TIMES * \n\n\n";
		}
		else if(count>5){
			cout<<"\n\n\t\t\t\t\t\t\t\t ********* THANKS ********\n\n";getche();
			exit(0);
		}
		cout<<"\t\t\t\t***************************************************\n";
		cout<<right<<setw(70)<<" WELCOM TO HOSPITAL\n";
		cout<<"\t\t\t\t***************************************************\n\n";
		cout<<"\n\t\t\t  USER NAME IS \t [ HR ]\t\t\t PASSWORD IS \t [ 123 ]\n\n";
		cout<<right<<setw(50)<<"USER NAME :\t";
		getline(cin>>ws,user);
		cout<<right<<setw(50)<<"PASSWORD : \t";
		getline(cin>>ws,pass);
		count++;
		if(user=="HR"&&pass=="123"){
			cout<<"\n\n\n\n\t\t\t\t\t login successfully..........\n\n\n";
			getche();
		}
	}
	
on1:	while(choose!='1'||choose!='2'||choose!='3'||choose!='4'||choose!='5'||choose!='6'){
				system("CLS");
				cout<<endl<<right<<setw(50)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
				cout<<"\t1-patients\n\n\t2-Laboratory\n\n\t3-Mediciense\n\n\t4-clinics\n\n\t5-Doctor Files\n\n\t6-Exit\n\n";
				choose=getche();
				switch(choose){
					case '1' : on:
							while(choose!='1'||choose!='2'||choose!='3'||choose!='4'||choose!='5'||choose!='6'){
								system("CLS");
						cout<<endl<<right<<setw(50)<<"\t\tPATIENTS \n\n\n\n";
						cout<<endl<<right<<setw(30)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
						cout<<"\t1-patients \n\n\t2-patient document \n\n\t3-treatments\n\n\t4-recipe\n\n\t5-test result\n\n\t6-Back\n\n";
						cout<<"choose number \t";choose=getche();
						switch(choose){
								case '1': while(choose!='1'||choose!='2'||choose!='3'||choose!='4'||choose!='5'||choose!='6'){
											system("CLS");
											cout<<endl<<right<<setw(50)<<"\t\tPATIENTS SECTION\n\n\n\n";
											cout<<endl<<right<<setw(30)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
											cout<<"\t1-patient information \n\n\t2-Add New Patient \n\n\t3-Delet Patient\n\n\t4-Edit Patient Information\n\n\t5-Search By : ID - First Name - Last Name\n\n\t6-Back\n\n";
											cout<<"choose number \t";choose=getche();
											int q=0;
											switch(choose){
												case '1':;break;
												case '2':cout<<"\n\nPlease Enter How many patient \t";
														cin>>num;
														add(patient,num);break;
												case '3':cout<<"\n\nPlease Enter  ID of the  patient \t";
													cin>>num;
												//	deleted(patient,num);break;
												case '4':;break;
												case '5':	cout<<"\n\n1-ID\n\n\n2-FIRST NAME\n\n3-LAST NAME \t";
															cout<<"Enter your choice\t";cin>>q;
													if(q==1){
														break;
													}
													else if(q==2){
														break;
													}
													else if(q==3){
														break;
													}
													else 
													cout<<"\n\nERROR\n\n";
													search();break;
												case '6':goto on;break;
												default:cout<<"\n\n\n\t\t\tError\n\n\n";break;}						
												};break;
								case '2':cout<<"\n\n\t\tHOW MANY TO ENTER \t";cin>>num;
											input_pa(ip,num);break;
								case '3':input_treat(treats);break;
								case '4':input_rec(recipe);break;
								case '5':test(resulte);break;
								case '6':goto on1;break;
								default:cout<<"\n\n\n\t\t\tError\n\n\n";break;};break;
					case '2':
									while(choose!='1'||choose!='2'||choose!='3'){
									system("CLS");
							cout<<endl<<right<<setw(50)<<"\t\tLABORATORY\n\n\n\n";
							cout<<endl<<right<<setw(30)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
							cout<<"\t1-Demartment (category) \n\n\t2-test type \n\n\t3-Back\n\n";
							cout<<"choose number \t";choose=getche();
									switch(choose){
									case '1':input_dep(dep);break;
									case '2':input_test(dep);break;
									case '3':goto on1;break;
									default:cout<<"\n\n\n\t\t\tError\n\n\n";break;}
									};break;
									
					case '3':while(choose!='1'||choose!='2'){
									system("CLS");
							cout<<endl<<right<<setw(50)<<"\t\MEDICINES\n\n\n\n";
							cout<<endl<<right<<setw(30)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
							cout<<"\t1-Enter ID - MEDICIN NAME - PRICE \n\n\t2-BACK\n\n";
							cout<<"choose number \t";choose=getche();
									switch(choose){
									case '1':cout<<"\n\nEnter how many medicens \t";cin>>num;
												input_med(medicine,num);break;
									case '2':goto on1;break;
									default:cout<<"\n\n\n\t\t\tError\n\n\n";break;}
									};break;
									
					case '4':while(choose!='1'||choose!='2'){
									system("CLS");
							cout<<endl<<right<<setw(50)<<"\t\CLINIC\n\n\n\n";
							cout<<endl<<right<<setw(30)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
							cout<<"\t1-ID \n\n\t2-CLINIC NAME \n\n\t3-WORKING DAYS\n\n\t4-BACK\n\n";
							cout<<"choose number \t";choose=getche();
										ofstream out;
 										out.open("clincs.txt" );
 										out<<"\n\t\t\t CLINICS \n\n";
									switch(choose){
									case '1': cout<<"\n\nEnter clinic ID"<<endl;
											 cin>>clinc.ID;
											 out<<"clinc id : \t"<<clinc.ID<<endl;break;
									case '2':cout<<"\n\nEnter the clincs name"<<endl;
											 cin>>clinc.clinics_name;
											 out<<"name: \t"<<clinc.clinics_name<<endl;break;
									case '3': cout<<"\n\nEnter working_days"<<endl;
												cin>>clinc.working_days;
												out<<"working_day: \t"<<clinc.working_days<<endl;break;
												out.close();
									case '4':goto on1;break;
									default:cout<<"\n\n\n\t\t\tError\n\n\n";break;}
									};break;
					case '5':while(choose!='1'||choose!='2'){
									system("CLS");
							cout<<endl<<right<<setw(50)<<"\t\DOCTOR\n\n\n\n";
							cout<<endl<<right<<setw(30)<<"PRESS ONE OF THE CHOICES WHICH ARE AVAILABLE\n\n\n\n";
							cout<<"\t1-ID \n\n\t2-DOCTOR NAME \n\n\t3-birthdate\n\n\t4-BACK\n\n";
							cout<<"choose number \t";choose=getche();
								ofstream out;
									out.open("doctor.txt",ios::app);
									cout << "\n\n\n\t\t\t\t\t Enter the information of doctors \n" << endl;
									cout<<"\n\nThe information of doctors"<<endl;
									out<<"\n\nThe information of doctors"<<endl;
									switch(choose){
									case '1':cout<<"\n enter ID :\t";          
												 cin>>d.doc_id;
												 out<<"\n doctor_id \t"<<d.doc_id<<endl;break;
									case '2':cout<<"enter name  :";
								             cin>>d.name;
											 out<<"\n doctor_name \t"<<d.name<<endl ;break;
									case '3':cout<<"enter the bitthdate  : \t";
								             cin>>d.birthdate;
								             out<<"\n bitthdate \t"<<d.birthdate<<endl;out.close();break;
									case '4':goto on1;break;
									default:cout<<"\n\n\n\t\t\tError\n\n\n";break;}
									};break;
					case '6':exit(1);
					default:;
					}
			}	}
	return 0;
}