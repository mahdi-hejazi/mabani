#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include "login.h" //header ke ma tarif kardim shamel tabeie login() baraie logi shodan
    //stuct haie ma dar header login.h tarif shodand
using namespace std;
/*file haie ma shamel : accounts baraie account ha
customers baraie atelaat moshtary ha
drivers baraie ranande ha
nessesary baraie atelaat digar mesle leader dar khat aval
travel-history baraie tarikhche safar ha
travels baraie safar haie alan*/

/*struct history   //struct history is for history of travels
{
  int number;
  char bigining[30];
  char distination[30];
  int  price; //gheimat har belit
  int date[3];//1 for year    2 for mounth      3 for day
  char sarneshinan[50][30];
  char ranande[30];
  int capasity;//zarfiat
};
struct leader //first pass=a      firs user=a
{
	char password[30];
	char username[30];
	int balance;
	int pass;
	int inventory;//mojodi
};
struct driver
{
	char username[30];
	char password[30];
	int vasile;//1bus 2train   3plane
    int balance;
	int pass;
	int inventory;//mojodi
};
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
  int inventory;//mojodi  
};*/
void editkarbar()
{
	int a;//khat bado bekhon
	cout<<"what do you you want to edit?\n1:password\t 2:username and password \t 3:account";
	cin>>a;
	if(a==1)
	{
		struct customer c1,c2;//c1 for karbar c2 for file
		cout<<"enter your username:\t";
		scanf("%s",c2.username);
		fstream f1("customers",ios :: binary);
		while(! f1.eof())
		{
			f1.read((char *)&c1,sizeof(struct customer));
			if(strcmp(c1.username,c2.username)==0)
			{
				cout<<"\n enter your new password:\t";
				scanf("%s",c1.password);
				f1.seekg(-1*sizeof(struct customer),ios :: cur);
				f1.write((char *)&c1,sizeof(struct customer));
				f1.close();
				break;
			}
		}
	}
	
	if(a==2)
	{
		struct customer c1,c2,c3;//c2 for karbar c1 for file c3 ham for file ba check kardan tekrari nabodan  new user
	cout<<"\n enter your last user name :\t";
	scanf("%s",c2.username);
	
	fstream f3("customers",ios :: binary);
	
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
			cout<<"enter your last password:\t";
			scanf("%s",c2.password);
			if(strcmp(c2.password,c1.password)==0)
			{
			cout<<"\n please enter new username:\t";
			scanf("%s",c1.username);
			
			ifstream f4("customers",ios :: binary);
	
	    	if(!f4)
	         {
                cout<<"error in opening customer binary file";
	            exit(1);
	         }
	 
         	while(!f4.eof())
        	{
     		f4.read((char *)&c3, sizeof(struct customer));
	    	if(strcmp(c3.username,c2.username)==0)
	        	{
		           	cout<<"\n your user name is used befor.\nplease enter user name:\t";
		         	scanf("%s",c2.username);
		        	f4.seekg(0,ios :: beg);
	        	}
		
         	}
        	f4.close();
	
			cout<<"\n enter a password:\t";
			scanf("%s",c1.password);
			f3.seekg(-1 * sizeof(struct customer),ios :: cur);
			f3.write((char *)&c1,ios :: cur);
			break;
			}
		}
		
	}
	f3.close();
	}
	
	
}

int driversazi()
{
	struct driver d1,d2;//d1 for karbar   d2 for file
	cout<<"\n enter name of driver :\t";
	scanf("%s",d1.username);
	
		ifstream f3("drivers",ios :: binary);
	
		if(!f3)
	 {
	   cout<<"error in opening drivers binary file";
	   exit(1);
	 }
	 
	while(!f3.eof())
	{
		f3.read((char *)&d2, sizeof(struct driver));
		if(strcmp(d1.username,d2.username)==0)
		{
			cout<<"\n your user name is used befor.\nplease enter another user name:\t";
			scanf("%s",d1.username);
			f3.seekg(0,ios :: beg);
		}
		
	}
	f3.close();
	
	
	cout<<"\n enter pasword of driver :\t";
	scanf("%s",d1.password);
	cout<<"\n enter the number of your vaicle?(1:bus 2:train 3:plane)\n";
	cin>>d1.vasile;
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
	 	f1.close();
	 	return 0;
	 }
	
	}
	

	
	
}
int bossediter()//for editing boss
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

int signin()  
{
	struct customer c1,c2;//c1 baraie file va c2 baraie karbar
	cout<<"HELLO \n enter you user name :\t";
	scanf("%s",c2.username);
	
	ifstream f3("customers",ios :: binary);
	
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
	f3.close();
	
	cout<<"enter your passeord:\t";
	scanf("%s",c2.password);
	cout<<"enter the user name of your moaref (if you do not have just enter 0):\t";
	scanf("%s",c2.moaref);
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
	 				c2.inventory=a.inventory;
	 				ofstream f2("customers",ios :: binary | ios :: app);
                   	if(!f2)
                       	{
	                  	cout<<"error in opening a file for customer\n";
	                	exit(1);
                       	}
                  	
                       	f2.write((char *)&c2,sizeof(struct customer));
                       	f2.close();
                       	f1.close();
                       	cout<<"\n you sign in successfully\n";
                       	return 1;
				}
				else cout<<"your password was false\n you can try "<<2-i<<"times"<<endl;
			 }
			 cout<<"\nyou tried several times\n";
			 return 0;
	 		
		 }
	 }
	 cout<<"\n if you do not want to continue enter n else enter another character";
	 char l;
	 cin>>l;
	 if(l=='n') return 0;
   }
	
}

int main()
{
	int a;
	

  
  
  
  
}
