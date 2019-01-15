#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
#include <windows.h>
using namespace std;
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
		int traveltime[2]; // 1.saat residan 2.daghighe residan 
		int ranandeaccout;
	}s;
int main()
{
	s.number=1;
	ofstream f1("safar", ios::binary);
	f1.write((char*)&s,sizeof(struct history));
	f1.close();
	return 0;
	
}
