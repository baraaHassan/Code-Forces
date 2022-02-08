#include<iostream>
#include<string>

using namespace std ;

string str , str2 , temp ;

bool at , a , d , o ;

void code ()
{
    int size = str.size() - 1 ;

    //cout << "size = " << str.size() ;

    str2 += str[0] ;

    for ( int i = 1 ; i < size ; ++i )
    {
        //cout << "i = " << i << " " << str[i] << endl ;

        if ( str[i] == 'd' )
        {
            a = 0 ;

            d = 1 ;

            str2 += temp ;

            temp = "" ;

            temp += 'd' ;
        }

        else if ( str[i] == 'a' )
        {
            d = 0 ;

            a = 1 ;

            str2 += temp ;

            temp = "" ;

            temp += 'a' ;
        }

        else if ( d == true && str[i] == 'o' )
        {
            //cout << "else if    i " << i << endl ;

            o = 1 ;

            temp += 'o' ;
        }
        else if ( ( d == true && o == true ) && str[i] == 't' )
        {
            str2 += '.' ;

            temp = "" ;

            d = o = 0 ;
        }

        else if ( ( at == false && a == true ) &&  str[i] == 't' )
        {
            str2 += '@' ;

            at = 1 ;

            temp = "" ;

            a = 0 ;
        }

        else
        {
            //cout << "else" << i << endl ;

            str2 += temp ;

            str2 += str[i] ;

            temp = "" ;

            d = o = a = 0 ;
        }
    }

    str2 += temp ;

    str2 += str[size] ;

}

int main ()
{
    cin >> str ;

    code() ;

    cout << str2 << endl ;
}
