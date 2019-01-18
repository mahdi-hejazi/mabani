#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
#include <fstream>
using namespace std;

struct history   //struct history is for history of travels
	{
		int number;
		int bigining;
		int distination;
		int  price; //gheimat har belit
		int date[3];//1 for year    2 for mounth      3 for day
		char sarneshinan[500][30];
		char ranande[30];
		int capasity;//zarfiat
		int time[2];//1.saat 2.daghighe 
		int traveltime[2]; // 1.saat residan 2.daghighe residan 
		int ranandeaccout;
		int vasile;//1bus 2train 3plane
	}s;

struct account
{
	int balance;
	int pass;
	int inventory;//mojodi
}a;
int main()
{
	ofstream f1("safar", ios::binary);
	f1.close();//file safaro misaze
	ofstream f2("drivers",ios::binary);
	f2.close();
    ofstream f3("customers",ios::binary);
	f3.close();
	ofstream f4("nessesary",ios::binary);
	f4.close();	
	struct account a; //a baraie greftan az text file va rikhtan toie binary file*/
	ifstream f5("accounts.txt");
	if(!f5)
	 {
	 cout<<"error in opening accounts.txt";
	 exit(1);
	 }
	ofstream f6("accounts",ios :: binary | ios :: app);
	if(!f6)
	{
		cout<<"error in opening acconts binary file";
		exit(1);
	}
	while(!f5.eof())
	{
		//fscanf("%d\t%d\t%d",a.balance,a.pass,a.inventory);
		f5>>a.balance;
		cout<<a.balance<<"\t";
		//seekg(sizeof(\t)),ios :: cur);
		f5>>a.pass;
		cout<<a.pass<<"\t";
		//seekg(sizeof(\t)),ios :: cur);
		f5>>a.inventory;
		cout<<a.inventory<<"\n";
		//seekg(sizeof(\n)),ios :: cur);
		f6.write((char*)&a,sizeof(struct account));	
	}
	f5.close();
	f6.close();
}
