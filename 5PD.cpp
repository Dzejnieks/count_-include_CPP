//============================================================================
// Name        : 5PD.cpp
// Author      : Aksels Skvorcovs
// Version     :
// Copyright   : 
// Description : 5.Dots teksta fails, kurā atrodas sintaktiski pareizs
//					C++ programmas teksts. Uzrakstīt programmu, kura saskaita,
//					cik dažādu bibliotēku (#include)iekļauts dotajā programmā.
//					Drīkst uzskatīt, ka programmas tekstā nav komentāru un ka
//					attiecīgie simboli neparādīsies teksta konstantēs.
//============================================================================

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    std::ifstream filein ("progtxt.txt");
    string word;
    string include="#include";
    int skaits=0;
    while(filein.good()){
    	filein>>word;
    	if(!word.find(include)){
    		cout<<word<<endl;
    		skaits++;
    	}
    }
    cout<<"izmantoto biblioteku skaits programma ir: "<<skaits<<endl;

    return 0;
}
