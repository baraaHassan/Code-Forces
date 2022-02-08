#include <iostream>
#include<vector>

using namespace std;

int input;

int grade;

int n;

int count_ = 1;

vector<int> students;

int main()
{
    cin >> n ;
    
    students = vector<int>(n);
    
    for ( int j = 0 ; j < 4 ; ++j )
    {
        cin >> grade;
        students[0] += grade;
    }
    
    for ( int i = 1 ; i < n ; ++i )
    {
        for ( int j = 0 ; j < 4 ; ++j )
        {
            cin >> grade;
            students[i] += grade;
        }
        
        if ( students[i] > students[0] )
        {
            ++count_;
        }
    }    
    
    cout << count_ << endl;
    return 0;
}
