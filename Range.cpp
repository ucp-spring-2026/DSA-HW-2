/****  Q4. Design a template class Range<T> in C++ that represents a numeric range and checks whether a given value falls within that range.
Your class should:
•	Store two values of generic type T representing the minimum and maximum of the range, passed through the constructor.
•	Provide the following member function: 
o	contains(T value) → Returns true if the given value lies within the range (inclusive), and false otherwise.
In your main() function, demonstrate the class by:
•	Creating a Range<int> object and checking whether several integer values fall inside the range.
•	Creating a Range<double> object and checking whether several decimal values fall inside the range.
•	Creating a Range<char> object and checking whether certain characters fall within a character range (e.g., 'A' to 'Z').
**/#include <iostream>
using namespace std;

template <class T>
class Range
{
	T maximum;
	T minimum;
public:
	Range(T max, T min)
	{
		maximum = max;
		minimum = min;
	}
	bool check(T val)
	{
		if (val >= minimum && val <= maximum)
		{
			cout << "Value does lie in the range." << endl;
			cout << "Value:" << val << endl;
			return true;
		}
		else
		{

			cout << "Value does not lie in the range." << endl;
			cout << "Value:" << val << endl;
			return false;
		}
	}


};


int main()
{
	Range <int> r(1922,-1022);
	r.check(3551);
	Range <double> r1(25, -25);
	r1.check(12);
	Range <int> r2(100, 0);
	r2.check(23);
	Range <char> r3('Z', 'A');
	r3.check('N');
	return 0;
}

