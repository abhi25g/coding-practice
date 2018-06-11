#include<iostream>
using namespace std;

int fix(int *arr, int size)
{
	int s=0,e=size-1, mid;
	while( s <= e)
	{
		mid = (s + e)/2;
		if(arr[mid] == mid)
		{
			return mid;
		}
		else if(arr[mid] > mid)
			e = mid - 1;
		else
			s = mid + 1;
	}
	return -1;
}

int main()
{
	int *arr = NULL, size, i;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	cout<<fix(arr,size);
}
