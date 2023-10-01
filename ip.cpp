#include <iostream>
#include <string>

// 192 168 123 132
int main() {
    std::string ip;
    std::cout << "Enter The IP address: ";
    std::cin >> ip;

    int a[4] = {0}, i = 0, start = 0;
    for (char c : ip) {
        if (c == '.') {
            a[i++] = std::stoi(ip.substr(start, start - i));
            start = i + 1;
        }
    }
    a[i] = std::stoi(ip.substr(start));

    std::cout << "\nIP ADDRESS: " << a[0] << "." << a[1] << "." << a[2] << "." << a[3] << "\n";
    std::cout << "The IP address is in : ";

    char ipClass = (a[0] >= 0 && a[0] <= 127) ? 'A' :
                   (a[0] >= 128 && a[0] <= 191) ? 'B' :
                   (a[0] >= 192 && a[0] <= 223) ? 'C' :
                   (a[0] >= 224 && a[0] <= 239) ? 'D' : 'E';

    std::cout << "Class " << ipClass;

    return 0;
}
/*
// To determine if the IP address is in Class A, B, C, D or E.
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
	{
	clrscr();
	int a[4],i=0;
	cout<<"Enter The IP address";
	for(i=0;i<4;i++)
		cin>>a[i];
	cout<<"\n IP ADDRESS:"<<a[0]<<"."<<a[1]<<"."<<a[2]<<"."<<a[3]<<"\n";
	cout<<"The IP address is in Class: ";
	if(a[0]>=0 && a[0]<=127)
	cout<<"Class A";
	if(a[0]>127 && a[0]<191)
	cout<<"Class B";
	if(a[0]>191 && a[0]<224)
	cout<<"Class C";
	if(a[0]>224 && a[0]<=239)
	cout<<"Class D";
	if(a[0]>239)
	cout<<"Class E";
	getch();
	}

*/