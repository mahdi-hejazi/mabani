#include "login.h"
int main()
{
	struct customer c1;
	ifstream f1("customers",ios :: binary);
	if(!f1) return 3;
	while (f1.read((char *)&c1,sizeof(customer))!=NULL)
	{
		
		printf("%s\t%s\t%s\t%d\t%d\n",c1.username,c1.phone,c1.password,c1.balance,c1.pass);
	}
	f1.close();
}
