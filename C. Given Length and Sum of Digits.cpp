#include <iostream>
using namespace std;

int lengtth, summ, expected, no_of_nines, reminderr,minuss;


char * maxx,* minn;


int main() {
	// your code goes here

	cin >> lengtth >> summ;

	expected = 9 * lengtth;

	if (summ > 0 &&  summ <= expected)
	{


		maxx = new char[lengtth];

		minn = new char[lengtth];

		int tempSum = summ;

		int itr = 0;

		while (tempSum > 9)
		{
			maxx[itr] = '9';

			tempSum -= 9;

			++itr;
		}

		maxx[itr] = tempSum + '0';

		for (int i = itr+1; i < lengtth; ++i)
		{
			maxx[i] = '0';
		}

		itr = lengtth - 1;

		while (summ > 9)
		{
			minn[itr] = '9';

			summ -= 9;

			--itr;
		}

		if (itr != 0)
		{
			minn[0] = '1';

			minn[itr] = summ -1 + '0';

			for (int i = itr - 1; i > 0; --i)
			{
				minn[i] = '0';
			}
		}

		else
		{
			minn[0] = summ + '0';
		} 

		for (int i = 0; i < lengtth; ++i)
		{
			cout << minn[i];
		}

		cout << " ";

		for (int i = 0; i < lengtth; ++i)
		{
			cout << maxx[i];
		}

		cout << endl;

	}

	else
	{
		if (summ == 0 && lengtth == 1)
		{
			cout << "0 0";
		}

		else
		{
			cout << "-1 -1" << endl;
		}
	}

	return 0;
}
