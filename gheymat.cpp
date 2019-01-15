#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;
int main()
{   system( "color 0C" );
	int vasile; //vasileye safar
	int train; //zarib ghamat ghatar
    int bus; //zarib ghamat otoboos
    int plane; //zarib ghamat havapama
	int a, b;  //shahr avval =a , shahr dovvom =b 
	double c; //c=faseleye do shahr
	int s; //gheymat safar
	FILE *fp = fopen("cities.txt", "r");
	if(!fp)
	{
		cout<<"error of file (cities)";
		return 1;
	}
	int index[300]; //shomare shahr
	int x[300];
	int y[300];
	for (int i = 0; i<300; i++)
	{
		fscanf(fp, "%d%d%d", &index[i], &x[i], &y[i]);
	}
	FILE *pt=fopen("gheymatgozariyemodirvasandali.txt","r");
		if(!pt)
	{
		cout<<"error of file (gheymat)";
		return 1;
	}
	fscanf(pt,"%d%d%d",&bus,&train,&plane);
	cout <<"-------------------------------------------------------- \n";
	cout<<"PLEASE ENTER NUMBER OF THE FIRST CITY:\t";
	cin >> a;
	cout << "PLEASE ENTER NUMBER OF THE SECOND CITY:\t";
	cin >> b;
	c = sqrt(pow(y[b - 1] - y[a - 1], 2) + pow(x[b - 1] - x[a - 1], 2));
	while(1)
	{
		cout<<"--------------------------------------------------------\n";
		cout<<"what do you want to travel with?   :)\n";
	cout<<"1.bus      ()-()-()-()\n";
	cout<<"2.train     |_-_-_-_-_|\n";
	cout<<"3.Airplane    _/\\_ \n";
	cout<<"ENTER NUMBER:\t";
	cin>>vasile;
	int f=int(c); //rond cardan adad
		if(vasile==1)
    	{
    		s=((bus*f)/100)*100;
    	    cout<< s;
    	    break;
        }   
	else if(vasile==2)
	   {
			s=((train*f)/100)*100;
			cout<< s;
			  break;
	   }
	else if(vasile==3)
	   {
	   	
		    s=((plane*f)/100)*100;
		    cout<< s;
	    	  break; 
	   }
	else
	  {
		cout<<"\n--------------------------------------------------------\nMy friend made a mistake. Try again\n";
	  }

   } 
}
