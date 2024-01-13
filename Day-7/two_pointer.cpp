#include <bits/stdc++.h>
using namespace std;

int isPairSum(vector<int>& A, int N, int X)
{
	
	int i = 0;

	int j = N - 1;

	while (i < j) {
		if (A[i] + A[j] == X)
			return 1;

		else if (A[i] + A[j] < X)
			i++;

		else
			j--;
	}
	return 0;
}


int main()
{
	vector<int> arr = { 2, 3, 5, 8, 9, 10, 11 };

	int val = 17;

	int arrSize = arr.size();

	sort(arr.begin(), arr.end());
	cout << (isPairSum(arr, arrSize, val) ? "True"
										: "False");

	return 0;
}
