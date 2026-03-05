/***   Q1. Design a template class Counter<T> in C++ that can track and increment a count value of any numeric type.
Your class should:
•	Store a single value of generic type T initialized through the constructor.
•	Provide the following member functions: 
o	increment() → Increases the count value by 1.
o	getValue() → Returns the current count value.
In your main() function, demonstrate the class by:
•	Creating a Counter<int> object with an initial value and calling increment() multiple times, displaying the result after each increment.
•	Creating a Counter<double> object with a decimal starting value and incrementing it, displaying the result.
•	Creating a Counter<float> object and demonstrating the same behavior
***/


#include<iostream>
using namespace std;

template <typename T>
class Counter
{
	T value;
public:

	Counter(T v);
	void increment();
	T getValue();

};

template <typename  T>
Counter<T>::Counter(T v)
{
	cout << "Before increment:" << v << endl;
	value = v;
	//complete the missing code
}

template <typename  T>
void Counter<T>::increment()
{
	//complete the missing code
	value++;
}


template <typename T>
T  Counter<T>::getValue()
{
	//complete the missing code
	cout << "After increment:";
	return value;
}

int main()
{
	Counter<int> int_counter(4);
	int_counter.increment();
	cout << int_counter.getValue() << endl;
	Counter <float> float_counter(5.0);
	float_counter.increment();
	cout << float_counter.getValue() << endl;
	// complete the rest of the code as given in Q1
	Counter <double> double_counter(6.87);
	double_counter.increment();
	cout << double_counter.getValue() << endl;
	double_counter.increment();
	cout << double_counter.getValue() << endl;
	return 0;
}
