#include<iostream>
using namespace std;
int main()
{
	int *arr = NULL, size, i, sl = 0, sr = 0, max = -100;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
	{
		cin >> arr[i];
		sr += arr[i];
	}
	for( i=0; i < size; i++)
	{
		sl += arr[i];
		if( sr == sl && sr > max)
			max = sr;
		sr -= arr[i];
	}
	cout << "\nThe maximum equilibrium sum is " << max;
}
