#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<math.h>
#include<conio.h>
#include "login.h" //header ke ma tarif kardim shamel tabeie login() baraie logi shodan
    //stuct haie ma dar header login.h tarif shodand
using namespace std;
/*file haie ma shamel : accounts baraie account ha
customers baraie atelaat moshtary ha
drivers baraie ranande ha
nessesary baraie atelaat digar mesle leader dar khat aval
travel-history baraie tarikhche safar ha
travels baraie safar haie alan*/

/*struct history   //struct history is for history of travels
{
  int number;
  int bigining;
  int distination;
  int  price; //gheimat har belit
  int date[3];//1 for year    2 for mounth      3 for day
  char sarneshinan[500][30];
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
	
};
struct driver
{
	char username[30];
	char password[30];
	int vasile;//1bus 2train   3plane
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
 
};*/

struct leader l;
struct customer c;
struct driver d;

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
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = (distance%dd.sorat[0]) * 60;
	}
	if (o == 2)
	{
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = (distance % dd.sorat[0]) * 60;
	}
	if (o == 3)
	{
		safar.traveltime[0] = distance / dd.sorat[0];
		safar.traveltime[1] = (distance % dd.sorat[0]) * 60;
	}
	strcpy(safar.ranande,d1.username);
	safar.ranandeaccount=d1.balance;
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

int editkarbar()
{
	cout << string(50, '\n');
	struct customer c1,c2;//c1 for file
	ifstream f1("customers",ios::binary);
    while(1)
    {
    	cout << string(50, '\n');
        printf("enter your old user name:\t");
	    scanf("%s",c2.username);
	    for(int i=0;!f1.eof();i++) //i baraie shomaresh ke chandomin stuct file baraie karbar ast
	    {
	    	f1.read((char *)&c1,sizeof(struct customer));
	    	if(strcmp(c1.username,c2.username)==0)
	    	{
	    		f1.close();
	    		while(1)
	    		{
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
	    				ifstream f3("customers",ios :: binary);
	
	                	if(!f3)
                       	 {
	                       cout<<"error in opening customer binary file";
	                       exit(1);
	                     }
	                     struct customer c3;
                    	while(!f3.eof())
                        	{
	                        	f3.read((char *)&c3, sizeof(struct customer));
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
							while(!f4.eof())
							{
								f4.read((char *)&a1,sizeof(struct account));
								if(a1.balance==c1.balance)
								{
									for(int r=0;r<3;r++)
									{
										cout<<"enter your account password:\t";
								    	cin>>c1.pass;
								    	if(c1.pass==a1.pass) 
								    	{
								    		
								    		f4.close();
								    		goto l1;//dard nachary gozashtam mire ghable break chand khat paiin tar
										}
								    	else cout<<"\nyour password was rang \nyou have"<<2-r<<" times\n";
									}
								}
								cout<<"your balance is not exist enter another one:\t";
								cin>>c1.balance;
								f4.seekg(0,ios::beg);
							}
						
					    l1:break;
					}
				}
				cout<<"do you wanna change another thing?(if not enter 'n' )\n";
				char g;
				cin>>g;
				if(g=='n') break;
		    	}
	    		
	    		ofstream f2("customers",ios::binary);
	    		f2.seekp(i*sizeof(struct customer),ios::beg);
	    		f2.write((char *)&c1,sizeof(struct customer));
	    		cout<<"\n your changes saved successfully.\n";
	    		f2.close();
	    		return 1;
	    		
			}
		
		}
	    
	}
	
}
int driversazi()
{
    cout << string(50, '\n');  
	struct driver d1,d2;//d1 for karbar   d2 for file
	cout<<"\n enter username of your driver :\t";
	scanf("%s",d1.username);
	
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
			cout<<"\n your user name is used befor.\nplease enter another user name:\t";
			scanf("%s",d1.username);
			f3.seekg(0,ios :: beg);
		}
		
	}
	f3.close();
	
	
	cout<<"\n enter pasword of driver :\t";
	scanf("%s",d1.password);
	cout<<"\n enter the number of your vaicle?(1:bus 2:train 3:plane)\n";
	cin>>d1.vasile;
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
		cout << string(50, '\n');
		cout <<"do you wanna edit which of these information?(enter the number)\n1:username\t2:password\t3:account number";
		int a;
		cin>>a;
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
	            	cout<<"enter your account :\t";
	                cin>>b.balance;
	                f1.seekg(0,ios::beg);
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
	 				            l1.balance=a.balance;
	 			             	l1.pass=a.pass;
	 			             
							}
				            else 
				            {
				            	if(i<3)
				            	{
				            		cout<<"your pass was rang!you have"<<2-i<<"times.\n";	
								}
							}
			               }
                        }
	                }
				    cout<<"do you wanna countinue?(y/n)";
				    char ch;
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
        cout<<"\nleader saved successfully\n";
        cout<<"do you wanna change another thing?(y/n)";
        char c;
        cin>>c;
        if(c=='n' || c=='N') return 1;
	}
}
 

int signin()  
{
	cout << string(50, '\n');
	struct customer c1,c2;//c1 baraie file va c2 baraie karbar
	cout<<"\nenter your name:\t";
	scanf("%s",c2.name);
	cout<<"enter your family:\t";
	scanf("%s",c2.family);
	cout<<"HELLO \n enter your user name :\t";
	scanf("%s",c2.username);
	
	ifstream f3("customers",ios :: binary);
	
		if(!f3)
	 {
	   cout<<"error in opening customer binary file";
	   exit(1);
	 }
	 
	while(!f3.eof())
	{
		f3.read((char *)&c1, sizeof(struct customer));
		if(strcmp(c1.username,c2.username)==0)
		{
			cout<<"\n your user name is used befor.\nplease enter user name:\t";
			scanf("%s",c2.username);
			f3.seekg(0,ios :: beg);
		}
		
	}
	f3.close();
	
	cout<<"enter your password:\t";
	scanf("%s",c2.password);
	cout<<"enter the user name of your moaref (if you do not have just enter 0):\t";
	scanf("%s",c2.moaref);
	cout<<"enter your phone number:\t";
	scanf("%s",c2.phone);
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
                       	return 1;
				}
				else cout<<"your password was false\n you can try "<<2-i<<"times"<<endl;
			 }
			 cout<<"\nyou tried several times\n";
			 return 0;
	 		
		 }
	 }
	 cout<<"\n if you do not want to continue enter n else enter another character";
	 char l;
	 cin>>l;
	 if(l=='n') return 0;
   }
	
}

int main()
{
	int position;
	int b;
	//b=driversazi();
	int a;
	cout<<"enter the number of your position and press enter:\n 1 leder \t 2 driver \t 3 customer \t 4 no psition \n";
	cin>>position;
	switch(position)
	{
		case 1:{
			l=loginleader();
			break;
		}
		case 2:{
			d=logindriver();
			
			tayinsafarranande(d);
			break;
		}
		case 3:{
			c=logincustomer();
			break;
		}
		case 4:{
			
			break;
		}
	}
  
  
  
}
