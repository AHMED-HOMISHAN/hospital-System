
struct recipes{
	char patient_name[30];//FK 
	char doctor_name[30];//FK 
	char medicins[30];//FK 
	char date[20];//DD .MM .YY 
	float total_price;
	
};



void input_rec(recipes	recipe){
	
	ofstream fout;
	fout.open("recipe.txt",ios::app);
	
	cout<<"\n\tpatient_name: \t";
	cin>>recipe.patient_name;
	fout<<"patient_name: \t"<<recipe.patient_name<<endl;
	cout<<"\n\tdoctor_name: \t";
	cin>>recipe.doctor_name;
	fout<<"doctor_name: \t"<<recipe.doctor_name<<endl;
	cout<<"\n\tmedicins: \t";
	cin>>recipe.medicins;
	fout<<recipe.medicins<<endl;
	cout<<"\n\tdate of recipe \t";
	cin>>recipe.date;
	fout<<"date of recipe \t"<<recipe.date<<endl;
	cout<<"\n\ttotal price of medicins: \t";
	cin>>recipe.total_price;
	fout<<"total price of medicins: \t"<<recipe.total_price<<endl;
	
	fout.close();
	
}