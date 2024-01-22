#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, temp;

	// get array size from user
	cout << "Please Enter Size of Array: ";
	cin >> n;

	vector<int> A(n);

	cout << endl;

	// get value from user for array
	for (int i = 0; i < n; i++)
	{
		cout << "Please Enter Value for " << i + 1 << ". Element: ";
		cin >> A[i];
	}

	// use insertion sort
	for (int i = 1; i < n; i++)
	{
		temp = A[i];
		int j = i - 1;

		while (j >= 0 && (A[j] > 0 && A[j] > temp))
		{
			A[j + 1] = A[j];
			j = j - 1;
		}

		A[j + 1] = temp;
	}


	cout << endl;

	// write array on the screen
	cout << "Sorted Array is: ";
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}