#include "login.h"
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<math.h>
#include<windows.h>
#include<iomanip>
#include<conio.h>
#include<ctime>
 //header ke ma tarif kardim shamel tabeie login() baraie logi shodan
    //stuct haie ma dar header login.h tarif shodand
using namespace std;
/*file haie ma shamel : accounts baraie account ha
customers baraie atelaat moshtary ha
drivers baraie ranande ha
nessesary baraie atelaat digar mesle leader dar khat aval
travel-history baraie tarikhche safar ha
travels baraie safar haie alan*/
int driversazi();
int editleader(struct leader);
void showtravelsforleader();
void showtrakonesh(int account);
void safarrafte();
void canceltravelkoli(history);
int editaccount(int  ,int );
void cancelblit(int ,customer);
void cutomerpannel(struct customer);
void safargiricustomer(customer);
void safargiriadi();
void tayinsafarranande(struct driver);
void showtravelsfordriver(driver );
int editdriver(driver);
int editkarbar(customer);////niaz be viraiesh dare
int modirpanel();
int signin();
void takhirtravel();
void driverpannel(driver);
void cutomer (struct customer);


struct leader l;
struct driver d;
struct customer c;
/////////////////////////////////////

void hi();
void hi()
{
	system("color 3A");
	Sleep(100);
	cout<<"\t\t$$$$$$         $$$$$$       $$$$$$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$$$$$$$$$$$$$$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$$$$$$$$$$$$$$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t $$$$           $$$$          $$$$$"<<endl;
	cout<<"\t\t$$$$$$         $$$$$$       $$$$$$$$$"<<endl;
	cout<<"\n\n\n\n\n\nMAKING BY MAHDI AND HOSSEIN\n\nenter on thing to start"<<endl;
	char a;
	cin>>a;
	system("color 7A");
	system("cls");
}
void bus();
void bus()
{
		system("color 3B");
	cout <<endl;

	for (int i=0;i<40;i++)
	{
		system("cls");	
		for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@    @@@@@    @@@@@    @@@@@    @@@@@@    @@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@    @@@@@    @@@@@    @@@@@    @@@@@@    @@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@D"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@/   \\@@@@@@@@@@@@@@@@@@@@@@@@@@@@/   \\@@@@@@@@"<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"@@@@@@@@\    /@@@@@@@@@@@@@@@@@@@@@@@@@@@@\    /@@@@@@@@"<<endl;   
for(int j=i;j>0;j--) cout<<"  ";
     Sleep(20)	;
	}
}
void bye();
void bye()
{   system("color 3B");
cout<<"\n\n";
	cout<<"          BBBBBBBBB                             YYYYYYYYYYY         YYYYYYYYY            EEEEEEEEEEEEEEEEEEEEEEEEE                                                      "<<endl;
	cout<<"           BBBBBBBBBBBBBBBBBBBB                   YYYYYYYYY         YYYYYYYY             EEEEEEEEEEEEEEEEEEEEEEEEEE                                "<<endl;
	cout<<"           BBBBBBBBBBBBBBBBBBBBBBB                  YYYYYYY         YYYYYY               EEEEEE                   EE                   "<<endl;
	cout<<"           BBBBBBBBBBBBBBBBBBBBBBBB                  YYYYYY        YYYYYY                EEEEE                    E                  "<<endl;
	cout<<"           BBBBBB   BBB    BBBBBBBBB                   YYYYY      YYYYY                  EEEEE                                        "<<endl;
	cout<<"           BBBBB            BBBBBBBBB                    YYYY    YYYY                    EEEEE                                        "<<endl;
	cout<<"           BBBBBB          BBBBBBBBB                       YYYYYYY                       EEEEE                                  "<<endl;
	cout<<"           BBBBBBB        BBBBBBBBB                          YYYY                        EEEEE                   E                "<<endl;
	cout<<"           BBBBBBBB      BBBBBBBBB                           YYYY                        EEEEEE                  EE                 "<<endl;
	cout<<"           BBBBBBBBB   BBBBBBBBB                             YYYY                        EEEEEEEEEEEEEEEEEEEEEEEEEE                                         "<<endl;
	cout<<"           BBBBBBBBBB BBBBBBBB                               YYYY                        EEEEEEEEEEEEEEEEEEEEEEEEEE                               "<<endl;
	cout<<"           BBBBBBBBBBBBBBBBBB                                YYYY                        EEEEEE                  EE                  "<<endl;
	cout<<"           BBBBBB   BBB   BBBBBB                            YYYYYY                       EEEEE                   E                 "<<endl;
	cout<<"           BBBBB           BBBBBBB                         YYYYYYYY                      EEEEE                               "<<endl;
	cout<<"           BBBBBB         BBBBBBBBBB                      YYYYYYYYYY                     EEEEE                                  "<<endl;
	cout<<"           BBBBBBB       BBBBBBBBBBBBB                   YYYYYYYYYYYY                    EEEEE                                   "<<endl;
	cout<<"           BBBBBBBB     BBBBBBBBBBBBBBB                 YYYYYYYYYYYYYY                   EEEEE                                    "<<endl;
	cout<<"           BBBBBBBBB   BBBBBBBBBBBBBBBB                YYYYYYYYYYYYYYYY                  EEEEE                    E                     "<<endl;
	cout<<"           BBBBBBBBBB BBBBBBBBBBBBBBBB                YYYYYYYYYYYYYYYYYY                 EEEEE                   EE                        "<<endl;
	cout<<"           BBBBBBBBBBBBBBBBBBBBBBBBBB                YYYYYYYYYYYYYYYYYYYY                EEEEEEEEEEEEEEEEEEEEEEEEEE                                      "<<endl;
	cout<<"          BBBBBBBBB                                 YYYYYYYYYYYYYYYYYYYYYY               EEEEEEEEEEEEEEEEEEEEEEEEE                          "<<endl;
	


}
void plane();
void plane()
{
	system("color 3B");
	cout<<"\n\n\n";
	for(int i=0;i<45;i++)
	{   system("cls");
	for(int j=25-i;j>0;j--) cout<<"\n";
	for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                       0 0 0                          "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                      0xxxxxx0                                "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                       0xxxxxx0                                "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                        0xxxxxxx0                               "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                         0xxxxxxx0                                 "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                         0xxxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                           0xxxxxxx0                                          "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"         0000                               000000000     v0000000                     "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"       00000000000000000000000000000000000000000000000000000000000000                  "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"      $$$$$$$$$  $$$$$$$  $$$$$$$  $$$$$$  $$$$$$$  $$$$$$  $$$  $$0000             "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"     0$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$000000             "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"      $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$000000000         "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"       000000000000000000000000000000000000000000000000000000000000000000    "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"          00000         00000000000000000  00000000000 0000000000000                              "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                            0xxxxxxxx0                          "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                           0xxxxxxxx0                                    "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                          0xxxxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                         0xxxxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                        0xxxxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                       0xxxxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                      0xxxxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                      0xxxxxx0                                        "<<endl;
 for(int j=i;j>0;j--) cout<<" ";
 cout<<"                                       0 0 0                                        "<<endl;
 Sleep(10);
 }
}

void train();
void train()
{
	for(int i=0;i<15;i++)
{
system("cls");
char ch=176+i%3;
cout<<"\n\n";
for(int j=i;j>0;j--) cout<<"  ";
cout<<"                                                                                      "<<ch<<ch<<ch<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"                                                                                      "<<ch<<ch<<ch<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"QQQQQQQQQQQQQQQ     QQQQQQQQQQQQQQQ    QQQQQQQQQQQQQQQ     QQQQQQQQQQQQQQQ            / \\             "<<endl;
for(int j=i;j>0;j--) cout<<"  "; 
cout<<"QQQQQQQQQQQQQQQ     QQQQQQQQQQQQQQQ    QQQQQQQQQQQQQQQ     QQQQQQQQQQQQQQQ            | |             "<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"QQQ  QQQQQ  QQQ     QQQ  QQQQQ  QQQ    QQQ  QQQQQ  QQQ     QQQ  QQQQQ  QQQ       0000000000         "<<endl; 
for(int j=i;j>0;j--) cout<<"  ";
cout<<"QQQ  QQQQQ  QQQ     QQQ  QQQQQ  QQQ    QQQ  QQQQQ  QQQ     QQQ  QQQQQ  QQQ       0000000000         "<<endl;
for(int j=i;j>0;j--) cout<<"  "; 
cout<<"QQQQQQQQQQQQQQQ=====QQQQQQQQQQQQQQQ====QQQQQQQQQQQQQQQ=====QQQQQQQQQQQQQQQ=======0000000000D       "<<endl;
for(int j=i;j>0;j--) cout<<"  "; 
cout<<"QQQQQQQQQQQQQQQ=====QQQQQQQQQQQQQQQ====QQQQQQQQQQQQQQQ=====QQQQQQQQQQQQQQQ=======0000000000D       "<<endl;
for(int j=i;j>0;j--) cout<<"  "; 
cout<<"QQQQQQQQQQQQQQQ     QQQQQQQQQQQQQQQ    QQQQQQQQQQQQQQQ     QQQQQQQQQQQQQQQ        000 000         "<<endl;
for(int j=i;j>0;j--) cout<<"  ";
cout<<"QQQ  QQQQQ  QQQ     QQQ  QQQQQ  QQQ    QQQ  QQQQQ  QQQ     QQQ  QQQQQ  QQQ        000 000         "<<endl;

Sleep(100);
}
}


//////////////////////////////////////////////////////*/
void showtravelforcustomer(struct customer c1)
{
	ifstream f1("safar",ios::binary);
	if(!f1) cout<<"error in openning safar in show travel for customer\n";
	struct history h1;
	system("color 0A");
	while(f1.read((char*)&h1,sizeof(struct history))!=NULL)
	{
		for(int i=0;;i++)
		{
			if(h1.account[i]==0) break;
			if(h1.account[i]==c1.balance)
			{
				if(h1.vasile==1) cout<<"bus:\t";
				if(h1.vasile==2) cout<<"train:\t";
				if(h1.vasile==3) cout<<"plane:\t";
				printf("number:%d\taz %d\tbe %d\tbagheimat %d\t  date:%d/%d/%d\ttime%d:%d\n",h1.number,h1.bigining,h1.distination,h1.price,h1.date[0],h1.date[1],h1.date[2],h1.time[0],h1.time[1]);
				break;
			}
		}
	}
	f1.close();
}

void takhirtravel(int number)
{
	struct history h1;
	fstream f1("safar",ios::binary|ios::in|ios::out|ios::ate);
	if(!f1) cout<<"error in opening safar in takhitravel\n";
	f1.seekg(0,ios::beg);
	while(f1.read((char*) &h1,sizeof(struct history))!=NULL)
	{
		if(h1.number==number)
		{
			cout<<"\nenter your new year:\t";
			cin>>h1.date[0];
			cout<<"\nenter your new month:\t";
			cin>>h1.date[1];
			cout<<"\nenter your new day:\t";
			cin>>h1.date[2];
			cout<<"\nenter your new hour:\t";
			cin>>h1.time[0];
			cout<<"\nenter your new minitue:\t";
			cin>>h1.time[1];
			int andaze=f1.tellg();
			f1.seekp(andaze-sizeof(struct history),ios::beg);
			f1.write((char*)&h1,sizeof(struct history));
			cout<<"your changs saved successfully.\n";
			break;
		}
	}
	f1.close();
}
int driversazi()
{
	system("cls");
		cout <<"********************************************************************************************************************* \n";
	struct driver d1,d2;//d1 for karbar   d2 for file
	cout<<"enter username of your driver :\t";
	scanf("%s",d1.username);
		cout <<"\n********************************************************************************************************************* \n";
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
			cout<<"your user name is used befor.\nplease enter another user name:\t";
			scanf("%s",d1.username);
				cout <<"********************************************************************************************************************* \n";
			f3.seekg(0,ios :: beg);
		}
		
	}
	f3.close();
	cout<<"enter name of driver:\t";
	scanf("%s",d1.name);
		cout <<"\n********************************************************************************************************************* \n";
	cout<<"enter namefamily of driver:\t";
	scanf("%s",d1.family);
		cout <<"\n********************************************************************************************************************* \n";
	cout<<"enter phone number of driver:\t";
	scanf("%s",d1.phone);
		cout <<"\n********************************************************************************************************************* \n";
	cout<<"enter pasword of driver :\t";
	scanf("%s",d1.password);
		cout <<"\n********************************************************************************************************************* \n";
	cout<<"enter the number of your vaicle?(1:bus 2:train 3:plane)\n";
	cin>>d1.vasile;
		cout <<"\n********************************************************************************************************************* \n";
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
	 				ofstream f2("drivers",ios :: binary | ios :: app);
                   	if(!f2)
                       	{
	                  	cout<<"error in opening a file for drivers\n";
	                	exit(1);
                       	}
                  	
                       	f2.write((char *)&d1,sizeof(struct driver));
                       	f2.close();
                       	f1.close();
               			system("cls");
	                   	cout <<"\n********************************************************************************************************************* \n";
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
int editleader(struct leader l1)//for editing boss
{
	while(1)
	{
		system("cls");
				cout <<"********************************************************************************************************************* \n";
		cout <<"do you wanna edit which of these information?(enter the number)\n1:username\t2:password\t3:account number:\n";
		int a;
		cin>>a;
		system("cls");
		switch(a)
		{
			case 1:{
				cout<<"\nyour new user name:\t";
             	scanf("%s",l1.username);
				break;
			}
			case 2:{
				cout<<"\nyour new password:\t";
            	scanf("%s",l1.password);
				break;
			}
			case 3:{
				struct account a,b;//a baraie file va b baraie karbar va moghaiese in do
                ifstream f1("accounts", ios :: binary);
            	if(! f1)
           	    {
	               cout<<"error in opening accounts binary file";
	               exit(1);
	            }
	            while(1)
	            {
	            	cout<<"enter your new account :\t";
	                cin>>b.balance;
	                f1.seekg(0,ios::beg);
	                int k=0;
                    while(!f1.eof())
	                {
	 	               f1.read((char *)&a,sizeof(struct account));
	 	               if(a.balance == b.balance)
	 	               { k++;
                          for(int i=0;i<3;i++)
	 		              {
	 		            	cout<<"\n enter your password:\t";
	 			            cin>>b.pass;
	 		            	if(b.pass == a.pass)
	 		               	{
	 		               	    l1.balance=a.balance;
	 			             	l1.pass=a.pass;
	 			            	cout<<"\nyour pass was right\n";
	 			                break;
							}
				            else 
				            {
				            	if(i<3)
				            	{
				            		cout<<"your pass was rang!you have"<<2-i<<"times.\n";	
								}
							}
			               }
                        }if (k==1)break;
	                }
				    cout<<"do you wanna countinue?(y/n)\t";
				    char ch;
				    cin>>ch;
				    if (ch=='n'|| ch=='N') break;
				    
	    	    }
	    	    f1.close();
				break;
			}
	    }
		ofstream f2("nessesary",ios :: binary);
        if(!f2)
       	{
	        cout<<"error in opening a file for leader with the name nessesary\n";
	        exit(1);
        }
        f2.write((char *)&l1,sizeof(struct leader));
       	f2.close();
       	system("cls");
        cout<<"\nleader edit successfully\n";
        cout<<"do you wanna change another thing?(y/n)\t";
        char c;
        cin>>c;
        if(c=='n' || c=='N') return 1;
	}
}
void showtravelsforleader()
{
     int a; //zarfiyat avaliye har safar ke haman zarfiyat tayiniye modir ast
     int b; //zarfiyat por shode vasile
	struct gzs s12; 
	struct history h1;
	 ifstream file("safar",ios::binary);
	  ifstream f1("ghematzarfiyatsorat",ios::binary);
	  f1.read((char*)&s12,sizeof(struct gzs)); //zarfiyat avaliye safaro bara har vasile bedanim
	                if(!f1)
	                {cout<<"error in opening siyasat gheymatgozari file";
	                exit(0);
					}
		         	if (!file) 
		        	{
		         		cout<<"error in opening safar binary file";
		        		exit(0);
		        	}
		        	printf("number\tvehicle\tstart\tend\tporshode\tprice\t date\t time of start \t time of travel\n");
		        	while(1)
		       	    {  char vasile[10];
					file.read((char *)&h1,sizeof(struct history));
					if(file.eof()) break;
			    	if(h1.vasile==1)
			        {   a=s12.zarfiyat[0]; //bus
			            strcpy(vasile,"bus");
				    }
					if(h1.vasile==2)
			    	{   a=s12.zarfiyat[1]; //train
				        strcpy(vasile,"train");
				    }
					if(h1.vasile==3)
			    	{   a=s12.zarfiyat[2]; //airplane
			            strcpy(vasile,"airplane");
				    }
				    b=a-h1.capasity;
					printf("\n%d\t%s\t%d\t%d\t%d\t%d\t",h1.number,vasile,h1.bigining,h1.distination,b,h1.price);
			    	cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			        cout<<"coustomers:\n";
			        int n;
			        ifstream f9("ghematzarfiyatsorat",ios::binary);
			        if(!f9) cout<<"error gheymatzarfia.. in show sfar for driver\n";
			        struct gzs gz;
			        f9.read((char*)&gz,sizeof(struct gzs));
			        if(h1.vasile==1)
			        n=gz.zarfiyat[0];
			        if(h1.vasile==2)
			        n=gz.zarfiyat[1];
			        if(h1.vasile==3)
			        n=gz.zarfiyat[2];
			        f9.close();
			        for(int i=0;i<n;i++)
			          {  // if(strlen(h1.sarneshinan[i])==0) break;
			        	printf("%d) %s\t",i+1,h1.sarneshinan[i]);
			        	if(i%6==0)cout<<"\n";
				      }
				      cout<<endl<<endl;
				}
			        file.close();
}

void showtravelsfordriver(driver d1)
{
     int a; //zarfiyat avaliye har safar ke haman zarfiyat tayiniye modir ast
     int b; //zarfiyat por shode vasile
	struct gzs s12; 
	struct history h1;
	 ifstream file("safar",ios::binary);
	  ifstream f1("ghematzarfiyatsorat",ios::binary);
	  f1.read((char*)&s12,sizeof(struct gzs)); //zarfiyat avaliye safaro bara har vasile bedanim
	                if(!f1)
	                {cout<<"error in opening siyasat gheymatgozari file";
	                exit(0);
					}
		         	if (!file) 
		        	{
		         		cout<<"error in opening safar binary file";
		        		exit(0);
		        	}
		        	printf("number\tvehicle\tstart\tend\tporshode\tprice\t date\t time of start \t time of travel\n");
		        	while(1)
		       	    {  char vasile[10];
					file.read((char *)&h1,sizeof(struct history));
					if(file.eof()) break;
					if(h1.ranandeaccount==d1.balance)
				{
			    	if(h1.vasile==1)
			        {   a=s12.zarfiyat[0]; //bus
			            strcpy(vasile,"bus");
				    }
					if(h1.vasile==2)
			    	{   a=s12.zarfiyat[1]; //train
				        strcpy(vasile,"train");
				    }
					if(h1.vasile==3)
			    	{   a=s12.zarfiyat[2]; //airplane
			            strcpy(vasile,"airplane");
				    }
				    b=a-h1.capasity;
					printf("\n%d\t%s\t%d\t%d\t%d\t%d\t",h1.number,vasile,h1.bigining,h1.distination,b,h1.price);
			    	cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			        cout<<"coustomers:\n";
			        int n;
			        ifstream f9("ghematzarfiyatsorat",ios::binary);
			        if(!f9) cout<<"error gheymatzarfia.. in show sfar for driver\n";
			        struct gzs gz;
			        f9.read((char*)&gz,sizeof(struct gzs));
			        if(d1.vasile==1)
			        n=gz.zarfiyat[0];
			        if(d1.vasile==2)
			        n=gz.zarfiyat[1];
			        if(d1.vasile==3)
			        n=gz.zarfiyat[2];
			        f9.close();
			        for(int i=0;i<n;i++)
			          {  // if(strlen(h1.sarneshinan[i])==0) break;
			        	printf("%d) %s\t",i+1,h1.sarneshinan[i]);
			        	if(i%6==0)cout<<"\n";
				      }
				      cout<<endl<<endl;						
				}

				}
			        file.close();
}

void showtrakonesh(int account)
{
	struct tarakonesh t1;
	ifstream f1("trakonesh",ios::binary);
	system("color 2E");
	while(f1.read((char*)&t1,sizeof(tarakonesh))!=NULL)
	{
		if(t1.account==account)
		  cout<<"mablagh: "<<t1.andaze<<"\t"<<t1.date[0]<<"/"<<t1.date[1]<<"/"<<t1.date[3]<<"\t"<<t1.time[0]<<":"<<t1.time[1]<<endl;
	}
	system("color 0A");
	f1.close();
}

void safarrafte()//sefr kardan number safar haie rafete shode
{
	struct history h1;
	fstream f1("history",ios::binary|ios::in|ios::out|ios::ate);
	if(!f1) 
	{
	cout<<"error in opening history in safarrafte"<<endl;
	return ;	
	}
	f1.seekg(0,ios::beg);
	time_t now = time(0);
	// cout << "Number of sec since January 1,1900:" << now << endl;
	tm *ltm = localtime(&now);
	while(f1.read((char*)&h1,sizeof(struct history))!=NULL)
	{
		if(h1.date[0]<=(1900 + ltm->tm_year))
		  {
		  	if(h1.date[0]<(1900 + ltm->tm_year))
		  	        {
		             	h1.number==-1;
		             	int a=f1.tellg();
		             	f1.seekp(a-sizeof(struct history),ios::beg);
		             	f1.write((char*)&h1,sizeof(struct history));
					 }
		    if(h1.date[1]<=(1+ ltm->tm_mon))
		     {
		     	if(h1.date[1]<(1+ltm->tm_mon))
		     	{
		             	h1.number==-1;
		             	int a=f1.tellg();
		             	f1.seekp(a-sizeof(struct history),ios::beg);
		             	f1.write((char*)&h1,sizeof(struct history));
					 }
		     	if(h1.date[2]<=(ltm->tm_mday))
		        {
		        	if(h1.date[2]<(ltm->tm_mday))
		        	{
		             	h1.number==-1;
		             	int a=f1.tellg();
		             	f1.seekp(a-sizeof(struct history),ios::beg);
		             	f1.write((char*)&h1,sizeof(struct history));
					 }
		        	if(h1.time[0]<=(ltm->tm_hour))
		          {
		          	if(h1.time[0]<( ltm->tm_hour))
		          	{
		             	h1.number==-1;
		             	int a=f1.tellg();
		             	f1.seekp(a-sizeof(struct history),ios::beg);
		             	f1.write((char*)&h1,sizeof(struct history));
					 }
		          	if(h1.time[1]<( ltm->tm_min))
		             {
		             	h1.number==-1;
		             	int a=f1.tellg();
		             	f1.seekp(a-sizeof(struct history),ios::beg);
		             	f1.write((char*)&h1,sizeof(struct history));
					 }
				  }
				}
	    	}
	}
	
}
f1.close();
}
void canceltravelkoli(history h1)
{
	for(int i=0;;i++)
	{
		if(h1.account[i]!=0)
		{
			int a=editaccount(h1.account[i],h1.price);
		}
		else
		{
			if (i==0)break;
			int a=editaccount(h1.ranandeaccount,-h1.price*i*90/100);
			ifstream f1("nessesary",ios::binary);
			struct leader l1;
			f1.read((char*)&l1,sizeof(struct leader));
			int b=editaccount(l1.balance,-(h1.price*i*10/100));
			f1.close();
			break;
		}
	}
	
	fstream f2("safar",ios::binary|ios::in|ios::out|ios::ate);
	if(!f2) cout<<"error in opening safar in cancel travel koli";
	f2.seekg(0,ios::beg);
	struct history h2;
	while(f2.read((char*)&h2,sizeof(struct history))!=NULL)
	{
		if(h2.number==h1.number)
		{
			h2.number=0;
			cout<<"canceling was sucessfull"<<endl;
			int a=f2.tellg();
			f2.seekp(a-sizeof(struct history),ios::beg);
			f2.write((char*)&h2,sizeof(struct history));
			f2.close();
		}
	}
	
}

int editaccount(int account ,int mablagh)//baraie kam va ziad kardan az ie hesab
{
	struct account a1;
	if(mablagh==0)return 1;
	fstream f1("accounts",ios::binary|ios::in|ios::out|ios::ate);
	if(!f1)
	{
		cout<<"error in opening accounts in editaccount"<<endl;
		return 0;
	}
	f1.seekg(0,ios::beg);
	while(f1.read((char *)&a1,sizeof(struct account))!=NULL)
	{
		if(account==a1.balance)
		{
			if(a1.inventory<mablagh)
			{
				cout<<"\nyour inventory is not enough\n";
				return 0;//amal anjam nashode
			}
			else 
			{
				a1.inventory += mablagh;
				int w=f1.tellg();
				f1.seekp(w-sizeof(struct account),ios::beg);
				f1.write((char *)&a1,sizeof(struct account));
				f1.close();
				ofstream f2("trakonesh",ios::binary|ios::app);
				if(!f2) 
				{
				cout<<"no trakonesh file";
				exit(0);
			    }
				struct tarakonesh tr1;
				tr1.account=a1.balance;
				tr1.pass=a1.pass;
				tr1.andaze=mablagh;
				time_t now = time(0);
                //cout << "Number of sec since January 1,1970:" << now << endl;
                tm *ltm = localtime(&now);
                tr1.date[0]=1900 + ltm->tm_year;
                tr1.date[1]=1 + ltm->tm_mon;
                tr1.date[2]=ltm->tm_mday;
                tr1.time[0]= ltm->tm_hour;
                tr1.time[1]=1 + ltm->tm_min;
				f2.write((char*)&tr1,sizeof(struct tarakonesh));
				f2.close();
				return 1;
			}
		}
	}
}

void cancelblit(int number,customer c1)
{
	struct history h1;
	ifstream f1("safar",ios::binary);
	while(f1.read((char*)&h1,sizeof(struct history))!=NULL)
	{
		if(h1.number==number)
		{
			for(int i=0;;i++)
			{
				if(strcmp(h1.sarneshinan[i],c1.username)==0)
				{
					strcpy(h1.sarneshinan[i],"0000");
					h1.capasity++;
					break;
				}
			}
			for(int i=0;;i++)
			{
				if(h1.account[i]==c1.balance)
				{
					int a=editaccount(h1.account[i],h1.price*90/100);
					h1.account[i]=0;
					a=editaccount(h1.ranandeaccount,-h1.price*90/100*90/100);
					ifstream file("nessesary",ios::binary);
					if(!file) cout<<"error in opening nessesary in cancel travel"<<endl;
					struct leader l1;
					file.read((char*)&l1,sizeof(struct leader));
					a=editaccount(l1.balance,-h1.price*90/100*10/100);
					break;
				}
			}
			
		}
	}
}

void safargiricustomer(customer s1)
{
	struct history h1;//bara jostojo to fila
	int a;
	while(1)
	{
		system("cls");
		cout<<"\n enter the number:\n0:exit \t 1:list of whole travels \t 2:list of travels with bigining and distination \t 3:take travel\n";
	    cin>>a;
     	switch(a)
    	{
    		case 0:{
			return;
				break;
			}
	    	case 1:{
		        	ifstream file("safar",ios::binary);
		         	if (!file) 
		        	{
		         		cout<<"error in opening safar binary file";
		        		exit(0);
		        	}
		        	system("cls");
		        	printf(" number\tstart\tend\tcapasity   price\tdate\ttime of start\ttime of travel\n");
		        	cout<<"-------------------------------------------------------------------------------------------------";
		        	while(1)
		        	{
			    	file.read((char *)&h1,sizeof(struct history));
			    	if(file.eof()) break;
			    	if(h1.number==0 && h1.number==-1) continue;
			        if(h1.vasile==1)cout<<"\nbus: ";
			        if(h1.vasile==2)cout<<"\ntrain: ";
			       	if(h1.vasile==3)cout<<"\nplane: ";
			    	printf("%d\t%d\t %d\t %d\t  %d  \t    %d  ",h1.number,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			        }
			        file.close();
			        cout<<"\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\nif you wanna exit enter one thing";
		            char bo;
		            cin>>bo;
		            if(bo!=785465) break;
	       	}
	       	case 2:{
	       		struct history h2;
	       		while(1)
	            {
	            	system("cls");
	            	cout<<"\n***********************************************************************\nenter your biginig city:\t";
	            	cin>>h2.bigining;
	            	cout<<"\nenter your distination city:\t";
	            	cin>>h2.distination;
	            	ifstream file("safar",ios::binary);
	            	if(!file) exit(-1);
	            	printf(" number\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n------------------------------------------------------------");
	            	while(1)
	            	{
	            		file.read((char *)&h1,sizeof(struct history));
	            		if(file.eof()) break;
	            		if (h1.bigining==h2.bigining && h1.distination==h2.distination &&h1.number!=0 && h1.number!=-1)
	            		{
			        if(h1.vasile==1)cout<<"\nbus: ";
			        if(h1.vasile==2)cout<<"\ntrain: ";
			       	if(h1.vasile==3)cout<<"\nplane: ";
	            			printf("%d\t%d\t%d\t%d\t%d\t",h1.number,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	        cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
						}
					}
					file.eof();
					cout<<"\n////////////////////////////////////////////////////////////////////////////////\ndo you wanna enter another travel?(y/n)";
					char ch;
					cin>>ch;
					if (ch=='n') break;
	            	
				}
	       		
				break;
			   }
			case 3:{
				int number;
				system("cls");
				cout<<"***********************************************************\nenter the number of your travel.(if you do not know enter 0)\n";
				cin>>number;
				if (number==0)break;
				else {
					fstream f1("safar",ios::binary|ios::in|ios::out|ios::ate);
					f1.seekg(0,ios::beg);
					if(!f1) {
						cout<<"error in opening safar";
						exit(0);
					}

					while(f1.read((char*)&h1,sizeof(struct history))!=NULL)
					{
						if(h1.number==number)
						{
							if(h1.capasity==0)
			    	        {
			    	        	cout<<"the vehicle is full";
			    	        	return;
							}
			    	        
							printf(" \n number\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n");
			    	if(h1.vasile==1)cout<<"\nbus: ";
			    	if(h1.vasile==2)cout<<"\ntrain: ";
			    	if(h1.vasile==3)cout<<"\nplane: ";							
							printf("%d\t%d\t%d\t%d\t%d\t",h1.number,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	        cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			    	        cout<<"\nare you sure you wanna take this?(y/n)";
			    	        char c;
			    	        cin>>c;
			    	        if(c=='n')break;
			    	        int dor=editaccount(s1.balance,-h1.price);///////////////*********
							if (dor==0) break;//yani pol nadashte
			    	        h1.capasity--;
			    	        
			    	        
			    	        for(int i=0;;i++)
			    	        {
			    	        	if(strlen(h1.sarneshinan[i])==0)
			    	        	{
			    	        		strcpy(h1.sarneshinan[i],s1.username);
			    	        		break;
								}
							}
							for(int i=0;i<500;i++)
							{
								if(h1.account[i]==0)
								{
									h1.account[i]=s1.balance;
									break;
								}
								
							}
							int w=f1.tellg();
							f1.seekp(w-sizeof(struct history),ios::beg);
							f1.write((char*)&h1,sizeof(struct history));
							f1.close();
							struct account acc;
							/*int dor=editaccount(s1.balance,-h1.price);
							if (dor==0) break;//yani pol nadashte*/
							dor =editaccount(h1.ranandeaccount,90*h1.price/100);
							struct leader l1;
							ifstream f4("nessesary",ios::binary);
							if(!f4)
							cout<<"error in nessesary file in travel giry"<<endl;
							f4.read((char*)&l1,sizeof(struct leader));
							f4.close();
							dor=editaccount(l1.balance,10*h1.price/100);
						                	if(h1.vasile==1) bus();
						                	if(h1.vasile==2) train();
						                	if(h1.vasile==3) plane();							
							cout<<"\nyou take the travel successfully\n";
							
						}
					}
				}
				break;
			}
	         	
	    }
	}
}

void safargiriadi()
{
	struct history h1;//bara jostojo to fila
	int a;
	while(1)
	{
		system("cls");
		cout<<"\n enter the number:\n0:exit \t 1:list of whole travels \t 2:list of travels with bigining and distination \t 3:take travel\n";
	    cin>>a;
     	switch(a)
    	{
    		case 0:{return;
				break;
			}
	    	case 1:{
		        	ifstream file("safar",ios::binary);
		         	if (!file) 
		        	{
		         		cout<<"error in opening safar binary file";
		        		exit(0);
		        	}
		        	system("cls");
		        	printf(" number\tstart\tend\tcapasity   price\tdate\ttime of start\ttime of travel\n");
		        	cout<<"-------------------------------------------------------------------------------------------------";
		        	while(1)
		        	{
			    	file.read((char *)&h1,sizeof(struct history));
			    	if(file.eof()) break;
			    	if(h1.number==0 && h1.number==-1) continue;
			        if(h1.vasile==1)cout<<"\nbus: ";
			        if(h1.vasile==2)cout<<"\ntrain: ";
			       	if(h1.vasile==3)cout<<"\nplane: ";
			    	printf("%d\t%d\t %d\t  %d  \t    %d  ",h1.number,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			        }
			        file.close();
			        cout<<"\n\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\nif you wanna exit enter one thing";
		            char bo;
		            cin>>bo;
		            if(bo!=785465) break;
	       	}
	       	case 2:{
	       		struct history h2;
	       		while(1)
	            {
	            	system("cls");
	            	cout<<"\n***********************************************************************\nenter your biginig city:\t";
	            	cin>>h2.bigining;
	            	cout<<"\nenter your distination city:\t";
	            	cin>>h2.distination;
	            	ifstream file("safar",ios::binary);
	            	if(!file) exit(-1);
	            	printf("\n number\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n------------------------------------------------------------");
	            	while(1)
	            	{
	            		file.read((char *)&h1,sizeof(struct history));
	            		if(file.eof()) break;
	            		  		if (h1.bigining==h2.bigining && h1.distination==h2.distination &&h1.number!=0 && h1.number!=-1)
	            		{
	            			if(h1.vasile==1)cout<<"\nbus: ";
			            	if(h1.vasile==2)cout<<"\ntrain: ";
			            	if(h1.vasile==3)cout<<"\nplane: ";
	            			printf("%d\t%d\t%d\t%d\t%d\t%d\t",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	        cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
						}
					}
					file.eof();
					cout<<"\n////////////////////////////////////////////////////////////////////////////////\ndo you wanna enter another travel?(y/n)";
					char ch;
					cin>>ch;
					if (ch=='n') break;
	            	
				}
	       		
				break;
			   }
			case 3:{
				int number;
				system("cls");
				cout<<"***********************************************************\nenter the number of your travel.(if you do not know enter 0)\n";
				cin>>number;
				if (number==0)break;
				else {
					fstream f1("safar",ios::binary|ios::in|ios::out|ios::ate);
					f1.seekg(0,ios::beg);
					if(!f1) {
						cout<<"error in opening safar";
						exit(0);
					}

					while(f1.read((char*)&h1,sizeof(struct history))!=NULL)
					{
						if(h1.number==number)
						{
							if(h1.capasity==0)
			    	        {
			    	        	cout<<"the vehicle is full";
			    	        	return;
							}
			    	        
							printf("number\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n");
						   if(h1.vasile==1)cout<<"\nbus: ";
			               if(h1.vasile==2)cout<<"\ntrain: ";
			            	if(h1.vasile==3)cout<<"\nplane: ";
							printf("%d\t%d\t%d\t%d\t%d\t",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	        cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			    	        cout<<"\nare you sure you wanna take this?(y/n)";
			    	        char c;
			    	        cin>>c;
			    	        if(c=='n')break;
			    	        int accont1;
			    	        for(int i=0;1;i++)
			    	        {
			    	        		
			    	        	if(strlen(h1.sarneshinan[i])!=0)
	                              continue;
	                              
	                            int account1;
	                            system("cls");
	                            cout<<"please enter your accunt(for exit enter 0):\t";
	                            cin>>account1;
	                            if(account1==0)return ;
	                            ifstream file("accounts",ios::binary);
	                            if(!file)
	                            {
	                            	cout<<"error in opening account in safargiri adi";
	                            	return;
								}
								struct account c4;
	                            while(file.read((char*)&c4,sizeof(c4))!=NULL)
	                            {
	                            	if(c4.balance==account1)
	                            	{
	                            		
	                            		
	                            		
	                            		for(int i=0;i<3;i++)
	                            		{
										cout<<"\nenter your account password(for exit enter 0):\t";
	                            		int pass;
										cin>>pass;
										if(pass==0)return;
										
										if(pass==c4.pass)
										{
										    char username[30];
	                                        int dor;
											dor=editaccount(c4.balance,-h1.price);
	                                        if(dor==0)
	                                        {
	                                        	return;
											}
	                                        for(int f=0,account2=account1;account2!=0;f++)//tabdil int account be char username
	                                         {
	                                         	username[f]=account2%10+48;
	                                         	account2/=10;
							              	}
							              	char temp;
							            	for(int f=strlen(username)-1;f>0;f-=2)
								            {
								            	temp=username[f];
								             	username[f]=username[strlen(username)-1-f];
								            	username[strlen(username)-1-f]=temp;
							              	}
							                h1.capasity--;
			    	                    	strcpy(h1.sarneshinan[i],username);
			    	                    	for(int r=0;;r++)
			    	                    	{
			    	                    		if(h1.account[r]==0)
			    	                    		{
			    	                    			h1.account[r]=account1;
			    	                    			break;
												}
											}
											int c=f1.tellg();
											
										
							
                      	                   f1.seekp(c-sizeof(struct history),ios::beg);
						                   f1.write((char*)&h1,sizeof(struct history));
						                	f1.close();
						                	struct account acc;
						                	
						                 	dor =editaccount(h1.ranandeaccount,90*h1.price/100);
							               struct leader l1;
						                	ifstream f4("nessesary",ios::binary);
						                	if(!f4)
						                      	cout<<"error in nessesary file in travel giry"<<endl;
						                	f4.read((char*)&l1,sizeof(struct leader));
						                	f4.close();
						                	dor=editaccount(l1.balance,10*h1.price/100);
						                	if(h1.vasile==1) bus();
						                	if(h1.vasile==2) train();
						                	if(h1.vasile==3) plane();
						                  	cout<<"\nyou take the travel successfully\n";	
						                  	cout<<"enter one characture to contininue\t";
						                  	char gh;
						                  	cin >>gh;
						                	goto l1;//////////15 khat paeen										
										}	
										}
									}
								}
								cout<<"your accoun number not exist do you wanna  enter another one?(y/n).\n";
								char g;
								cin>>g;
                                if(g=='n')break;
							}
							
							
						}
					}
				}
				 l1:break;
			}
	         	
	    }
	}
}

void tayinsafarranande(struct driver d1)
{
	system("cls");
	int o;
	o=d1.vasile;
	struct gzs dd;//khandan az file geymat zarfiyat sorat
	int a, b; //do motoghayer baraye rahat shodan car ce shomare ye do shahr ra darand
	int distance; //fasele do shahr
	struct history safar; //safaro begirim mezarim dakhel file
	struct history sa; //safar akharo bara adad bara file
	cout << "My friend enter the start city:\t";
	cin >> safar.bigining;
	a=safar.bigining;
	cout << "My friend enter the end city:\t";
	cin >> safar.distination;
	b=safar.distination;
	ifstream fp("cities.txt");
	if (!fp)
	{
		cout << "error of file (cities)";
		exit(0);
	}
	int index[300]; //shomare shahr
	int x[300];
	int y[300];
	for (int i = 0; i<300; i++)
	{
		fp >> index[i] >> x[i] >> y[i];
	}
	
	distance = (int)sqrt(pow(y[b - 1] - y[a - 1], 2) + pow(x[b - 1] - x[a - 1], 2));
	fp.close();
	ifstream f1("ghematzarfiyatsorat", ios::binary);
	
	if (!f1)
	{
		cout << "error can not open ghematgozarifile\n";
		exit(0);
	}
	f1.read((char*)&dd, sizeof(struct gzs));
	f1.close();
	ifstream f2("safar", ios::binary);
	if (!f2)
	{
		cout << "can not open file safar\n";
		exit(0);
	}
		f2.seekg(-1*sizeof(struct history), ios::end);
		f2.read((char*)&sa, sizeof(struct history));
		safar.number = sa.number + 1;
	    f2.close();
	if (o == 1)
		safar.price = distance*(dd.zaribgheymat[0]);
	if (o == 2)
		safar.price = distance*(dd.zaribgheymat[1]);
	if (o == 3)
		safar.price = distance*(dd.zaribgheymat[2]);
	cout << "-------------------------------------------------------- \n";
	cout << "Enter the year of travel:\t";
	cin >> safar.date[0];
	cout << "Enter the mounth of travel:\t";
	cin >> safar.date[1];
	cout << "Enter the day of travel:\t";
	cin >> safar.date[2];

	if (o == 1)
		safar.capasity = dd.zarfiyat[0];
	if (o == 2)
		safar.capasity = dd.zarfiyat[1];
	if (o == 3)
		safar.capasity = dd.zarfiyat[2];
	cout << "Enter hour of start:\t";
	cin >> safar.time[0];
	cout << "Enter minutes of start:\t";
	cin >> safar.time[1];

	if (o == 1)
	{
		safar.capasity=dd.zarfiyat[0];
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = ((distance % dd.sorat[0])*60)/dd.sorat[0];
	}
	if (o == 2)
	{
		safar.capasity=dd.zarfiyat[1];
		safar.traveltime[0] = distance / dd.sorat[1];
		safar.traveltime[1] = ((distance % dd.sorat[1])*60)/dd.sorat[1];
	}
	if (o == 3)
	{
		safar.capasity=dd.zarfiyat[2];
		safar.traveltime[0] = distance / dd.sorat[2];
		safar.traveltime[1] = ((distance % dd.sorat[2])*60)/dd.sorat[2];
	}
	strcpy(safar.ranande,d1.username);
	safar.ranandeaccount=d1.balance;
	safar.vasile=d1.vasile;
	ofstream f3("safar", ios::binary | ios::app);
	if (!f3)
	{
		cout << "can not open safar file";
		exit(0);
	}
	f3.write((char*)&safar, sizeof(struct history));
	f3.close();
	return ;
}

int editdriver(driver d2)
{
	struct driver d1;
	fstream f1("drivers",ios::binary|ios::in|ios::out|ios::ate);
	f1.seekg(0,ios::beg);
	while(1)
    {
    	int i;
    	system("cls");
        /*printf("enter your old user name:\t");
	    scanf("%s",c2.username);*/
	    for( i=0;f1.read((char *)&d1,sizeof(struct driver))!=NULL;i++) //i baraie shomaresh ke chandomin stuct file baraie karbar ast
	    {
	    	
	    	if(strcmp(d1.username,d2.username)==0)
	    	{
	    		//f1.close();
	    		while(1)
	    		{
	    		system("cls");
				cout<<"\nwhich information you wanna change? enter the number\n";
	    		cout<<"1.name  2.family  3.username  4.password  5.phone_number  6.balance   7.vasile\n";
	    		int b;
	    		cin>>b;
	    		switch(b)
	    		{
	    			case 1:{
	    				cout<<"enter your new name:\t";
	    				scanf("%s",d1.name);
						break;
					}
					case 2:{
						cout<<"enter your new family:\t";
						scanf("%s",d1.family);
						break;
					}
	    			case 3:{
	    				cout<<"enter your new username:\t";
	    				scanf("%s",d1.username);
	    				ifstream f3("customers",ios :: binary);
	
	                	if(!f3)
                       	 {
	                       cout<<"error in opening customer binary file";
	                       exit(1);
	                     }
	                     struct customer d3;
                    	while(f3.read((char *)&d3, sizeof(struct driver))!=NULL)
                        	{
	                        	
	                        	if(strcmp(d1.username,d3.username)==0)
	                            	{
		                            	cout<<"\n your user name is used befor.\nplease enter another user name:\t";
		                             	scanf("%s",d1.username);
		                            	f3.seekg(0,ios :: beg);
	                            	}
		
                          	}
                    	f3.close();
						break;
					}
					case 4:{
						cout<<"enter your new password:\t";
						scanf("%s",d1.password);
						break;
					}
					case 5:{
						cout<<"enter your new phone_number:\t";
						scanf("%s",d1.phone);
						break;
					}
					case 6:{
						ifstream f4("accounts",ios::binary);
						struct account a1;
					
                        while(1)
							{
								int f=0;
								cout<<"enter your new account:\t";
								cin>>d1.balance;
							while(f4.read((char *)&a1,sizeof(struct account))!=NULL)
							{
								
								if(a1.balance==d1.balance)
								{
									for(int r=0;r<3;r++)
									{
										cout<<"enter your account password:\t";
								    	cin>>d1.pass;
								    	if(d1.pass==a1.pass) 
								    	{
								    		
								    		f4.close();
								    		f=1;
								    		break;//dard nachary gozashtam mire ghable break chand khat paiin tar
										}
								    	else cout<<"\nyour password was rang \nyou have"<<2-r<<" times\n";
									}
								}
								
								
								
							}
							if(f==1) break;
					cout<<"your balance is not exist enter another one:\t";
					cin>>d1.balance;							
					f4.seekg(0,ios::beg);
					char cha;
					cout<<"do you want to exit?(y/n)\t ";
					cin>>cha;
					if(cha=='n') break;
					
					}
					    break;
					}
				case 7:{
					cout<<"enter the number of your vehicle.\n1:bus\t2:tran\t3:plane\n";
					int vasile;
					cin >>vasile;
					d1.vasile=vasile;
					break;
				}
				}
				cout<<"do you wanna change another thing?(if not enter 'n' )\n";
				char g;
				cin>>g;
				if(g=='n') break;
		    	}
	    	
	    		/*ofstream f2("customers",ios::binary | ios::out|ios::ate);
	    		f2.seekp(i*sizeof(struct customer),ios::beg);
	    		f2.write((char *)&c1,sizeof(struct customer));*/
	    		//f1.seekp(i*sizeof(struct customer),ios::beg);
	    		int c=f1.tellg();
	    		f1.seekp(c-sizeof(struct driver),ios::beg);
	    		f1.write((char *)&d1,sizeof(struct customer));
	    		cout<<"\n your changes saved successfully.\n";
	    		f1.close();
	    		return 1;
	    		
			}
		
		}
	    
	}
	
}

int editkarbar(customer c2)////niaz be viraiesh dare
{
	system("cls");
	struct customer c1;//c1 for file
	fstream f1("customers",ios::binary|ios::in|ios::out|ios::ate);
	f1.seekg(0,ios::beg);
    while(1)
    {
    	int i;
    	system("cls");
        /*printf("enter your old user name:\t");
	    scanf("%s",c2.username);*/
	    for( i=0;f1.read((char *)&c1,sizeof(struct customer))!=NULL;i++) //i baraie shomaresh ke chandomin stuct file baraie karbar ast
	    {
	    	
	    	if(strcmp(c1.username,c2.username)==0)
	    	{
	    		//f1.close();
	    		while(1)
	    		{
	    		system("cls");
				cout<<"\nwhich information you wanna change? enter the number\n";
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
	    				scanf("%s",c1.username);
	    				ifstream f3("customers",ios :: binary);
	
	                	if(!f3)
                       	 {
	                       cout<<"error in opening customer binary file";
	                       exit(1);
	                     }
	                     struct customer c3;
                    	while(f3.read((char *)&c3, sizeof(struct customer))!=NULL)
                        	{
	                        	
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
							while(1)
							{
								int f=0;
							while(f4.read((char *)&a1,sizeof(struct account))!=NULL)
							{
								
								if(a1.balance==c1.balance)
								{
									for(int r=0;r<3;r++)
									{
										cout<<"enter your account password:\t";
								    	cin>>c1.pass;
								    	if(c1.pass==a1.pass) 
								    	{
								    		
								    		f4.close();
								    		f=1;
								    		break;//dard nachary gozashtam mire ghable break chand khat paiin tar
										}
								    	else cout<<"\nyour password was rang \nyou have"<<2-r<<" times\n";
									}
								}
								
								
								
							}
							if(f==1) break;
					cout<<"your balance is not exist enter another one:\t";
					cin>>c1.balance;							
					f4.seekg(0,ios::beg);
					char cha;
					cout<<"do you want to exit?(y/n)\t ";
					cin>>cha;
					if(cha=='n') break;
					
					}

					}
				}
				cout<<"do you wanna change another thing?(if not enter 'n' )\n";
				char g;
				cin>>g;
				if(g=='n') break;
		    	}
	    	
	    		/*ofstream f2("customers",ios::binary | ios::out|ios::ate);
	    		f2.seekp(i*sizeof(struct customer),ios::beg);
	    		f2.write((char *)&c1,sizeof(struct customer));*/
	    		//f1.seekp(i*sizeof(struct customer),ios::beg);
	    
	    		int c=f1.tellg();
	    		f1.seekp(c-sizeof(struct customer),ios::beg);
	    		f1.write((char *)&c1,sizeof(struct customer));
	    		cout<<"\n your changes saved successfully.\n";
	    		f1.close();
	    		return 1;
	    		
			}
		
		}
	    
	}
	
}

int modirpanel()
{ 
cout<<"Hello admin  +_+\n" ;
 while(1)
 
{
 gzs s,p; //yeki begire=p yeki bara taghyir=s
    int a; //entekhab adad tavasot modir
    system( "color 0C" );
	cout <<"********************************************************************************************************************* \n";
	cout<<"What do you want to do?\n";
	cout<<"1.Pricing of treavel and Determine the capacity and Determine the speed\n";
	cout<<"2.View drivers information\n";
    cout<<"3.View customer information\n";
    cout<<"4.see travels\n";
    cout<<"5.Driver registration\n";
    cout<<"6.edit your accunt\n";
    cout<<"7.taraconeshha\n";
    cout<<"8.canccel travel\n";
    cout<<"9.exit admin";
	cout <<"\n********************************************************************************************************************* \n";
	cout<<"Enter number:\t";
	cin>>a;
	cout <<"********************************************************************************************************************* \n";
if(a==1)  //taghyir gheymat zarfiyat sorat
   {  	system("cls");
    	system( "color 0A" );
    	ifstream s1("ghematzarfiyatsorat",ios::binary);
        if(!s1)
         {
     	    cout<<"error can not open gheymat file.";
         	exit(0);
    	 }
	   s1.read((char*)&p,sizeof(struct gzs));
	   s1.close();
       while(1)
       {
    	system("cls");
	    ifstream f1("ghematzarfiyatsorat",ios::binary);
	if (!f1)
	{
		cout<<"Eror (can not open the file)";
		exit;
	}
	f1.read((char*)&s,sizeof(struct gzs));
	f1.close();
	cout <<"********************************************************************************************************************* \n";

	cout<<"What do you want to do?\n";
	cout<<"1.Change the coefficient of bus\n";
	cout<<"2.Change the coefficient of train\n";
    cout<<"3.Change the coefficient of airplane\n";
   	cout<<"4.Change the capacity of bus\n";
	cout<<"5.Change the capacity of train\n";
    cout<<"6.Change the capacity of airplane\n";
   	cout<<"7.Change the speed of bus\n";
	cout<<"8.Change the speed of train\n";
    cout<<"9.Change the speed of airplane\n";
    cout<<"10.coming back\n";
    cout<<"11.Exit the admin section";
	cout <<"\n********************************************************************************************************************* \n";
	cout<<"Enter number:\t";
	int n;
	cin>>n;
	cout <<"********************************************************************************************************************* \n";
	if(n==1)
    {   system("cls");
     	cout<<"now:\t "<<p.zaribgheymat[0]<<endl;
		cout<<"Enter new coefficient of bus\n";
	    cin>>s.zaribgheymat[0];
    }
	if(n==2)
	{system("cls");
	cout<<"now:\t "<<p.zaribgheymat[1]<<endl;
		cout<<"Enter new coefficient of train\n";
      	cin>>s.zaribgheymat[1];
    }
	if(n==3)
	{system("cls");
		cout<<"now:\t "<<p.zaribgheymat[2]<<endl;
		cout<<"Enter new coefficient of airplane\n";
	    cin>>s.zaribgheymat[2];
    }
	if(n==4)
	{system("cls");
	cout<<"now:\t "<<p.zarfiyat[0]<<endl;
    	cout<<"Enter new capacity of bus\n";
	    cin>>s.zarfiyat[0];
    }
	if(n==5)
	{system("cls");
		cout<<"now:\t "<<p.zarfiyat[1]<<endl;
		cout<<"Enter new capacity of train\n";
	    cin>>s.zarfiyat[1];
    }
	if(n==6)
	{system("cls");
	cout<<"now:\t "<<p.zarfiyat[2]<<endl;
     	cout<<"Enter new capacity of airplane\n";
	    cin>>s.zarfiyat[2];
    }
	if(n==7)
	{system("cls");
	cout<<"now:\t "<<p.sorat[0]<<endl;
	cout<<"Enter new speed of bus\n";
	cin>>s.sorat[0];
    }
	if(n==8)
    {system("cls");
    cout<<"now:\t "<<p.sorat[1]<<endl;
	cout<<"Enter new speed of train\n";
	cin>>s.sorat[1];
    }
	if(n==9)
	{system("cls");
	cout<<"now:\t "<<p.sorat[2]<<endl;
	cout<<"Enter new speed of airplane\n";
	cin>>s.sorat[2];
    }
	if(n==10)   
    {
    	system("cls");
    		ofstream f2("ghematzarfiyatsorat",ios::binary);
	if (!f2)
	{
		cout<<"Error (can not open the file)";
		exit;
	}
	f2.write((char*)&s,sizeof(struct gzs));
	f2.close();
	break;
    }
	if(n==11)
	{ system("cls");
		ofstream f2("ghematzarfiyatsorat",ios::binary);
	if (!f2)
	{
		cout<<"Error (can not open the file)";
		exit;
	}
	f2.write((char*)&s,sizeof(struct gzs));
	f2.close();
	return 0;
    }
	ofstream f2("ghematzarfiyatsorat",ios::binary);
	if (!f2)
	{
		cout<<"Error (can not open the file)";
		exit;
	}
	f2.write((char*)&s,sizeof(struct gzs));
	f2.close();
    }
    }
//a1 tamam

if(a==2)  //etelaat ranande ha
{ system("cls");
	system( "color 0B" );
	cout <<"********************************************************************************************************************* \n";
	cout<<"drivers inforation:\n";
		struct driver d1;
	ifstream f1("drivers",ios::binary);
	if(!f1)return 0;
	cout<<" \t\t\t"<<"name:\t"<<"family:\t"<<"username:"<<"\t"<<"password:\t"<<"account:\t"<<"phone:\t    "<<"vichle:"<<endl<<endl;
	for(int i=1;;i++)
	{  char s[10];
	char bus[10]="bus";
	char train[10]="train";
	char airplane[10]="airplane";
		f1.read((char *)&d1,sizeof(struct driver));
		if(f1.eof()) break;
		if(d1.vasile==1)
		strcpy(s,bus);
		if(d1.vasile==2)
		strcpy(s,train);
		if(d1.vasile==3)
		strcpy(s,airplane);
		printf("%d)                   %s     %s   %s    %s    %d         %s      %s\n",i,d1.name,d1.family,d1.username,d1.password,d1.balance,d1.phone,s);
	}	
	f1.close();
		cout <<"********************************************************************************************************************* \n";
	cout<<"if you see and you want coming back Enter y:  ";
    char cha;
	cin>>cha;
	system("cls");
}
//a2 tamam

if(a==3) //etelaat moshtariya
{
	system("cls");
	system( "color 0D" );
	cout <<"********************************************************************************************************************* \n";
	cout<<"coustomer inforation:\n";
		struct customer c1;
	ifstream f1("customers",ios :: binary);
	if(!f1) 
	{
		if(!f1)
		{
			cout<<"eror can not open customer file";
			exit(0);
		}
	}
	cout<<" \t\t"<<"username:"<<"\t"<<"pasword:\t"<<"name:\t"<<"family:\t\t"<<"phone:\t"<<endl<<endl;
    for(int i=1;;i++)
	{
		f1.read((char *)&c1,sizeof(customer));
		if(f1.eof()) break;
		printf("%d)\t\t%s\t\t%s\t\t%s\t%s\t\t%s\n",i,c1.username,c1.password,c1.name,c1.family,c1.phone);
	}
	f1.close();
		cout <<"********************************************************************************************************************* \n";
	cout<<"if you see and you want coming back Enter y:  ";
    char cha;
	cin>>cha;
	system("cls");
}
//a3 tamam

if(a==4) //ettelat safararo bebine
{   system("cls");
	system( "color 1F" );
		cout <<"********************************************************************************************************************* \n";
showtravelsforleader();
	cout <<"********************************************************************************************************************* \n";
               cout<<"if you see enter c for countinu\n";
			        char c;
			        cin>>c;
	system("cls");
}
//a4 tamam


if(a==5)    //ranande besaze
{   system("cls");
	system( "color 2F" );
		cout <<"********************************************************************************************************************* \n";
    int dgdf=driversazi();
    	cout <<"********************************************************************************************************************* \n";
    cout<<"please enter c for countinu:\t";
    char c;
    cin>>c;
    
    system("cls");
}
//a5 tamam
if(a==6) //edit modir
{
	struct leader l1;
	system("cls");
	system( "color 3F" );
	ifstream f1("nessesary",ios::binary);
    f1.read((char*)&l1,sizeof(struct leader));
    	cout <<"********************************************************************************************************************* \n";
	int tttttt=editleader(l1);
		cout <<"********************************************************************************************************************* \n";
	system("cls");
}
//a6 tamam
if(a==7)//taraconesh modir
{   system("cls");
   system( "color 0D" );
		cout <<"********************************************************************************************************************* \n";
	struct leader s1;
   ifstream f1("nessesary",ios::binary);
   if(!f1)
   {
   	cout<<"error in opening nessesary file";
   }
   f1.read((char*)&s1,sizeof(struct leader));
   showtrakonesh(s1.balance);
  	cout <<"********************************************************************************************************************* \n";
   cout<<"if you see enter c for countinu:\t";
   char s;
   cin>>s;
   system("cls");
   
}
//a7 tamam
if(a==8) //cancel safar
{   struct history h1;
    system("cls");
    system("color 0E");
      	cout <<"********************************************************************************************************************* \n";
	int s;
	cout<<"enter number of safar:\t";
	cin>>s;
    ifstream f1("safar",ios::binary);
    if(!f1)
    {
    	cout<<"error in opening safar file";
        exit(0);
	}
	while(1)
	{
	f1.read((char*)&h1,sizeof(struct history));
	if(h1.number==s)
	break;
    }
    canceltravelkoli(h1);
      	cout <<"********************************************************************************************************************* \n";

    cout<<"if you want countinu enter c:\t";
    char d;
    cin>>d;
	system("cls");
	
}
if(a==9) //khorooj modir
{
	system("cls");
	bye();
return 0;
}
system("cls");

}
//a9 tamam
}

void driverpannel(driver d1)
{
	system("cls");
	printf("Hello %s/n",d1.username);
	int number;
	while(1)
	{   system("cls");
	     system("color 0A");
		cout<<"***************************************************************************************\n";
		cout<<"0:exit\n";
		cout<<"1:edit profile\n";
		cout<<"2:tarif safar\n";
		cout<<"3:hazf safar\n";
		cout<<"4:tarikhche safar ha\n";
		cout<<"5:tarakonesh\n";
		cout<<"6.edit travel:\n";
		cout<<"******************************************************************************************\n";
		cout<<"Enter number:\t";
		cin>>number;
		system("cls");
		switch(number)
		{
			case 0:{  //exit ranande
				system("cls");
				bye();
				return;
				
			}
			
			case 1:{  //edit profile
				system("cls");
				system("color 0A");
				cout<<"******************************************************************************************\n";
				editdriver(d1);
				cout<<"******************************************************************************************\n";
				cout<<"if you want continu enter c:\t";
				char c;
				cin>>c;
				break;
			}
	        
	        case 2:{    //tarif safar
	        				
	        				system("cls");
	        				system("color 0B");
						      cout<<"******************************************************************************************\n";
	        	      tayinsafarranande( d1);
				              cout<<"******************************************************************************************\n";   
				cout<<"if you want continu enter c:\t";
				char c;
				cin>>c;
				system("cls");
				break;
			}
	        case 3:{   //cancel safar
	        	int y=0; //payin bebin
				system("cls");
	        	system("color 0C");
		           cout<<"******************************************************************************************\n";   
                    int s;
	                cout<<"enter number of safar:\t";
                 	cin>>s;
                    ifstream f1("safar",ios::binary);
                    if(!f1)
                    {
    	             cout<<"error in opening safar file";
                      exit(0);
	                 }
                	struct history hh;
					while(1)
                  	{
                  	f1.read((char*)&hh,sizeof(struct history));
                 	if(hh.number==s)
                 	{
                 	 if(hh.ranandeaccount==d1.balance)
					  break;
					  else {
					  	cout<<"this travel is not for you you are a bad man :( gooooo outtttttttttttttttt";
					  	f1.close();
					  	cout<<"if you want countinue enter c:\t";
					  	char c;
					  	cin>>c;
					  	return;
					  }
					 }
                    }
                 canceltravelkoli(hh);
				   cout<<"******************************************************************************************\n";   
         	   		cout<<"ok. cancel travel \nif you want continu enter c:\t";
		   		char c;
				cin>>c;
				system("cls");
	           	break;
         	}
	
	        case 4:{   //tarikhche safar
	        		system("cls");
	        	system("color 0C");
		           cout<<"******************************************************************************************\n";   
                   showtravelsfordriver(d1);   
				   cout<<"******************************************************************************************\n";   
         	   		cout<<"if you see for continu enter c:\t";
		   		char c;
				cin>>c;
				system("cls");
	        	
				break;
			}
	        
	        case 5:{  //taraconesh 
	        		system("cls");
	        	system("color 0C");
		           cout<<"******************************************************************************************\n";   
                 showtrakonesh(d1.balance);
				   cout<<"******************************************************************************************\n";   
         	   		cout<<"if you want continu enter c:\t";
		   		char c;
				cin>>c;
				system("cls");
	        	
				break;
			}
	        
	        case 6:{  //edit safar
	        		system("cls");
	        	system("color 0C");
		           cout<<"******************************************************************************************\n";   
                 int s;
	                cout<<"enter number of safar:\t";
                 	cin>>s;
                    ifstream f1("safar",ios::binary);
                    if(!f1)
                    {
    	             cout<<"error in opening safar file";
                      exit(0);
	                 }
                	struct history hh;
					while(1)
                  	{
                  	f1.read((char*)&hh,sizeof(struct history));
                 	if(hh.number==s)
                 	{
                 	 if(hh.ranandeaccount==d1.balance)
					  break;
					  else {
					  	cout<<"this travel is not for you you are a bad man :( gooooo outtttttttttttttttt";
					  	f1.close();
					  	cout<<"if you want countinue enter c:\t";
					  	char c;
					  	cin>>c;
					  	return;
					  }
					 }
                    }
                 takhirtravel(hh.number);
				   cout<<"******************************************************************************************\n";   
         	   		cout<<"ok takgir emal shod \nif you want continu enter c:\t";
		   		char c;
				cin>>c;
				system("cls");
	        	
				break;
			}
		}
		
	}
}

 void cutomerpannel(struct customer d1)
 {
    
 	printf("hi my friend:\t%s %s",d1.name,d1.family);
 	while(1)
 	{ system("cls");
 	  system("color 0A");
 		cout <<"********************************************************************************************************************* \n";
 	cout<<"what do you do?\n";
 	cout<<"1.edit your profile\n";
 	cout<<"2.getting tiket\n";
 	cout<<"3.travels\n";
 	cout<<"4.cancel tiket\n";
 	cout<<"5.tarakonesh\n";
 	cout<<"6.exit\n";
 	cout <<"********************************************************************************************************************* \n";
 	cout<<"enter number:\t";
 	int a;
 	cin>>a;
 	  
 	if(a==1) //edit carbar
 	    {   system("cls");
 	        system("color 0A");
 	         	cout <<"********************************************************************************************************************* \n";
 	    	int n=editkarbar(d1);
 	    	 	cout <<"********************************************************************************************************************* \n";
 	    	cout<<"if you want to continue enter c:\t";
 	    	char c;
 	    	cin>>c;
 	    	system("cls");
 	    	
	    }
	if(a==2) //bilit giri
	  {
	  	system("cls");
 	        system("color 0B");
	  	 	         	cout <<"********************************************************************************************************************* \n";
	  	safargiricustomer( d1);
	   	         	cout <<"********************************************************************************************************************* \n";
	   	         	cout<<"if you want to continue enter c:\t";
 	    	char c;
 	    	cin>>c;
 	    	system("cls");
	  }
    if(a==3) //travels
	  {
	  	system("cls");
 	        system("color 0C");
	  	 	         	cout <<"********************************************************************************************************************* \n";
	  	            showtravelforcustomer(d1);
	   	         	cout <<"********************************************************************************************************************* \n";
	   	         	cout<<"if you want to continue enter c:\t";
 	    	char c;
 	    	cin>>c;
 	    	system("cls");
	  }
	if(a==4) //cancel bilit
	  {
	  	system("cls");
 	        system("color 0D");
	  	 	         	cout <<"********************************************************************************************************************* \n";
	  	 	         	cout<<"enter number of travel:\t";int n;cin>>n;
	  	                 cancelblit(n,d1);
	   	         	cout <<"********************************************************************************************************************* \n";
	   	         	cout<<"if you want to continue enter c:\t";
 	    	char c;
 	    	cin>>c;
 	    	system("cls");
	  }
	  if(a==5) //tarakonesh
	  {
	  	system("cls");
 	        system("color 0D");
	  	 	         	cout <<"********************************************************************************************************************* \n";
	  	 	         showtrakonesh(d1.balance);
	   	         	cout <<"********************************************************************************************************************* \n";
	   	         	cout<<"if you want to continue enter c:\t";
 	    	char c;
 	    	cin>>c;
 	    	system("cls");
	  }
	  if(a==6) //exit
	  {
	  	system("cls");
	  	bye();
	  	return;
 	    	
	  }	
	} 
 }
int signin()  //sabt nam karbar
{
	system("cls");
	struct customer c1,c2;//c1 baraie file va c2 baraie karbar
	 cout <<"********************************************************************************************************************* \n";
	cout<<"\nenter your name:\t";
	scanf("%s",c2.name);
	 cout <<"********************************************************************************************************************* \n";
	cout<<"enter your family:\t";
	scanf("%s",c2.family);
	 cout <<"********************************************************************************************************************* \n";
	cout<<"enter your user name :\t";
	scanf("%s",c2.username);
	 cout <<"********************************************************************************************************************* \n";
	ifstream f3("customers",ios :: binary);
	
		if(!f3)
	 {
	   cout<<"error in opening customer binary file";
	   exit(1);
	 }
	 
	while(f3.read((char *)&c1, sizeof(struct customer))!=NULL)
	{
		
		if(strcmp(c1.username,c2.username)==0)
		{
			cout<<"\nyour user name is used befor.\nplease enter user name:\t";
			scanf("%s",c2.username);
			f3.seekg(0,ios :: beg);
		}
		
	}
	f3.close();
	 cout <<"********************************************************************************************************************* \n";
	cout<<"enter your password:\t";
	scanf("%s",c2.password);
	 cout <<"********************************************************************************************************************* \n";
	cout<<"enter the username of your moaref (if you do not have just enter 0):\t";
	scanf("%s",c2.moaref);
	 cout <<"********************************************************************************************************************* \n";

	cout<<"enter your phone number:\t";
	scanf("%s",c2.phone);
 cout <<"********************************************************************************************************************* \n";
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
		 cout<<"enter your account number :\t";
	     cin>>b.balance;
         while(f1.read((char *)&a,sizeof(struct account))!=NULL)
	 {
	 	
	 	if(a.balance == b.balance)
	 	 {
	 	
	 		for(int i=0;i<3;i++)
	 		{ cout <<"********************************************************************************************************************* \n";
	 			cout<<"\n enter your password:\t";
	 			cin>>b.pass;
	 			 cout <<"********************************************************************************************************************* \n";

	 			if(b.pass == a.pass)
	 			{  
	 				cout<<"\nyour pass was right\n";
	 				c2.balance=a.balance;
	 				c2.pass=a.pass;
	 			
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
                       	 cout <<"********************************************************************************************************************* \n";

                       	return 1;
				}
				else cout<<"your password was false\n you can try "<<2-i<<"times"<<endl;
			 }
			 cout<<"\nyou tried several times\n";
			 return 0;
	 		
		 }
	 }
	 cout<<"\n\ayour account not exist.\tif you do not want to continue enter 'n' else enter another character";
	 char l;
	 cin>>l;
	 if(l=='n') return 0;
   }
	
}

int main()
{
	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(),WM_SYSKEYDOWN,VK_RETURN, 0x20000000);
	///////
	hi();
	bus();
	train();
	plane();
safarrafte();	
 system("cls");
 system("color 5A");
 cout <<"********************************************************************************************************************* \n";
 cout<<"wellcome to your site for travel\n"; 
cout <<"********************************************************************************************************************* \n";
cout<<"what do you wanna do?    :)\n";
cout<<"0.exit\n";
cout<<"1.sign in\n";
cout<<"2.log in                         fall emrooz:                       \n";
cout<<"                                 che jaye shokro shekayat ze naghshe niko bad ast    \n  ";
cout<<"                                                      cho bar sahife ye asly ragham nakhahad mand.\n"; 
cout <<"********************************************************************************************************************* \n";
cout<<"Enter the number:\t";
int f;
cin>>f;
if(f==0)
{
	system("cls");
	bye();
	exit(0);
}
if(f==1)
{
    system("cls");
	system("color 0D");
	cout <<"********************************************************************************************************************* \n";

	int a=signin();
	cout <<"********************************************************************************************************************* \n";
	cout<<"Enter c for continue";
	char c;
	cin>>c;
	system("cls");
	if(c=='c') f=2;
	else bye();
	
}
if(f==2)
{
	
	
	system("cls");
	system("color 1A");
	cout <<"********************************************************************************************************************* \n";
    cout<<"please enter your position\n";
	cout<<"0.exit\n";
    cout<<"1.leader\n";
    cout<<"2.driver\n";
    cout<<"3.customer\n";
    cout<<"4.guest\n";
   	cout <<"********************************************************************************************************************* \n";
    cout<<"enter number:\t";
    int position;
    cin>>position;
            switch(position)
                   {
                   	case 0:{
					   bye();
                   	exit(0);
						break;
					   }
                   	case 1:{

						   l=loginleader();
						   system("cls");
                   		   modirpanel();
						break;
					   }
					case 2:{
						 d=logindriver();
						 driverpannel(d);
						break;
					}
					case 3:{
						c=logincustomer();
					    cutomerpannel(c);
						break;
					}
					case 4:{
						while(1)
						{
							system("cls");
							system("color 3B");
							cout<<"enter the number:\n";
							cout<<"0.exit \n1.get a travel\n2.see trakonesh\n";
							cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
							
							int a;
							cin>>a;
							system("cls");
							if(a==0)
							{
								bye();
								exit(0);
								
								////////////////
							}
							if(a==1) safargiriadi();
							if(a==2)
							{
								struct account a1,a2;
								cout<<"enter your account:\t";
								cin>>a2.balance;
								ifstream f8("accounts",ios::binary);
								if(!f8) cout<<"error in openning accounts in main guest"<<endl;
								while(f8.read((char*)&a1,sizeof(struct account))!=NULL)
								{
									if(a1.balance==a2.balance)
									{
										for(int i=0;i<3;i++)
										{
											cout<<"\nenter your password:\t";
											cin>>a2.pass;
											if(a1.pass=a2.pass)
											{
												showtrakonesh(a1.balance);
												f8.close();
												i=3;
												cout<<"do you wanna continue?(y/n)";
												char ttt;
												cin>>ttt;
												if(ttt=='n') exit(0);
											}
											else cout<<"\ayour password was rang \n";
										}
									}
								}
								
							}
						}
						
						break;
					}
				   }
			}
					
					
					
//*/
					  
return 0;
}
