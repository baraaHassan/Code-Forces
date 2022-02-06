#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include<map>

using namespace std ;


string str1 ;

int size1 ;

map<char,bool> m ;

int main ()
{
    cin >> str1 ;

    size1  = str1.size();

    for ( int i = 0 ; i < size1 ; ++i )
        m[str1[i]] = true ;

    if ( m.size() % 2 == 0 )
        cout << "CHAT WITH HER!" << endl ;

    else
        cout << "IGNORE HIM!" << endl ;

    return 0 ;
}
