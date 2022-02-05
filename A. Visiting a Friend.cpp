#include <functional>
#include <queue>
#include <vector>
#include <iostream>

using namespace std;

typedef pair<int, int> iPair;

priority_queue<iPair, vector<iPair>, greater<iPair> > Teleportsdistances;

int NumberOfTeleports, LocationOfFrinedHouse, FarestDistance;

iPair PairOfTeleportDistance, TempPairOfTeleportDistance;

int main() {

	cin >> NumberOfTeleports >> LocationOfFrinedHouse;

	for (int i = 0; i < NumberOfTeleports; ++i)
	{
		cin >> PairOfTeleportDistance.first >> PairOfTeleportDistance.second;

		Teleportsdistances.push(PairOfTeleportDistance);
	}


	PairOfTeleportDistance = Teleportsdistances.top();

	Teleportsdistances.pop();

	if (PairOfTeleportDistance.first != 0)
	{
		cout << "NO" << endl;

		return 0;
	}

	FarestDistance = PairOfTeleportDistance.second;

	if (FarestDistance >= LocationOfFrinedHouse)
	{
		cout << "YES" << endl;

		return 0;
	}

	while (!Teleportsdistances.empty())
	{
		//TempPairOfTeleportDistance = PairOfTeleportDistance;

		PairOfTeleportDistance = Teleportsdistances.top();

		Teleportsdistances.pop();

		if (FarestDistance < PairOfTeleportDistance.first)
			break;

		if (FarestDistance <= PairOfTeleportDistance.second)
		{
			FarestDistance = PairOfTeleportDistance.second;

			if (FarestDistance >= LocationOfFrinedHouse)
			{
				cout << "YES" << endl;

				return 0;
			}
		}
	}

	cout << "NO" << endl;
	
	//system("pause");

	return 0;
}
