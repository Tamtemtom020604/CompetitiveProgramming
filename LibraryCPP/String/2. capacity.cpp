/*
capacity() = This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.
resize() = This function changes the size of the string, the size can be increased or decreased.
length() = This function finds the length of the string.
shrink_to_fit()	= This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters has to be made.
*/

// C++ Program to demonstrate the working of
// capacity(), resize() and shrink_to_fit()
#include <iostream>
#include <string> // for string class
using namespace std;

// Driver Code
int main()
{
	// Initializing string
	string str = "geeksforgeeks is for geeks";

	// Displaying string
	cout << "The initial string is : ";
	cout << str << endl;

	// Resizing string using resize()
	str.resize(13);

	// Displaying string
	cout << "The string after resize operation is : ";
	cout << str << endl;

	// Displaying capacity of string
	cout << "The capacity of string is : ";
	cout << str.capacity() << endl;

	// Displaying length of the string
	cout << "The length of the string is :" << str.length()
		<< endl;

	// Decreasing the capacity of string
	// using shrink_to_fit()
	str.shrink_to_fit();

	// Displaying string
	cout << "The new capacity after shrinking is : ";
	cout << str.capacity() << endl;

	return 0;
}
