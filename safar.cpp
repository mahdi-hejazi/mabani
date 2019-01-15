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
	};
	struct gzs {      //structi baraye daryaft va taghyir gheymat  zarfiyat va sorat
		int zaribgheymat[3];     //bus  train  plane
		int zarfiyat[3];   //bus  train  plane
		int sorat[3];     //bus  train  plane
	};
void tayinsafarranande(struct driver d1)
{
	
	int o;
	o=d1.vasile;
	struct gzs dd;//khandan az file geymat zarfiyat sorat
	int a, b; //do motoghayer baraye rahat shodan car ce shomare ye do shahr ra darand
	int distance; //fasele do shahr
	struct history safar; //safaro begirim mezarim dakhel file
	struct history sa; //safar akharo bara adad bara file
	cout << "My friend enter the start city:\t";
	cin >> safar.bigining;
	safar.bigining=a;
	cout << "My friend enter the end city:\t";
	cin >> safar.distination;
	safar.distination=b;
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
	ifstream f1("ghematzarfiyatsorat", ios::binary);
	fp.close();
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
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = (distance%dd.sorat[0]) * 60;
	}
	if (o == 2)
	{
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = (distance / dd.sorat[0]) * 60;
	}
	if (o == 3)
	{
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = (distance / dd.sorat[0]) * 60;
	}
	strcpy(safar.ranande,d1.username)
	ofstream f3("safar", ios::binary | ios::app);
	if (!f3)
	{
		cout << "can not open safar file";
		exit(0);
	}
	f3.write((char*)&safar, sizeof(struct history));
	f3.close();
	return 0;
}
