#include <iostream>
#include <string>

using namespace std;

long long n,count_,zeros,ones;

string firstBits,secondBits;

int main() 
{
    cin >> n;
    
    cin >> firstBits >> secondBits;
    
    for ( int i = 0 ; i < n ; ++i )
    {
        if ( firstBits[i] == '0' )
        {
            ++zeros;
        }
        
        else
        {
            ++ones;
        }
    }
    
    for ( int i = 0 ; i < n ; ++i )
    {
        if ( secondBits[i] == '0' )
        {
            if (firstBits[i] == '1' && ones != 0)
            {
                count_ += zeros;
                --ones;
            }
            
            else if (firstBits[i] == '0' && zeros != 0)
            {
                count_ += ones;
                --zeros;
            }
        }
    }
 
    cout << count_ << endl;
    
    return 0;
}
