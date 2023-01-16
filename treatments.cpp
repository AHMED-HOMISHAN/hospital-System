
struct treatment{
char patient_name[30];
char doctor_name[30];
char lab_category[30];
char test_type[30];
int date_diagnose;
char inforamtion[50];
};

void input_treat(treatment treat){
	ofstream out;
	out.open("treatments.txt",ios::app);
	out<<"\n\n\t\t\t treatments \n\n";
	cout<<"\n Enter patient name : \t";
	cin>>treat.patient_name;
	out<<"patient name : \t"<<treat.patient_name<<endl;
	cout<<"\n Enter doctor name  : \t";
	cin>>treat.doctor_name;
	out<<"doctor name : \t"<<treat.doctor_name<<endl;
	cout<<"\n Enter lab category : \t";
	cin>>treat.lab_category;
	out<<"lab category  : \t"<<treat.lab_category<<endl;
	cout<<"\n Enter test type : \t";
	cin>>treat.test_type;
	out<<"test_type  : \t"<<treat.test_type<<endl;
	cout<<"\n Enter date diagnose : \t";
	cin>>treat.date_diagnose;
	out<<"date_diagnose  : \t"<<treat.date_diagnose<<endl;
	cout<<"\n Enter inforamtion : \t";
	cin>>treat.inforamtion;
	out<<"inforamtion  : \t"<<treat.inforamtion<<endl;
	
	out.close();
}