#include<iostream>
using namespace std;
int main()
{
	int *arr = NULL, size, i, swap=0, j;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	i = size-1;
	while(i >= 0 && arr[i] != 0)
		i--;
	j = i-1;
	while(i >= 0 && j >= 0)
	{
		while(j >= 0 && arr[j] != 1)
			j--;
		if(j < 0)
			break;
		swap += i-j;
		arr[i] = 1;
		arr[j] = 0;
		while(i >= 0 && arr[i] != 0)
			i--;
	}
	cout << "\nThe number of swaps required is " << swap;
}
