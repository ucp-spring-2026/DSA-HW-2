
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

#include<iostream>
using namespace std;

template <typename T>
class Comparator {

	T v1;
	T v2;
public:

	Comparator(T v1, T v2);
	bool isGreater();
	bool isLess();
	bool isEqual();
	T get(int index);

};

//write function definitions of the class here
template <typename T>
Comparator<T>::Comparator(T v1, T v2)
{
	this->v1 = v1;
	this->v2 = v2;

}
template <typename T>
bool Comparator<T> ::isGreater()
{
	if (v1 > v2)
	{
		cout << v1 << " is greater." << endl;
		return true;
	}
	else
	{
		cout << v2 << " is greater." << endl;
		return false;
	}
}
template <typename T>
bool Comparator<T> ::isLess()
{
	if (v1 < v2)
	{
		cout << v1 << " is lesser." << endl;
		return true;
	}
	else
	{
		cout << v2 << " is lesser." << endl;
		return false;
	}
}
template <typename T>
bool Comparator <T> ::isEqual()
{
	if (v1 == v2)
	{
		cout << "Both are equal." << endl;
		return true;
		
	}
	else
	{
		cout << "Both are unequal." << endl;
		return false;
	}
}


//Complete the main function code
int main()
{
Comparator<int> c1(5, 8);
	//............. complete it
c1.isGreater();
c1.isLess();
c1.isEqual();

	Comparator<double> c2(5.5, -1.3);
	//......................complete it
	c2.isGreater();
	c2.isLess();
	c2.isEqual();

	Comparator<char> c3('d', 'D');
	c3.isGreater();
	c3.isLess();
	c3.isEqual();

	//......................complete it
	return 0;
}
