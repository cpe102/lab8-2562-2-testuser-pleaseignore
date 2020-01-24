#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	int year=1;
	float initialloan=0.00,interestrateperyear=0.00,Enteramountyoucanpayperyear=0.00,imainterest=0.00,atarashiippy=0.00;
	cout << "Enter initial loan : ";
	cin >> initialloan;
	cout << "Enter interest rate per year (%): ";
	cin >> 	interestrateperyear;
	cout << "Enter amount you can pay per year : ";
	cin >> Enteramountyoucanpayperyear;
	
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	for (;;){
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << year; 
	cout << setw(13) << left << initialloan;
	imainterest = (initialloan*interestrateperyear)/100;
	cout << setw(13) << left << imainterest;
	initialloan = imainterest+initialloan;
	cout << setw(13) << left << initialloan;
	if(Enteramountyoucanpayperyear>initialloan){
		 Enteramountyoucanpayperyear=initialloan;
	cout << setw(13) << left <<  Enteramountyoucanpayperyear;
	}else{ cout << setw(13) << left << Enteramountyoucanpayperyear;}
		initialloan=initialloan-Enteramountyoucanpayperyear;

	cout << setw(13) << left << initialloan;
	cout << "\n";	
	year++;
	if(initialloan < 1)break;
	}
	
	return 0;
}
