#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<istream>
#include<fstream>
#include<string>
using namespace std;

struct account
{
	int balance;
	int pass;
	int inventory;//mojodi
};

struct leader
{
	char password[30];//="rr12dhdh";
	char username[30];//="gj12fg";
	int balance;
	int pass;
	int inventory;//mojodi
};
int main()
{
	struct leader l1;
	cout<<"\nyour user name:\t";
	scanf("%s",l1.username);
	cout<<"\nyour password :\t";
	scanf("%s",l1.password);
    
    struct account a,b;//a baraie file va b baraie karbar va moghaiese in do
    ifstream f1("accounts", ios :: binary);
	if(! f1)
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
	 				l1.balance=a.balance;
	 				l1.pass=a.pass;
	 				l1.inventory=a.inventory;
	 				ofstream f2("nessesary",ios :: binary);
                   	if(!f2)
                       	{
	                  	cout<<"error in opening a file for leader with the name nessesary\n";
	                	exit(1);
                       	}
                  	
                       	f2.write((char *)&l1,sizeof(struct leader));
                       	f2.close();
                       	f1.close();
                       	cout<<"\nleader saved successfully\n";
                       	return 1;
				}
				else cout<<"your password was false\n you can try "<<2-i<<"times"<<endl;
			 }
	 		
		 }
	}
   }
	

}
