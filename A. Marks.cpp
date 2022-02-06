#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>

using namespace std ;


string str1 ;

int n , m , maxx , sizz ;

int main ()
{
    cin >> n >> m ;

        vector<string> vec(n+1) ;

        int * arr = new int [n+1] ;

        map < int , bool> mp ;

        for ( int i = 1 ; i <= n ; ++i )
            cin >> vec[i] ;


        for ( int j = 0 ; j < m ; ++j )
        {
            maxx = vec[1][j] ;

            sizz = 1 ;

            arr[sizz] = 1 ;

            for ( int i = 2 ; i <= n ; ++i )
            {
                if ( vec[i][j] > maxx )
                {
                    maxx = vec[i][j] ;

                    sizz = 1 ;

                    arr[sizz] = i ;

                }

                else if ( vec[i][j] == maxx )
                {
                    ++sizz ;

                    arr[sizz] = i ;

                }
            }

            for ( int i = 1 ; i <= sizz ; ++i )
                mp[arr[i]] = true ;
        }

        delete [] arr ;

        cout << mp.size() << endl ;

    return 0 ;
}
