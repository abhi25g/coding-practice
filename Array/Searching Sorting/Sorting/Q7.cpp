#include<iostream>
using namespace std;
int main()
{
	int *arr = NULL, size, i, *b = NULL, temp, f=0;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	b = new int[size-1];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	cout << "\nEnter the moves array ";
	for( i=0; i < size-1; i++)
		cin >> b[i];
	for( i=1; i < size; i++)
	{
		while(arr[i] < arr[i-1])
		{
			if(b[i-1] == 0)
			{
				f++;
				break;
			}
			else
			{
				temp = arr[i];
				arr[i] = arr[i-1];
				arr[i-1] = temp;
				i--;
			}
		}
	}
	for(i = 1; i < size; i++)
	{
		if(arr[i] < arr[i-1])
		{
			f++;
			break;
		}
	}
	if(f)
		cout << "\nNot possible";
	else
		cout << "\nPossible";
}
