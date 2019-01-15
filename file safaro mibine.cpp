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
		int traveltime[2]; // 1.saat tool safar 2.daghighe tool safar 
		int ranandeaccout;
	};
	int main()
	{
		struct history s1;
		ifstream f("safar",ios::binary);
		while(!f.eof())
		{
			f.read((char*)&s1,sizeof(struct history));
			cout<<"shomare safar: "<<s1.number<<"\t shahrshoro: "<<s1.bigining<<"\t shahrtamoom: "<<s1.distination<<"\t gheymat: "<<s1.price<<"\t sal: "<<s1.date[0]<<"\t mah: "<<s1.date[1]<<"\t rooz: "<<s1.date[2]
			<<"\t zarfiyat: "<<s1.capasity<<"\t saat: "<<s1.time[0]<<"\t daghighe: "<<s1.time[1]<<"\t saat safar: "<<s1.traveltime[0]<<"\t daghighe: "<<s1.traveltime[1]<<endl<<endl<<endl;
		}
		f.close();
	}
