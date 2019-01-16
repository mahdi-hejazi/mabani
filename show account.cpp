#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <fstream>
#include<string.h>
#include<string>
#include<conio.h>
using namespace std;
//system("cls");
struct account
{
	int balance;
	int pass;
	int inventory;//mojodi
};
int main()
{
 struct account a;
 ifstream file1("accounts",ios::binary);
 if(!file1) return 241;
 while(!file1.eof())
 {
 	file1.read((char *)&a,sizeof(struct account));
 	printf("%d\t%d\t%d\n",a.balance,a.pass,a.inventory);
 }
}

