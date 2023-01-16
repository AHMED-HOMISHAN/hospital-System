
struct test_types{
	char lab_dept_name[30];
	float start_value;
	float end_value;
	char unit[20];		 
 };
 
 struct department{

	string 	lab_dept_name;
  	test_types test_type;
	
};

department dep;

void input_dep(department dep){
	
	ifstream fin;
	ofstream fout;
	fout.open("laborate.txt",ios::app);
	cout<<"\n\n\tEnter lab_dept_name\t"<<endl;
	cin>>dep.lab_dept_name;
	fout<<"lab_dept_name\t"<<dep.lab_dept_name<<endl;
	fout.close();
}

void input_test(department	test_type){
	
	ifstream fin;
	ofstream fout;
	fout.open("test.txt",ios::app);
	cout<<"\n\n\tEnter lab_dept_name\t"<<endl;
	cin>>dep.lab_dept_name;
	fout<<"lab_dept_name\t"<<dep.lab_dept_name<<endl;
	cout<<"\n\n\t\t\ttest type\n\n"<<endl;
	cout<<"\n\n\tEnter starting value\t"<<endl;
	cin>>dep.test_type.start_value;
	fout<<"starting value\t"<<dep.test_type.start_value<<endl;
	cout<<"\n\n\tEnter end value\t"<<endl;
	cin>>dep.test_type.end_value;
	fout<<"ending value\t"<<dep.test_type.end_value<<endl;
	cout<<"\n\n\tEnter unit \t"<<endl;
	cin>>dep.test_type.unit;
	fout<<"unit value\t"<<dep.test_type.unit<<endl;
	fout.close();
}
	




