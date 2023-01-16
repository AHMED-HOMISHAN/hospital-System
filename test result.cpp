
struct test_result{
	char patient_name[20];
	char doctor_name[20];
	char test_type[20];
	char Date_reslut[15];
	
};

void test(test_result resulte){
	ofstream out;
	out.open("test_result.txt",ios::app);
	out<<"\n\t\t\t test result \n\n\n";
	cout<<"\n\n Enter patient name \t";
	cin>>resulte.patient_name;
	out<<" patient name \t"<<resulte.patient_name<<endl;
	cout<<"\n\n Enter doctor name \t";
	cin>>resulte.doctor_name;
	out<<" doctor name \t"<<resulte.doctor_name<<endl;
	cout<<"\n\n Enter test type  \t";
	cin>>resulte.test_type;
	out<<" test_type name \t"<<resulte.test_type<<endl;
	cout<<"\n\n Enter Date_reslut  \t";
	cin>>resulte.Date_reslut;
	out<<" Date_reslut is \t"<<resulte.Date_reslut<<endl;
	
	out.close();
}