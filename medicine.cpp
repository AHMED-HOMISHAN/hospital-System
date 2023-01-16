
struct medicines{
	int ID;
	char medicin_name[30];
	float price;
	
};

void input_med(medicines medicine[],int a){
	
	ofstream fout;
	fout.open("medicine.txt",ios::app);
	for(int i=0;i<a;i++){
	cout<<"\n\t\t\t Medicine :\t"<<i+1<<endl<<endl;
	cout<<"\n\tEnter medicine id :\t";
	cin>>medicine[i].ID;
	fout<<"medicine id :\t"<<medicine[i].ID<<endl;
	cout<<"\n\tEnter medicine name\t:";
	cin>>medicine[i].medicin_name;
	cin.ignore();
	fout<<"medicine name\t"<<medicine[i].medicin_name<<endl;
	cout<<"\n\tEnter medicine price\t:";
	cin>>medicine[i].price;
	fout<<"medicine price\t"<<medicine[i].price<<endl;	}
	getche();
	
	fout.close();	
}