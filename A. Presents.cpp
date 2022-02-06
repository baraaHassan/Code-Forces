#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>

using namespace std ;


string str1 ;

int size1 ;

int n , x ;

int main ()
{
	cin >> n ;

		vector<int>vec (n+1);

		for ( int i = 1 ; i <= n ; ++i )
		{
			cin >> x ;

			vec[x] = i ;
		}

		for ( int i = 1 ; i <= n ; ++i )
		{
			if ( i != 1 )
				cout << " " ;

			cout << vec[i] ;
		}

		cout << endl ;
  
	return 0 ;
}
