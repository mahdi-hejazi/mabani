#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<string>
#include<conio.h>
using namespace std;

struct gzs {      //structi baraye daryaft va taghyir gheymat  zarfiyat va sorat
		int zaribgheymat[3];     //bus  train  plane
		int zarfiyat[3];   //bus  train  plane
		int sorat[3];     //bus  train  plane
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
  int traveltime[2];//time of travel
};
struct leader //first pass=a      firs user=a
{
	char password[30];
	char username[30];
	int balance;
	int pass;

};
struct driver
{
	char username[30];
	char password[30];
	int vasile;//1 buss 2 train  3 plane
    int balance;
	int pass;

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
};

int main()
{
	struct driver d1;
	ifstream f1("drivers",ios::binary);
	if(!f1)return 125;
	while(1)
	{
		f1.read((char *)&d1,sizeof(struct driver));
		if(f1.eof()) break;
		printf("%s\t%s\t%d\t%d\t%d\n\n",d1.username,d1.password,d1.vasile,d1.balance,d1.pass);
	}
}
