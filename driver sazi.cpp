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

struct driver
{
	char username[30];
	char password[30];
    int balance;
	int pass;
	int inventory;//mojodi
};

int main()
{
	struct driver d1;
	cout<<"\n enter name of driver :\t";
	scanf("%s",d1.username);
	cout<<"\n enter pasword of driver :\t";
	scanf("%s",d1.password);
	struct account a,b; //a baraye gereftan az file  va b baraie gereftan az karbar
	ifstream f1("accounts", ios :: binary);
	if(!f1)
	 {
	   cout<<"error in opening accounts binary file";
	   exit(1);
	 }
	 while(1)
	{
		 cout<<"enter your account :\t";
	     cin>>b.balance;
         while(!f1.eof())
	 {
	 	f1.read((char *)&a,sizeof(struct account));
	 	if(a.balance == b.balance)
	 	 {
	 		
	 		for(int i=0;i<3;i++)
	 		{
	 			cout<<"\n enter your password:\t";
	 			cin>>b.pass;
	 			if(b.pass == a.pass)
	 			{
	 				cout<<"\nyour pass was right\n";
	 				d1.balance=b.balance;
	 				d1.pass=a.pass;
	 				d1.inventory=a.inventory;
	 				ofstream f2("drivers",ios :: binary | ios :: app);
                   	if(!f2)
                       	{
	                  	cout<<"error in opening a file for drivers\n";
	                	exit(1);
                       	}
                  	
                       	f2.write((char *)&d1,sizeof(struct driver));
                       	f2.close();
                       	f1.close();
                       	cout<<"\nyour driver saved successfully\n";
                       	return 1;
				}
				else cout<<"your password was false\n you can try "<<2-i<<"times"<<endl;
			 }
	 		
		 }
	 }
	 char i;
	 cout <<"your account is false.\n do you wanna try again?(y/n)\n";
	 cin>>i;
	 if(i=='n') 
	 {
	 	cout <<"good bye\n";
	 	return 0;
	 }
	 f1.close();
	}
	

	
	
}
