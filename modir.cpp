#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <windows.h>
#include <fstream>
using namespace std;
struct gzs{      //structi baraye daryaft va taghyir gheymat  zarfiyat va sorat
int zaribgheymat[3];     //bus  train  plane
int zarfiyat[3];   //bus  train  plane
int sorat[3];     //bus  train  plane
};
int main()
{  while(1)
{
 gzs s;
    int a; //entekhab adad tavasot modir
    system( "color 0C" );
	cout<<"Hello admin  +_+\n" ;
	cout <<"-------------------------------------------------------- \n";
	cout<<"What do you want to do?\n";
	cout<<"1.Pricing of treavel and Determine the capacity and Determine the speed\n";
	cout<<"2.View drivers information\n";
    cout<<"3.View customer information\n";
    cout<<"4.see travels\n";
    cout<<"5.Driver registration\n";
    cout<<"6.Exit the admin section";
	cout <<"\n-------------------------------------------------------- \n";
	cout<<"Enter number:\t";
	cin>>a;
	cout <<"-------------------------------------------------------- \n";
if(a==1)
{
    while(1)
    {
	ifstream f1("ghematzarfiyatsorat",ios::binary);
	if (!f1)
	{
		cout<<"Eror (can not open the file)";
		exit;
	}
	f1.read((char*)&s,sizeof(struct gzs));
	f1.close();
	cout<<"What do you want to do?\n";
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
	cout <<"\n-------------------------------------------------------- \n";
	cout<<"Enter number:\t";
	int a;
	cin>>a;
	cout <<"-------------------------------------------------------- \n";
	if(a==1)
	{
		cout<<"Enter new coefficient of bus\n";
	    cin>>s.zaribgheymat[0];
    }
	if(a==2)
	{
		cout<<"Enter new coefficient of train\n";
      	cin>>s.zaribgheymat[1];
    }
	if(a==3)
	{
		cout<<"Enter new coefficient of airplane\n";
	    cin>>s.zaribgheymat[2];
    }
	if(a==4)
	{
    	cout<<"Enter new capacity of bus\n";
	    cin>>s.zarfiyat[0];
    }
	if(a==5)
	{
		cout<<"Enter new capacity of train\n";
	    cin>>s.zarfiyat[1];
    }
	if(a==6)
	{
     	cout<<"Enter new capacity of airplane\n";
	    cin>>s.zarfiyat[2];
    }
	if(a==7)
	{
	cout<<"Enter new speed of bus\n";
	cin>>s.sorat[0];
    }
	if(a==8)
    {
    cout<<"Enter new speed of train\n";
	cin>>s.sorat[1];
    }
	if(a==9)
	{
	cout<<"Enter new speed of airplane\n";
	cin>>s.sorat[2];
    }
	if(a==10)
	break;
	if(a==11)
	return 0;
	ofstream f2("ghematzarfiyatsorat",ios::binary);
	if (!f1)
	{
		cout<<"Eror (can not open the file)";
		exit;
	}
	f2.write((char*)&s,sizeof(struct gzs));
	f2.close();
}
}
}
}
