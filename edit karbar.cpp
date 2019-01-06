#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
//#include "login.h" //header ke ma tarif kardim shamel tabeie login() baraie logi shodan
    //stuct haie ma dar header login.h tarif shodand
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
};


int editkarbar()
{
	struct customer c1,c2;//c1 for file
	ifstream f1("customers",ios::binary);
    while(1)
    {
        printf("enter your old user name:\t");
	    scanf("%s",c2.username);
	    for(int i=0;!f1.eof();i++) //i baraie shomaresh ke chandomin stuct file baraie karbar ast
	    {
	    	f1.read((char *)&c1,sizeof(struct customer));
	    	if(strcmp(c1.username,c2.username)==0)
	    	{
	    		f1.close();
	    		while(1)
	    		{
				cout<<"\nwhich information you wanna change? enter thenumber\n";
	    		cout<<"1.name  2.family  3.username  4.password  5.phone_number  6.balance\n";
	    		int b;
	    		cin>>b;
	    		switch(b)
	    		{
	    			case 1:{
	    				cout<<"enter your new name:\t";
	    				scanf("%s",c1.name);
						break;
					}
					case 2:{
						cout<<"enter your new family:\t";
						scanf("%s",c1.family);
						break;
					}
	    			case 3:{
	    				cout<<"enter your new username:\t";
	    				ifstream f3("customers",ios :: binary);
	
	                	if(!f3)
                       	 {
	                       cout<<"error in opening customer binary file";
	                       exit(1);
	                     }
	                     struct customer c3;
                    	while(!f3.eof())
                        	{
	                        	f3.read((char *)&c3, sizeof(struct customer));
	                        	if(strcmp(c1.username,c3.username)==0)
	                            	{
		                            	cout<<"\n your user name is used befor.\nplease enter another user name:\t";
		                             	scanf("%s",c1.username);
		                            	f3.seekg(0,ios :: beg);
	                            	}
		
                          	}
                    	f3.close();
						break;
					}
					case 4:{
						cout<<"enter your new password:\t";
						scanf("%s",c1.password);
						break;
					}
					case 5:{
						cout<<"enter your new phone_number:\t";
						scanf("%s",c1.phone);
						break;
					}
					case 6:{
						ifstream f4("accounts",ios::binary);
						struct account a1;
					
							cout<<"enter your new balance:\t";
							cin>>c1.balance;
							while(!f4.eof())
							{
								f4.read((char *)&a1,sizeof(struct account));
								if(a1.balance==c1.balance)
								{
									for(int r=0;r<3;r++)
									{
										cout<<"enter your account password:\t";
								    	cin>>c1.pass;
								    	if(c1.pass==a1.pass) 
								    	{
								    		c1.inventory==a1.inventory;
								    		f4.close();
								    		goto l1;//dard nachary gozashtam mire ghable break chand khat paiin tar
										}
								    	else cout<<"\nyour password was rang \nyou have"<<2-r<<" times\n";
									}
								}
								cout<<"your balance is not exist enter another one:\t";
								cin>>c1.balance;
								f4.seekg(0,ios::beg);
							}
						
					    l1:break;
					}
				}
				cout<<"do you wanna change another thing?(if not enter 'n' )\n";
				char g;
				cin>>g;
				if(g=='n') break;
		    	}
	    		
	    		ofstream f2("customers",ios::binary);
	    		f2.seekp(i*sizeof(struct customer),ios::beg);
	    		f2.write((char *)&c1,sizeof(struct customer));
	    		cout<<"\n your changes saved successfully.\n";
	    		f2.close();
	    		return 1;
	    		
			}
		
		}
	    
	}
	
}
