#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<string>
#include<conio.h>
using namespace std;
/*file haie ma shamel : accounts baraie account ha
customer baraie atelaat moshtary ha
drivers baraie ranande ha
nessesary baraie atelaat digar mesle leader dar khat aval
travel-history baraie tarikhche safar ha
travels baraie safar haie alan*/

struct history   //struct history is for history of travels
{
  int number;
  char bigining[30];
  char distination[30];
  int  price; //gheimat har belit
  int date[3];//1 for year    2 for mounth      3 for day
  char sarneshinan[50][30];
  char ranande[30];
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
  
  int moaref;
  int balance;
  int pass;
  int inventory;//mojodi  
};

int main()
{
	char username[30];
	char pass[30];
	int position;
	cout<<"enter the number of your position and press enter:\n 1 leder \t 2 driver \t 3 customer \t 4 no psition \n";
	cin>>position;
	switch(position)
	{
		case 1 : {
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
		        scanf("%S",user);
		        f1.read((char *)&l1,sizeof(struct leader));
		        //////
		      //  cout<<strcmp(user,l1.username)<<endl;
		      //  printf("%s \n",l1.username);
		        //////

		        if(strcmp(user,l1.username)==1)
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		cout<<"enter your password : \t";
		        	    scanf("%s",pass);
		        	    
		          	    if(strcmp(pass,l1.password)==1)
					    {
						    cout<<"\n you log in as a leader : \t";
					        f1.close();
					        return 1;
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
		case 2:
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
		        scanf("%S",user);
		        f1.read((char *)&d1,sizeof(struct driver));
		        //////
		      // cout<<strcmp(user,d1.username)<<endl;
		       //printf("%s \n",d1.username);
		        //////

		        if(strcmp(user,d1.username)==0)
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		cout<<"enter your password : \t";
		        	    scanf("%s",pass);
		        	    
		          	    if(strcmp(pass,d1.password)==0)
					    {
						    cout<<"\n you log in as a driver : \t";
					        f1.close();
					        return 2;
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
		case 3 :
			{
				struct customer c1;
				 char user[30],pass[30];
			   	  	ifstream f1("customer", ios :: binary);
			if(!f1)
		    	{
			        cout<<"error in opening file customer in login";
			        exit(1);
		    	}
		    while(1)
			{
				
				cout<<"\n enter your username: \t";
		        scanf("%S",user);
		        f1.read((char *)&c1,sizeof(struct customer));
		        //////
		      // cout<<strcmp(user,c1.username)<<endl;
		       //printf("%s \n",c1.username);
		        //////

		        if(strcmp(user,c1.username)==0)
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		cout<<"enter your password : \t";
		        	    scanf("%s",pass);
		        	    
		          	    if(strcmp(pass,c1.password)==0)
					    {
						    cout<<"\n you log in as a driver : \t";
					        f1.close();
					        return 3;
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
	    case 4 : {
	    	cout<<"you are log\n ";
			break;
		}
	
	}
}