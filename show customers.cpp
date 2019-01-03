#include "login.h"
int main()
{
	struct customer c1;
	ifstream f1("customers",ios :: binary);
	while (!f1.eof())
	{
		f1.read((char *)&c1,sizeof(customer));
		printf("%s\t%s\t%d\t%d\n",c1.username,c1.password,c1.balance,c1.pass);
	}
}
