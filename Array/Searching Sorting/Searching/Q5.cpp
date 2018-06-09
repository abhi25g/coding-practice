#include<iostream>
using namespace std;
int main()
{
	int *a1 = NULL, *a2 = NULL, *a3 = NULL, s1, s2, s3, i, j, k;
	cout << "\nEnter the size of array 1 ";
	cin >> s1;
	a1 = new int[s1];
	cout << "\nEnter the first sorted array ";
	for( i=0; i < s1; i++)
		cin >> a1[i];
	cout << "\nEnter the size of array 2 ";
	cin >> s2;
	a2 = new int[s2];
	cout << "\nEnter the second sorted array ";
	for( i=0; i < s2; i++)
		cin >> a2[i];
	cout << "\nEnter the size of array 3 ";
	cin >> s3;
	a3 = new int[s3];
	cout << "\nEnter the third sorted array ";
	for( i=0; i < s3; i++)
		cin >> a3[i];
	i = 0;
	j = 0;
	k = 0;
	cout << "\nThe common elements of the three arrays are ";
	while(i < s1 && j < s2 && k < s3)
	{
		if(a1[i] == a2[j] && a2[j] == a3[k])
		{
			cout << a1[i]<<" ";
			i++;
			j++;
			k++;
		}
		else if(a1[i] < a2[j])
			i++;
		else if(a2[j] < a3[k])
			j++;
		else
			k++;
	}
}
