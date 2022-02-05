/******************************************************************************

Online C++ Compiler.
Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector>

using namespace std;

long long n, h, a, b, timee, diff;

int k;

vector <vector<int>> vecTower;

int main()
{
	cin >> n >> h >> a >> b >> k;

	vecTower = vector<vector<int>>(k);

	for (int i = 0; i < k; ++i)
	{
		vecTower[i] = vector<int>(4);

		for (int j = 0; j < 4; ++j)
		{
			cin >> vecTower[i][j];
		}
	}

	for (int i = 0; i < k; ++i)
	{
		timee = 0;

		diff = vecTower[i][0] - vecTower[i][2];

		if (diff < 0)
			diff *= -1;

		timee += diff;

		if ( timee != 0 && !(vecTower[i][1] >= a && vecTower[i][1] <= b || vecTower[i][3] >= a && vecTower[i][3] <= b || vecTower[i][1] <= a && vecTower[i][3] >= b || vecTower[i][1] >= a && vecTower[i][3] <= b))
		{
			long long comparer = 1000000000;
			for (int j = 0; j < 2; ++j)
			{
				diff = vecTower[i][j * 2 + 1] - a;

				if (diff < 0)
					diff *= -1;

				if (comparer > diff)
				{
					comparer = diff;
				}

				diff = vecTower[i][j * 2 + 1] - b;

				if (diff < 0)
					diff *= -1;

				if (comparer > diff)
				{
					comparer = diff;
				}
			}

			timee += 2 * comparer;
		}

		diff = vecTower[i][1] - vecTower[i][3];

		if (diff < 0)
			diff *= -1;

		timee += diff;

		cout << timee << endl;
	}

	return 0;
}
