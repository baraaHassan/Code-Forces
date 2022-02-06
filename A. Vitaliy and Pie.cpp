#include<iostream>
#include<map>
#include<vector>
#include<string>
#include <stdio.h>
#include <string.h>

using namespace std ;


vector <unsigned int>::iterator itr ;

int n , alphaar[26] , summ , k ;

char chh ;


void optimum2 ()
{
    for ( int i = 0 ; i < 26 ; ++i )
        alphaar[i] = 0 ;


    cin >> n ;

    --n ;

    for ( int i = 0 ; i < n ; ++i )
    {
        cin >> chh ;

        ++alphaar[chh-'a'] ;

        cin >> chh ;

        k = chh-'A' ;

        if ( alphaar[k] == 0 )
            ++summ;

        else
            --alphaar[k] ;

    }

    cout << summ << endl ;
}




int main ()
{
    optimum2 () ;

    return 0 ;
}
