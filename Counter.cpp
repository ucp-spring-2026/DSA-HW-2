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
Counter<T>::Counter(int v)
{
	//complete the missing code
	
}

template <typename  T>
void Counter<T>::increment()
{
	//complete the missing code
}


template <typename T>
T  Counter<T>::getValue()
{
	//complete the missing code
	
}

int main()
{
	Counter<int> int_counter(4);
    int_counter.increment();
	cout<<int_counter.getValue();
	
	// complete the rest of the code as given in Q1
	
	
}