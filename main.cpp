#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include"system.h"
using namespace std;

int main()
{
	int i = 0;
	int j;
	int K;
	int Ra,Rb;
	float score;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "Failed opening" << endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		 cerr << "Filed opening" << endl;
		 exit(1);
	}
	inFile >> K >> Ra >> Rb;
	System sys1;
	sys1.setK(K);
	sys1.setRa(Ra);
	sys1.setRb(Rb);
	outFile << sys1.getRa() <<"\t"<< sys1.getRb() << endl;
	while(inFile >> score){
		sys1.calculate(score);
		outFile << sys1.getRa() <<"\t"<< sys1.getRb() << endl;
	}
}
