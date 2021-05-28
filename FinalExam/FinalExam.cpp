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
void showArray(const int[]);
int sumOfArray(const int[]);
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
	int array[ARRAY_SIZE] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	do {
		showMenu();
		cin >> choice;
		switch (choice) {
		case 1: readArray(array);
			break;
		case 2: showArray(array);
			break;
		case 3: cout << sumOfArray(array) << endl;
			break;
		case 4: nullArray(array);
			break;
		case 5: cout << "Goodbye!";
			break;
		default: cerr << "Invalid choice! Please try again \n";
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
	cout << endl;
}

/**
 * Function <code>showArray</code> displays elements of the array.
 * Assumed that the array is initiliased
 * <BR>
 * @param a An array to be displayed
 */
void showArray(const int a[ARRAY_SIZE])
{
	for (int i = 0; i < ARRAY_SIZE; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

/**
 * Function <code>sumOfArray</code> computes the sum of all elements in the array.
 * Assumed that the array is initiliased
 * <BR>
 * @param a An array to be summed
 * @return sum Result of the addition
 */
int sumOfArray(const int a[ARRAY_SIZE])
{
	int sum = 0;
	for (int i = 0; i < ARRAY_SIZE; i++) {
		sum += a[i];
	}
	return sum;
}

/**
 * Function <code>nullArray</code> turns all elements into 0 in the array.
 * <BR>
 * @param a An array to be manipulated
 */
void nullArray(int a[ARRAY_SIZE])
{
	for (int i = 0; i < ARRAY_SIZE; i++) {
		a[i] = 0;
	}
	cout << "The array has been nullified! \n";
}

