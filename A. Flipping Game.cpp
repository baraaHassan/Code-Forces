#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std ;

int n , maxx , summ , s ;

int main ()
{
    cin >> n ;

    vector < int > vec(n) ;

    for ( int i = 0 ; i < n ; ++i )
    {
        cin >> vec[i] ;

        if ( vec[i] == 1 )
            ++summ ;
    }


    for ( int i = 0 ; i < n ; ++i )
    {
        if ( vec[i] == 0 )
        {
            ++s ;

            if ( maxx < s )
                maxx = s ;
        }

        else
        {
            if ( s != 0 )
                --s;
        }
    }

    if ( maxx != 0 )
        cout << summ + maxx << endl ;

    else
        cout << summ - 1 << endl ;

    return 0 ;
}
