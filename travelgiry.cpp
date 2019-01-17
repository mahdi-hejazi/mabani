#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<string>
#include<conio.h>
#include<windows.h>
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
		int time[2];//1.saat 2.daghighe 
		int traveltime[2]; // 1.saat tool safar 2.daghighe tool safar 
		int ranandeaccount;
		int vasile;//1bus 2train 3palne
	};
struct driver
{
	char username[30];
	char password[30];
	int vasile;//1 buss 2 train  3 plane
    int balance;
	int pass;

};


void showtravelsfordriver(driver d1)
{
	struct history h1;
	 ifstream file("safar",ios::binary);
		         	if (!file) 
		        	{
		         		cout<<"error in opening safar binary file";
		        		exit(0);
		        	}
		        	printf("number\tvehicle\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n");
		        	while(1)
		        	{
			    	file.read((char *)&h1,sizeof(struct history));
			    	if(file.eof()) break;
			    	if(h1.ranandeaccount==d1.balance)
			    	{
			    	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	cout<<"\t"<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
					}
			        }
			        file.close();
}
void showtravelsforleader()
{
	struct history h1;
	 ifstream file("safar",ios::binary);
		         	if (!file) 
		        	{
		         		cout<<"error in opening safar binary file";
		        		exit(0);
		        	}
		        	printf("number\tvehicle\tstart\tend\tcapasity\tprice\t date\t time of start \t time of travel\n");
		        	cout<<"---------------------------------------------------------------------------------------------------";
		        	while(1)
		        	{
			    	file.read((char *)&h1,sizeof(struct history));
			    	if(file.eof()) break;
			    	printf("\n%d\t%d\t %d\t %d\t  %d  \t    %d  ",h1.number,h1.vasile,h1.bigining,h1.distination,h1.capasity,h1.price);
			    	cout<<h1.date[0]<<"/"<<h1.date[1]<<"/"<<h1.date[2]<<"\t"<<h1.time[0]<<":"<<h1.time[1]<<"\t\t"<<h1.traveltime[0]<<":"<<h1.traveltime[1]<<endl;
			    	printf("sarneshinan:\n");
			    	
			    	for (int w=0;h1.sarneshinan[w][0]!=NULL;w++)
			    	{
			    		printf("%d:%s\t",&w,h1.sarneshinan[w]);
			    		if(w%6==0) printf("\n");
					}
			        }
			        file.close();
}
	               


int main()
{
	
	showtravelsforleader();
	struct customer c1;
	
}
