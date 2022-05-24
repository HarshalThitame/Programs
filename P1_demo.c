#include<stdio.h>

//Gharakhalch Dukan
int Addition(int No1,int No2) //Function Defination
{	//Block chi Survat

	int Ans=0;				//Local Variable of Addition
	Ans=No1+No2;			//Berij Keli By ALU
	return Ans;				//Jyane Call Kela Tyala Value Dya

}	//Block cha Shewat

//Apla Ghar
int main()
{	//Block chi Survat

	int A=10,B=11,C=0;		//Local Variable of main

	//C Mhanje Rikami Pishwi
	C=Addition(A,B);		//Function call
	printf("%d\n",C);		//Gharchyana Bolun Sanga Ky Zal 
	return 0;

}//Block cha Shewat

