#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int *arr = NULL, *hash = NULL, size, hsize, i, min, max, one=0, mid;
	cout << "\nEnter the size of the array 1 ";
	cin >> size;
	arr = new int[size];
	cout << "\nEnter the array ";
	for( i=0; i < size; i++)
		cin >> arr[i];
	min = arr[0];
	max = arr[0];
	for( i=1; i<size; i++)
	{
		if(arr[i] > max)
			max = arr[i];
		else if(arr[i] < min)
			min = arr[i];
	}
	if(max == min)
	{
		cout << "\nPossible with value 0";
		getch();
		return 1;
	}
	hsize = max-min+1;
	hash = new int[hsize];
	for( i=0; i<hsize; i++)
	{
		hash[i] = 0;
	}
	for( i=0; i<size; i++)
	{
		hash[arr[i]-min]=1;
	}
	for( i=0; i<hsize; i++)
	{
		if(hash[i])
			one++;
	}
	if(one==2)
	{
		cout << "\nPossible with value " << max-min;
	}
	else if(one > 3)
	{
		cout << "\nNot Possible";
	}
	else
	{
		i=1;
		while(!hash[i])
			i++;
		mid=i+min;
		if(mid-min == max-mid)
		{
			cout << "\nPossible with value " <<max-mid;
		}
		else
		{
			cout << "\nNot Possible";
		}
	}
}
