#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std ;

int n , m , x , y  ;


int main ()
{
	cin >> n ;

	vector < int > vec(n+1) ;


	for ( int i = 1 ; i <= n ; ++i )
		cin >> vec[i] ;

	cin >> m ;

	for ( int i = 0 ; i < m ; ++i )
	{
		cin >> x >> y ;

		if ( x != 1 )
			vec[x-1] += y-1;

		if ( x != n )
			vec[x+1] += vec[x] - y ;

		vec[x] = 0 ;
	}


	for ( int i = 1 ; i <= n ; ++i )
		cout << vec[i] << endl ;


	return 0 ;
}
