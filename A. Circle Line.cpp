#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>
#include<math.h>
#include<cmath>

using namespace std ;

int n , s , t , summ , summ2 ;

int main ()
{
    cin >> n ;

    vector < int > vec(n+1) ;

    for ( int i = 1 ; i <= n ; ++i )
    {
        cin >> vec[i] ;

        summ += vec[i] ;
    }
    cin >> s >> t ;

    if ( s == t )
    {
        cout << "0" << endl ;

        return 0 ;
    }

    else if ( s > t  )
        swap ( s , t ) ;

    for ( s ; s < t ; ++s )
        summ2 += vec[s] ;

    t = summ - summ2 ;

    if ( summ2 <= t )
        cout << summ2 << endl ;

    else
        cout << t << endl ;

    return 0 ;
}
