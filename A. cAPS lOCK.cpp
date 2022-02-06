#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>
#include<math.h>
#include<cmath>

using namespace std ;

string str1 ;

int main ()
{
    cin >> str1 ;

    int sizee = str1.size() ;

    for ( int i = 1 ; i < sizee ; ++i )
    {
        if ( str1[i] >= 'a' && str1[i] <= 'z' )
        {
            cout << str1 << endl ;
            return 0 ;
        }
    }

    if ( str1[0] >= 'a' && str1[0] <= 'z' )
        str1[0] -= 32 ;

    else if ( str1[0] >= 'A' && str1[0] <= 'Z' )
        str1[0] += 32 ;



    for ( int i = 1 ; i < sizee ; ++i )
        str1[i] += 32 ;

    cout << str1 << endl ;

    return 0 ;
}
