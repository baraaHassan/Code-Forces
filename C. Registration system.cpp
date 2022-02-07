#include<iostream>
#include<map>
#include<string>

using namespace std ;


map < string , int > m ;

string str ;

int size ;


void count ( int m  )
{
    size = 10 ;

    while ( true )
    {

        if ( m / (size*10) == 0 )
            break ;

        size *= 10 ;

    }


}

void siz ( int m ) 
{
    string bs = "" ;

    int n ;

    while ( size != 0 )
    {
        n = m / size ;

        bs += n + 48 ;

        m -= n * size ;

        size /= 10 ;
    }

    str += bs ;
}



int main ()
{
    int size ;

    cin >> size ;

    string sr ;

    char ch ;

    for ( int i = 0 ; i < size ; i++ )
    {

        cin >> sr ;

        str = sr ;

        if ( m[sr] > 0 )
        {
            
            if ( m[sr] < 10 )
            {
                
                ch = m[sr] + 48 ;

                str += ch ;

            }
            
            else
            {

                count ( m[sr] ) ;
                
                siz ( m[sr] ) ;

            }

            cout << str << endl ;

        }

        else
            cout << "OK" << endl ;

        m[sr]++;

    }

    return 0 ;

}
