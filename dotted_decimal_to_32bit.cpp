#include<iostream>
// #include<conio.h>
// PROBLEM: Write a C++ program to translate dotted decimal IP address into 32 bit address.
// OBJECTIVE: To translate dotted decimal IP address into 32 bit address.


using namespace std ;


int  main( int argc , char const *argv[])
	{
	// clrscr();
	int i,j,a[4],bin[8]={128,64,32,16,8,4,2,1};
	cout<<"Enter the ip address : ";
	for(i=0;i<4;i++)
		cin>>a[i];
	cout<<"The ip address is:-"<<a[0]<<"."<<a[1]<<"."<<a[2]<<"."<<a[3]<<endl;

    
	for(i=0;i<4;i++)
		{
		for(j=0;j<8;j++)
			{
			if (a[i]&bin[j])
			cout<<1;
			else
			cout<<0;
			}
		cout<<".";
		}
	// getch();
	}

// 123 32 68 7 