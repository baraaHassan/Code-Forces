#include <iostream>
#include<map>
#include<vector>

using namespace std;

map < long long , vector < int > > mp ;

vector < long long > vec ;

int index1 , index2 , n ;

long long sum , sum2 ;

bool check ()
{
    if ( sum % 3 == 0 )
    {
        sum /= 3 ;

        return true ;
    }

    else
        return false ;
}

void fun ()
{
    int size1 , size2 ; index1 = 0 ;

    size1 = mp[sum].size() ;

    size2 = mp[sum*2].size() ;

    while (true)
    {
        if (index1 != size1 && index2 != size2)
        {
            if(mp[sum][index1] < mp[sum*2][index2])
            {
                sum2 += size2 - index2  ;

                ++index1 ;
            }

            else
            {
                ++index2 ;
            }
        }

        else
            return ;
    }
}

int main()
{
    cin >> n ;

    --n ;

    for ( int i = 0 ; i < n ; ++i )
    {
        cin >> index1 ;

        sum += index1 ;

        mp[sum].push_back(i);
    }

    cin >> index1 ;

    sum += index1 ;


    if ( check() == true && mp[sum].size() != 0 && mp[sum*2].size() != 0 )
    {
        fun () ;

        cout << sum2 << endl ;
    }
    else
    {
     cout << "0" << endl ;
    }

    return 0;
}
