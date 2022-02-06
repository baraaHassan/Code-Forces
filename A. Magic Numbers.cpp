#include<iostream>
#include<string>
#include<vector>
#include <algorithm>

using namespace std ;


string str1 ;

int size1 ;


void fun ()
{
    size1 = str1.size();

    --size1;

    for ( int i = 0 ; i <= size1 ; ++i )
    { 
        if ( str1[i] == '1')
        {
            if ( i != size1 && str1[i+1] == '4' )
                ++i ;

            if ( i != size1 && str1[i+1] == '4' )
                ++i ;
        }

        else
        {
        cout << "NO" << endl ;

        return ;
        }
    }

    cout << "YES" << endl ;
}

int main ()
{
    cin >> str1 ;

    fun() ;

    return 0 ;
}
