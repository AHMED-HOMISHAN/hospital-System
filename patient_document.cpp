struct patient_document{
	int paitient_id;
	char date[20];
	char information[50];
};

void input_pa(patient_document ip[],int a){
	ofstream of;
	of.open("patient_document.txt",ios::app);
	for(int i=0;i<a;i++){
		cout<<"\n\n\t PATIENT INFORMATIN"<<i+1<<endl;
		of<<"\n\n\t PATIENT INFORMATIN"<<i+1<<endl;
		cout<<"paitient_id \t";cin>>ip[i].paitient_id;
		of<<"date \t"<<ip[i].date<<endl;
		cout<<"date \t";cin>>ip[i].date;
		of<<"date \t"<<ip[i].date<<endl;
		cout<<"information \t";cin>>ip[i].information;
		of<<"information \t"<<ip[i].information<<endl;
	}
}