#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
using namespace std;

struct account
{
	int balance;
	int pass;
	int inventory;//mojodi
};

struct customer
{
  char username[30];
  char name[30];
  char family[30]; 
  char password[30];
  char phone[15]; 
  char moaref[30];
  int balance;
  int pass;
 
};

int main()  //sign in customer success = return 1;
{
	struct customer c1,c2;//c1 baraie file va c2 baraie karbar
	cout<<"HELLO \n enter you user name :\t";
	scanf("%s",c2.username);
	
/*	ifstream f3("customers",ios :: binary);
	
		if(!f3)
	 {
	   cout<<"error in opening customer binary file";
	   exit(1);
	 }
	 
	while(!f3.eof())
	{
		f3.read((char *)&c1, sizeof(struct customer));
		if(strcmp(c1.username,c2.username)==0)
		{
			cout<<"\n your user name is used befor.\nplease enter user name:\t";
			scanf("%s",c2.username);
			f3.seekg(0,ios :: beg);
		}
		
	}
	f3.close();*/
	
	cout<<"enter your password:\t";
	scanf("%s",c2.password);
	cout<<"enter the user name of your moaref (if you do not have just enter 0):\t";
	scanf("%s",c2.moaref);
	cout<<"enter your phone number";
	scanf("%s",c2.phone);
	//f1.seekg(0,ios :: beg);
    ifstream f1("accounts", ios :: binary );
    	if(!f1)
	 {
	   cout<<"error in opening accounts binary file ";
	   exit(1);
	 }
    struct account a,b;//b az carbar a az file
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
	 				c2.balance=a.balance;
	 				c2.pass=a.pass;
	 				
	 				ofstream f2("customers",ios :: binary |ios::app);
                   	if(!f2)
                       	{
	                  	cout<<"error in opening a file for customer\n";
	                	exit(1);
                       	}
                  	
                       	f2.write((char *)&c2,sizeof(struct customer));
                       	f2.close();
                       	f1.close();
                       	cout<<"\n customer saved successfully\n";
                       	return 1;
				}
				else cout<<"your password was false\n you can try "<<2-i<<"times"<<endl;
			 }
	 		
		 }
	 }
	 f1.seekg(0,ios :: beg);
	 cout<<"your account was false do you wanna enter another one?(y/n)\n";
	 char g;
	 cin>>g;
	 if(g== 'n')return 0;
   }
	
}
