/***  Q2. Write a template class Array<T> in C++ that can store exactly 5 elements of any data type.
Your class should provide the following functionality:
•	set(int index, T value) → Stores a value at the given index. If the index is out of range, display an appropriate message.
•	get(int index) → Returns the value at the given index. If the index is out of range, display an appropriate message.
•	print() → Displays all 5 elements in a single line.
In your main() function, demonstrate the class by:
•	Creating an Array<int> object, storing 5 integer values and printing them.
•	Creating an Array<double> object, storing 5 decimal values and printing them.
**/

include<iostream>
using namespace std;

template <typename T>
class Array{
	
	T arr[5];
	
	public:
	void set(int index, T value);
	T get(int index);
	void print ();	
};

//write function definitions of the class here




//Complete the main function code
int main()
{
	
	
	return 0;
}
