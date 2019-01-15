#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<string>
#include<conio.h>
using namespace std;

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

struct leader //first pass=a      firs user=a
{
	char password[30];
	char username[30];
	int balance;
	int pass;

};

struct account
{
	int balance;
	int pass;
	int inventory;//mojodi
};

struct history   //struct history is for history of travels
{
  int number;
  int bigining;
  int distination;
  int  price; //gheimat har belit
  int date[3];//1 for year    2 for mounth      3 for day
  char sarneshinan[500][30];
  char ranande[30];
  int capasity;//zarfiat
  int time[2]; //time of this travel 1hour  2miniute
  int vasile;
  int traveltime[2];//time of  travel
  int ranandeaccount;
};

void safargiri(struct customer s1)
{
	struct history h1;//bara jostojo to fila
	int a;
	while(1)
	{
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
		        	printf("number\tvehicle\tstart\tend\tcapasity\tprice\t date\t time of start \t time of end\n");
		        	while(!file.eof())
		        	{
			    	file.read((char *)&h1,sizeof(struct history));
			    	printf("\n%d\t%d\t%d\t%d\t%d\t%d",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			        }
			        file.close();
		    	break;
	       	}
	       	case 2:{
	       		struct history h2;
	       		while(1)
	            {
	            	cout<<"enter your biginig city:\t";
	            	cin>>h2.bigining;
	            	cout<<"\nenter your distination city:\t";
	            	cin>>h2.distination;
	            	ifstream file("safar",ios::binary);
	            	if(!file) exit(-1);
	            	printf("number\tvehicle\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n");
	            	while(!file.eof())
	            	{
	            		file.read((char *)&h1,sizeof(struct history));
	            		if (h1.bigining==h2.bigining && h1.distination==h1.distination)
	            		{
	            			printf("\n%d\t%d\t%d\t%d\t%d\t%d",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	        cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
						}
					}
					file.eof();
	            	
				}
	       		
				break;
			   }
			case 3:{
				int number;
				cout<<"\nenter the number of your travel.(if you do not know enter 0)\n";
				cin>>number;
				if (number==0)break;
				else {
					ifstream f1("safar",ios::binary);
					if(!f1) {
						cout<<"error in opening safar";
						exit(0);
					}
					int makan=-1;//makan safar dar file
					while(!f1.eof())
					{
						makan++;
						f1.read((char*)&h1,sizeof(struct history));
						if(h1.number==number)
						{
							if(h1.capasity==0)
			    	        {
			    	        	cout<<"the vehicle is full";
							}
			    	        
							printf("number\tvehicle\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n");
							printf("\n%d\t%d\t%d\t%d\t%d\t%d",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	        cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			    	        cout<<"\nare you sure you wanna take this?(y/n)/t";
			    	        char c;
			    	        cin>>c;
			    	        if(c=='n')break;
			    	        f1.close();
			    	        ofstream f2("safar",ios::binary);
			    	        if(!f2) exit(-1);
			    	        f2.seekp(makan*sizeof(struct history),ios::beg);
			    	        h1.capasity--;
			    	        for(int i=0;;i++)
			    	        {
			    	        	if(h1.sarneshinan[i][0]==NULL)
			    	        	strcpy(h1.sarneshinan[i],s1.username);
							}
							f2.write((char*)&h1,sizeof(struct history));
							f2.close();
							struct account acc;//////////
							fstream f3("account",ios::binary);
							if(!f3)
							{
							cout <<"error in opening account binary file in travel sazi";
							exit(-1);
							}
							while(!f3.eof())
							{
								f3.read((char *)&acc,sizeof(struct account));
								if(acc.balance==s1.balance)
								{
									acc.inventory-=h1.price;
									f3.seekp(f3.tellg()-sizeof(struct account),ios::beg);
									f3.write((char*)&acc,sizeof(struct account));
									
								}
							}
							f3.seekg(0,ios::beg);
							while(!f3.eof())
							{
								f3.read((char *)&acc,sizeof(struct account));
								if(acc.balance==h1.ranandeaccount)
								{
									acc.inventory+=90*h1.price/100;
									f3.seekp(f3.tellg()-sizeof(struct account),ios::beg);
									f3.write((char*)&acc,sizeof(struct account));		
								}
							}
							struct leader l1;
							ifstream f4("nessesary",ios::binary);
							if(!f4)
							cout<<"error in nessesary file in travel giry"<<endl;
							f4.read((char*)&l1,sizeof(struct leader));
							
							while(!f3.eof())
							{
								f3.read((char *)&acc,sizeof(struct account));
								if(acc.balance==l1.balance)
								{
									acc.inventory+=10*h1.price/100;
									f3.seekp(f3.tellg()-sizeof(struct account),ios::beg);
									f3.write((char*)&acc,sizeof(struct account));		
								}
							}
							f4.close();
							f3.close();
							cout<<"you take the travel successfully\n";
							
						}
					}
				}
				break;
			}
	         	
	    }
	}
}

int main()
{
	struct customer c1;
	safargiri(c1);
}
