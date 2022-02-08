#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<math.h>
#include<algorithm>
#include<iomanip>
#include<string>

using namespace std ;

string str ;

int n , summ ;

map < string , int > mp ;

map < string , int >::iterator itr ;

vector < int > vec ;

//long long summ ;

void fun ()
{
    int i = 0 ;

    for ( itr = mp.begin() ; itr != mp.end() ; ++itr )
    {
        if ( itr->second == vec[i] )
        {
            ++summ ;

            ++i ;

            if ( i == n || summ == n )
                break ;
        }

    }
    
    if ( summ == n )
        cout << "YES" << endl ;

    else
        cout << "NO" << endl ;
}

int main ()
{
    cin >> n ;

    for ( int i = 1 ; i <= n ; ++i )
    {
        cin >> str ;

        mp[str] = i ;

        cin >> str ;

        mp[str] = i ;
    }

    vector < int > v(n) ;

    vec = v ;


    for ( int i = 0 ; i < n ; ++i )
        cin >> vec[i] ;
    
    fun () ;

    return 0 ;

}
