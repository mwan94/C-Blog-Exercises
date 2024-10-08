// C++ Excersie
// IDE - Visual Studio 2017

#include "stdafx.h"

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	unsigned int numofCandyBars = 0; /* + We are using unsigned int since it is not possible to have a negative number of candy bars sold, we go from 0 and up. 
									    + Using unsigned will save up some memory
										+ Setting the variable to 0 will intialize it  
									*/

	double priceofEachBar = 0;		 /* + We are using double as we could be dealing with fraction of numbers. Ex: $1, $2.5, etc...
										+ Setting the variable to 0 will intialize it 
									*/
	
	double earnings = 0;			/* + We are using double as we could be dealing with fraction of numbers. Ex: $1, $2.5, etc...
										+ Setting the variable to 0 will intialize it  
									*/


	cout << "Student Organization - Candy Bar Earnings:" << endl;
	cout << "------------------------------------------\n" << endl;
	cout << "How many bars did the student org. sell? - Please Enter a Value: " << endl;
	cin >> numofCandyBars; //whatever values the user inputs for the number of candy bars will be stored in numofCandyBars
	cout << endl;
	cout << "For how much did the student org. sell each bar? - Please Enter a Value" << endl;
	cin >> priceofEachBar; //whatever values the user inputs for the price of a candy bar will be stored in priceofEachBar
	cout << endl;

	//Now we will calculate the earnings
	earnings = numofCandyBars * priceofEachBar;
	cout << "The Student Org. raised: $" << earnings << "" << endl;
	cout << "Thank you for using the earning calculator!\n";


    return 0;
}

