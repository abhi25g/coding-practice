#include<iostream>
using namespace std;
int main()
{
	int *arr = NULL, size, i, maj = 0, count = 1;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	for( i=1; i < size; i++)
	{
		if(arr[i] == arr[maj])
			count++;
		else
			count--;
		if(count == 0)
		{
			maj = i;
			count = 1;
		}
	}
	count = 0;
	for( i=0; i < size; i++)
	{
		if(arr[i] == arr[maj])
			count++;
	}
	if(count > size/2)
		cout<<"\nThe majority element is "<<arr[maj];
	else
		cout<<"\nNo majority element";
}
