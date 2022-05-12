#include <iostream>
using namespace std;

int main()
{
    int mins[300]; // minutes
    char letter[300]; // identify relevant contest problem
    int yn[300]; // right or wrong
    string a; //right or wrong
    int i=0;
    int count=0; //the number of correct submission
    int tscore=0; // total time score
    
    while(cin>>mins[i] && mins[i]!=-1)
    {
        cin>>letter[i]>>a;
        
        if(a=="right")
        {
            count++;
            yn[i]=1;
        }
        else
        {
            yn[i]=0;
        }
        
        i++;
    }
    
    for(int j=i-1; j>=0; j--) // calculate the time score
    {
        if(yn[j]==1){
            tscore+= mins[j];
            for(int k=j-1; k>=0; k--)
            {
                if(letter[j]==letter[k])
                    tscore+=20;
            }
        }
    }
    
    cout<<count<<'\t'<<tscore;

    return 0;
}
