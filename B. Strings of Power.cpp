# include <iostream>
# include <string>
#include <vector>

using namespace std ;


bool yes ;

unsigned long long  size , s , h , m ; 

string x = "heavy" , y="metal" ;

vector <unsigned long long> vec , vec1  ;



void countly ( string str , unsigned long long size )
{

    for ( unsigned long long i = 0 ; i < size ; i++ )
    {
        if ( str[i] == 'h' )
        {
            if ( size - 5 - i >= 5 )
            {
                int j ;

                for ( j = i + 1 ; j < i+5 ; j++ )
                {
                    if ( str[j] != x [j-i] )
                    {
                        break ;
                    }
                }

                if ( j == i + 5 )
                {
                    vec.push_back (i) ;

                    i = j - 1 ;

                }
            }
        }
        else if ( str[i] == 'm' )
        {
            if ( size - i - 5 >= 0 )
            {
                int j ;

                for ( j = i + 1 ; j < i+5 ; j++ )
                {
                    if ( str[j] != y [j - i] )
                        break ;
                }

                if ( j == i + 5 )
                {

                    vec1.push_back(i);

                    i = j - 1 ;

                }

            }
        }
    }

}

void assignly ()
{

    size = 0 ;

    s = 0 ;

    h = vec.size() ;

    m = vec1.size() ;

    yes = true ;
}

void resultly ()
{
    for ( unsigned long long i = 0 ; i < m ; i++ )
    {
        for ( unsigned long long j = s ; j < h ; j++ )
        {
            if ( ( vec[j] > vec1[i] ) )
            {
                if ( j > 0 )
                {
                s = j ;

                size += j ;

                break ;
                
                }
                else
                {
                    break ;
                }

            }

            else
            {

                if ( j == ( h - 1 ) )
                {
                    size += h * ( m - i ) ;
                    i = m ;
                }
            }

        }
    }
}

int main ()
{
    string str ;


    cin >> str ;

    size = str.size() ;

    countly ( str , size ) ;

    assignly () ;

    resultly () ;

    cout << size << endl ;

    return 0 ;

}
