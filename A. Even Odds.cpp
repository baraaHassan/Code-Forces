#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std ;

long long n , k , h ;


int main ()
{
	cin >> n >> k ;

	h = n - ( n/2 ) ;

	if ( h < k )
		cout << ( k - h ) * 2 << endl ;

	else
		cout << ( k * 2 ) - 1 << endl ;

	return 0 ;
}
