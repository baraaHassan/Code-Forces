#include<iostream>

using namespace std ;

int x , countt , odds , y ;

int main ()
{
    cin >> x ;

    while ( /*2 * y <*/ x )
    {


        if ( x % 2 == 1 )
            ++odds ;

        x /= 2 ;

    }

    cout << odds << endl ;

    return 0 ;
}
