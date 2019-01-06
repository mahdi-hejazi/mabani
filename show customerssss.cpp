#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<istream>
#include<fstream>
#include<string>
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
int main()
{
	struct customer c1,c2;
	ifstream f("customers",ios::binary);
    while(1)
	{
		
		f.read((char *)&c1,sizeof(customer));
		if(f.eof())return 8;
		printf("%s\t%s\t%s\n%s\t%d\t%d\n\n\n",c1.username,c1.password,c1.phone,c1.name,c1.inventory,c1.balance);
		
	}
	f.close();
}
