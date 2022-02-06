#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>
#include<math.h>
#include<cmath>

using namespace std ;

int n , m  ,  n1 , m1;

map<int,int> mp ;

int main ()
{
	cin >> n >> m >> n1 >> m1 ;

	++mp[n] ; ++mp[m] ; ++mp[n1] ; ++mp[m1] ;

	cout << 4 - mp.size() << endl ;

	//}
	return 0 ;
}
