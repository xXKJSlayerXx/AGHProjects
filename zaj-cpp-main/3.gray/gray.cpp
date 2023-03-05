
/***************************************************************
*
* Plik gray.cpp
*
* Autorzy: Bartosz Gnatowski, Konrad Jurczyk
*
***************************************************************/
#include <string>
#include "gray.h"


//-------------------------------------------------------------

// Funkcja do uzupe�nienia
// Zamienia liczb� ca�kowit� x w naturalnym kodzie binarnym na liczb� w kodzie Graya

unsigned long int Bin2Gray( unsigned long int x )
{
	unsigned long int b = x>>1;
	return b^x;
}

//-------------------------------------------------------------

// Funkcja do uzupe�nienia
// Zamienia liczb� ca�kowit� x w kodzie Graya na liczb�  naturalnym kodzie binarnym

unsigned long int Gray2Bin( unsigned long int x )
{
	int iloscJedynek = 0;
	int i = (8*sizeof(unsigned long int)-1);
	unsigned long int maska = 1UL << i;
	std::string bin;

	for(i; i >= 0; i--){
		bool c = x&maska;
		if(c) iloscJedynek++;
		if(iloscJedynek%2!=0)
			bin+='1';
		else
			bin+='0';
		maska >>= 1;
	}
	return std::stoul(bin,nullptr,2);
}

//-------------------------------------------------------------
