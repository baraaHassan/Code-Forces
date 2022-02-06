#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>
#include<math.h>
#include<cmath>

using namespace std ;

int n , m  ,  n1 , m1;


int main ()
{
    cin >> n >> m >> n1 >> m1 ;

    vector<int> vec1 , vec2 ;

    if ( n <= m1 )
        cout << "0" << endl ;

    else
    {
        for ( int i = n1 ; i <= n ; ++i )
            for ( int j = m1 ; ( i > j ) && ( m >= j ) ; ++j )
            {
                vec1.push_back(i) ; vec2.push_back(j) ;
            }

    int sizee = vec1.size() ;

    cout << sizee << endl ;

    for ( int i = 0 ; i < sizee ; ++i )
        cout << vec1[i] << " " << vec2[i] << endl ;

    }
    return 0 ;
}
