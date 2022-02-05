#include <functional>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int n, temp;

int groups[2];

int main() {

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		cin >> temp;
		
		++groups[temp - 1];
	}

	if (groups[1] >= groups[0])
	{
		cout << groups[0] << endl;
	}

	else
	{
		cout << groups[1] + (groups[0] - groups[1]) / 3 << endl;
	}

	return 0;
}
