#include<iostream>
using namespace std;

int main()
{
	int *arr = NULL, size, i, j, k;
	cout << "\nEnter the size of the array ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	cout<<"\nThe AP triplets are\n";
	for ( i=1; i < size - 1; i++)
	{
		j = i - 1;
		k = i + 1;
		while(j >= 0 && k < size)
		{
			if(arr[j] + arr[k] == 2 * arr[i])
			{
				cout<<arr[j]<<" "<<arr[i]<<" "<<arr[k]<<"\n";
				j--;
				k++;
			}
			else if(arr[j] + arr[k] < 2 * arr[i])
				k++;
			else
				j--;
		}
	}
}
