#ifndef MY-HEADER-H-INCLUDED
#define MY-HEADER-H-INCLUDED

#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<string>
#include<conio.h>
using namespace std;

struct history   //struct history is for history of travels
{
  int number;
  int bigining;
  int distination;
  int  price; //gheimat har belit
  int date[3];//1 for year    2 for mounth      3 for day
  char sarneshinan[50][30];
  char ranande[30];
  int capasity;//zarfiat
  int time; //time of this travel
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
	int vasile;
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
};
struct leader leader1;

leader loginleader();
leader loginleader()
 {
			struct leader l1;
			char user[30],pass[30];
			ifstream f1("nessesary", ios :: binary);
			if(!f1)
		    	{
			        cout<<"error in opening file nessesary in login";
			        exit(1);
		    	}
		    while(1)
			{
				
				cout<<"\n enter your username: \t";
		        scanf("%s",user);
		       
		        f1.read((char *)&l1,sizeof(struct leader));
		        if(strcmp(user,l1.username)==0)
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		cout<<"enter your password : \t";
		        	    scanf("%s",pass);
		        	    
		          	    if(strcmp(pass,l1.password)==0)
					    {
						    cout<<"\n you log in as a leader  \n";
					        f1.close();
					        return l1;
					    }
					    else
					    {
					    	cout<<"\n your password is false \n try again \n";
					    	
						}
					}
					cout<<"you tried several time";
					f1.close();
					exit(0);
		        	
				}
				else
				{
					cout << " your user name is false. \n do you want to enter another one?(y/n)"<<endl;
					char s;
					cin >> s;
					if(s=='y' || s=='Y') continue;
					if(s=='n' || s=='N') 
					{
						cout<< "good buy";
						exit(0);
					}
				}
			}	
	       
		    
}

driver logindriver();
driver logindriver()
{
			   	  struct driver d1;
			   	  char user[30],pass[30];
			   	  	ifstream f1("drivers", ios :: binary);
			if(!f1)
		    	{
			        cout<<"error in opening file drivers in login";
			        exit(1);
		    	}
		    while(1)
			{
				
				cout<<"\n enter your username: \t";
		        scanf("%s",user);
		        f1.seekg(0,ios::beg);
		        while(!f1.eof())
		        {
		        	f1.read((char *)&d1,sizeof(struct driver));
		       

		        if(strcmp(user,d1.username)==0)
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		cout<<"enter your password : \t";
		        	    scanf("%s",pass);
		        	    
		          	    if(strcmp(pass,d1.password)==0)
					    {
						    cout<<"\n you log in as a driver \n";
					        f1.close();
					        return d1;
					    }
					    else
					    {
					    	cout<<"\n your password is false \n try again \n";
					    	
						}
					}
					cout<<"you tried several time";
					f1.close();
					exit(0);
		        	
				}
				}
				
				{
					cout << " your user name is false. \n do you want to enter another one?(y/n)"<<endl;
					char s;
					cin >> s;
					if(s=='y' || s=='Y') continue;
					if(s=='n' || s=='N') 
					{
						cout<< "good buy";
						exit(0);
					}
				}
			}	
	       
					  	
};


customer logincustomer();
customer logincustomer()
{
			struct customer c1;
			char username[30],pass[30];
			ifstream f1("customers", ios :: binary);
			if(!f1)
		    	{
			        cout<<"error in opening file customer in login";
			        exit(1);
		    	}
		    while(1)
			{
				struct customer c1;//c1 bara gereftan az file 
				cout<<"\n enter your username: \t";
		        scanf("%s",username);  
		        f1.seekg(0,ios :: beg);
		        while(! f1.eof())
		        {
		        f1.read((char *)&c1,sizeof(struct customer));
		        
		        if(strcmp(username,c1.username)==0)
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		cout<<"enter your password : \t";
		        	    scanf("%s",pass);
		        	    
		          	    if(strcmp(pass,c1.password)==0)
					    {
						    cout<<"\n you log in as a customer  \n";
					        f1.close();
					        return c1;
					    }
					    else
					    {
					    	cout<<"\n your password is false \n try again \n";
					    	
						}
					}
					cout<<"you tried several time";
					f1.close();
					exit(0);
		        	
				}
				
				}
		        
				
				{
					cout << " your user name is false. \n do you want to enter another one?(y/n)"<<endl;
					char s;
					cin >> s;
					if(s=='y' || s=='Y') continue;
					if(s=='n' || s=='N') 
					{
						cout<< "good buy";
						exit(0);
					}
				}
			}	
}



#endif
