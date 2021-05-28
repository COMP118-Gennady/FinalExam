/** \file FinalExam.cpp
 *  \brief     A little program to manipulate array of integers.
 *  \details   The program reads into the array, sums all elements and makes all elements 0.
 *  \author    Gennady Petrishchev
 *  \version   0.1
 *  \date      2020-2021
 *  \pre       First initialize the system.
 *  \bug       No bugs so far
 *  \copyright University of Nicosia.
 */

#include <iostream>
#include <cassert>
using namespace std;

//Function prototypes
void showMenu();
void readArray(int[]);
void showArray(int[]);
int sumOfArray(int[]);
void nullArray(int[]);

//Global Constants
const int ARRAY_SIZE = 15;

/**
 * The <code>main</code> is the driver function.
 * <BR>
 * @return Returns <code>0</code> upon successful execution and other value if otherwise.
 */
int main()
{
	int choice;
	int array[ARRAY_SIZE];

	do {
		showMenu();
		cin >> choice;
		switch (choice) {
		case 1: readArray(array);
			break;
		case 2: //showArray
			break;
		case 3: //sumOfArray
			break;
		case 4: //nullArray
			break;
		case 5: //Exit
			break;
		default:
			break;
		}
	} while (choice != 5);
}

/**
 * Function <code>showMenu</code> displays the menu that is used from
 * the main program
 * <BR>
 */
void showMenu()
{
	cout << "1) Enter data in array \n";
	cout << "2) Show array \n";
	cout << "3) Sum of all elements of the array \n";
	cout << "4) Make all elements of the array 0 \n";
	cout << "5) Exit \n";
	cout << "Please enter your choice: ";
}

/**
 * Function <code>readArray</code> reads new elements into the array.
 * <BR>
 * @param a An array to be manipulated
 */
void readArray(int a[ARRAY_SIZE])
{
	cout << "Please enter new elements of the array: \n";
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cin >> a[i];
	}
}

