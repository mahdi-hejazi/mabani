
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
	struct account a,b; //a baraye gereftan az file  va b baraie gereftan az karbar
	
	 while(1)
	{
		ifstream f1("accounts", ios :: binary);
	if(!f1)
	 {
	   cout<<"error in opening accounts binary file";
	   exit(78);
	 }
		 cout<<"\nenter your account :\t";
	     cin>>b.balance;
         while(f1.read((char *)&a,sizeof(struct account))!=NULL)
	 {
	 	
	 	if(a.balance == b.balance)
	 	 {
	 		
	 		cout<<"\nyour inventory is :\t"<<a.inventory<<"\tpass:"<<a.pass;
	 		break;
	 		
		 }
	 }
	 char i;
	 cout <<"\ndo you wanna try again?(y/n)\n";
	 cin>>i;
	 if(i=='n') 
	 {
	 	cout <<"good bye\n";
	 	return 0;
	 }
	 f1.close();
	}
	
}
