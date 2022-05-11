#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // ASCII CODE: a=97, h=104
    vector<char> long1,long2;
    char letter;
    
    while(cin>>letter && (int)letter==97)
        long1.push_back(letter);
    
    
    while(cin>>letter && (int)letter==97)
        long2.push_back(letter);
    
    if( long1.size() >= long2.size() )
        cout<<"go";
    else
        cout<<"no";

    return 0;
}
