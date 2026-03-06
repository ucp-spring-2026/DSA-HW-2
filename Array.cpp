
#include<iostream>
using namespace std;

template <typename T>
class Array {

	T arr[5];

public:
	void set(int index, T value);
	T get(int index);
    void print();
};
template <typename T>
void  Array<T> ::set(int index, T value)
{
	if (index >= 5)
	{
		cout << "Index is out of array size.the value cannot be allocated to the index." << endl;
		return;
	}

		arr[index] = value;
		index++;

}
//write function definitions of the class here
template <typename T>
T Array<T> ::get(int index)
{
	if (index >= 5)
	{
		cout << "Index is out of array size.there is no value at this index." << endl;
		return -1;
	}

	return arr[index];
}
template <typename T>
void Array<T> ::print()
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Complete the main function code
int main()
{
	Array<int> A;
	A.set(3, 45);
	A.set(2, 49);	
	A.set(0, 41);
	A.set(1, -23);
	A.set(4, 9912);
	cout << "Value at the index no.4:" << A.get(4) << endl;
	cout << "Value at the index no.2:" << A.get(2) << endl;
	
	A.print();


	return 0;
}
