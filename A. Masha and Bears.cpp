#include <functional>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

int n, temp, v1, v2, v3, v4, o1, o2,o3;


int main() {

	cin >> v1 >> v2 >> v3 >> v4;

	o1 = v1; o2 = v2; o3 = v3;

	if (v4 * 2 >= v2)
	{
		o2 = v4 * 2 + 1;
	}

	if (v4 * 2 >= v1)
	{
		o1 = v4 * 2 + 1;
	}

	if (o1 <= o2)
	{
		o1 = o2 + 1;
	}

	if (v3 < v4)
	{
		o3 = v4;
	}

	if (v1 * 2 < o1 || v2 * 2 < o2 || v3 * 2 < o3 || v4 * 2 < o3)
	{
		cout << "-1" << endl;
	}

	else
	{
		cout << o1 << endl << o2 << endl << o3 << endl;
	}

	return 0;
}
