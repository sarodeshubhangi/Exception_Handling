/*
 * Array.cpp
 *
 *  Created on: 19 Jun 2020
 *      Author: Gaurav
 */
#include "Array.h"
#include "iostream"
using namespace std;

/*Take input from user::
 int main()
{
	int number[5];
	cout<<"Enter the elements to the number"<<endl;
	for(int i=0 ; i<5 ; ++i){
	cin>>number[i];
	}
	cout<<"The numbers are:"<<endl;
	for(int n=0 ; n<5 ; ++n){
		cout<<"number[n]"<<" ";
	}
	return 0;
}*/

//Multidimensional array::

int main() {
    int test[3][2] = {{2, -5},
                      {4, 0},
                      {9, 1}};

    // use of nested for loop
    // access rows of the array
    for (int i = 0; i < 3; ++i) {

        // access columns of the array
        for (int j = 0; j < 2; ++j) {
            cout << "test[" << i << "][" << j << "] = " << test[i][j] << endl;
        }
    }

    return 0;
}





