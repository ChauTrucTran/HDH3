#include<stdio.h>
#include<unistd.h>

struct PHANSO;
{
	int TS;
	int MS;
};

void NhapPS(PHANSO &x)
{
	cout<<"Nhap Tu So:"; cin>>x.TS;
	do
	{
		cout<<"Nhap Mau So:";
		cin>>x.MS;
		if(x.MS==0)
			cout<<"Nhap sai, yeu cau nhap lai mau so:";
	}while(x.MS==0);
}

void XuatPS(PHANSO x)
{
	cout<<x.TS<<"/"<<x.MS;
}


	
