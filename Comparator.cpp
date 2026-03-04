/***  Q3. Design a template class Comparator<T> in C++ that can compare two values of any data type.
Your class should:
•	Store two values of generic type T passed through the constructor.
•	Provide the following member functions: 
o	isGreater() → Returns true if the first value is greater than the second.
o	isLess() → Returns true if the first value is less than the second.
o	isEqual() → Returns true if both values are equal.
In your main() function, demonstrate the class by:
•	Creating a Comparator<int> object with two integer values and displaying the comparison results.
•	Creating a Comparator<double> object with two decimal values and displaying the comparison results.
•	Creating a Comparator<char> object with two characters and displaying the comparison results.
**/

include<iostream>
using namespace std;

template <typename T>
class Comparator{
	
	T v1;
	T v2;	
	public:
	
	Comparator(T v1,T v2);
	bool isGreater();
	bool isLess();
	bool isEqual();
	T get(int index);
		
};

//write function definitions of the class here




//Complete the main function code
int main()
{
	Comparator<int> c1(5,8);
	//............. complete it
	
	
	Comparator<double> c1(5.5,-1.3);
	//......................complete it
	
	Comparator<char> c1('d','D');
	//......................complete it
	return 0;
}
