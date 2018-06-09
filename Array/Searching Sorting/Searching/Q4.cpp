#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int *arr = NULL, size, i, k, key;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	cout << "\nEnter k ";
	cin >> k;
	cout << "\nEnter the number to be searched ";
	cin >> key;
	i = 0;
	while( i < size )
	{
		if( arr[i] == key )
			break;
		else
			i += ceil( abs( key-arr[i] ) / (float)k );
	}
	if( i >= size)
		cout << "\nElement not found";
	else
		cout << "\nElement at index " << i;
}
