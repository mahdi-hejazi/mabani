#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
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
void edit-karbar()
{
	ifstream f1("customer",ios :: binary);
    if (!f1)
     {
    	cout<<"error in opening customer file";
    	exit(1);
     }
  
}
void sign-up()
{
	
}
int log-in()
{
	char username[30];
	char pass[30];
	int position;
	cout<<"enter the number of your position and press enter:\n 1 leder \t 2 driver \t 3 customer \t 4 no psition \n;
	cin>>positin;
	switch(psition)
	{
		case 1 {
			struct leader l1;
			char user[30],pass[30];
			ifstream f1("nessesary", ios :: binary);
			if(!f1)
		    	{
			        cout<<"error in opening file nessesary in log-in";
			        exit(1);
		    	}
		    while(1)
			{
				
				cout<<"enter your username: \t";
		        scanf("%S",user);
		        f1.read((char *)l1,sizeof(struct leader));
		        if(strcmp(user,l1.username))
		        {
		        	for(int i=0;i<3;i++)
		        	{
		        		scanf<<"enter your password : \t";
		        	    scanf("%s",pass);
		          	    if(strcmp(pass,l1.pass))
					    {
						    cout<<"\n you log in as a leader : \t"
					        f1.close();
					    }
					    else
					    {
					    	cout<<"\n your password is false \n try again \n";
					    	
						}
					}
					cout<<"you tried several time";
					exit(0);
		        	
				}
				else
				{
					cout << " your user name is false. \n do you want to enter another one?(y/n)";
					char s;
					cin >> s;
					if(s==y || s==Y) continue;
					if(s==n || s==N) 
					{
						cout<< "good buy";
						exit(0);
					}
				}
			}	
	       
		    
			   }
		case 2
			   {
			   	   	
			   }
	
	}
}
int main()
{
	struct customer[10000];//hadaksar 100000 moshtary darim be andaze hesab ha
    
    ifstream f2("accounts.txt");
    if(!f2)
     {
    	cout<<"error in opening account file";
    	exit(1);
     }
  
  
  
  
}
