#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int arr[1000] = { 0 };

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int sum = 0;
	for (int pos = 1; pos < n - 1; pos++)
	{
		//�ˬd����̤j��
		int lmax = *max_element(arr, arr + pos + 1);
		
		//�ˬd�k��̤j��
		int rmax = *max_element(arr + pos, arr + n);
		
		int minmax = min(rmax, lmax);
				
		sum += minmax - arr[pos];
	}
	cout << sum << endl;
	return 0;
}