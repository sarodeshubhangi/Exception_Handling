/*
 * Exception_handling.cpp
 *
 *  Created on: 9 Sep 2020
 *      Author: Gaurav
 */

#include "iostream"
using namespace std;

double division(int a,int b){
	if(b==0){
		throw "Divide by zero condition!";
	}
	return a/b;
}
int main()
{
	int a= 50;
	int b=0;
	int z;

	try{
	z= division(a,b);
	cout<<z<<endl;
	}
	catch(const char* msg){
		cerr << msg << endl;
	}
	return 0;
}


