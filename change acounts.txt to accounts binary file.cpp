#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <iostream>
#include <fstream>
using namespace std;

struct account
{
	int balance;
	int pass;
	int inventory;//mojodi
};
int main()
{
	struct account a; //a baraie greftan az text file va rikhtan toie binary file
	ifstream f1("accounts.txt");
	if(!f1)
	 {
	 cout<<"error in opening accounts.txt";
	 exit(1);
	 }
	ofstream f2("accounts",ios :: binary | ios :: app);
	if(!f2)
	{
		cout<<"error in opening acconts binary file";
		exit(1);
	}
	while(!f1.eof())
	{
		//fscanf("%d\t%d\t%d",a.balance,a.pass,a.inventory);
		f1>>a.balance;
		cout<<a.balance<<"\t";
		//seekg(sizeof(\t)),ios :: cur);
		f1>>a.pass;
		cout<<a.pass<<"\t";
		//seekg(sizeof(\t)),ios :: cur);
		f1>>a.inventory;
		cout<<a.inventory<<"\n";
		//seekg(sizeof(\n)),ios :: cur);
		f2.write((char*)&a,sizeof(struct account));	
	}
	f1.close();
	f2.close();
}
