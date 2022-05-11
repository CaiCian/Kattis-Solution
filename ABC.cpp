#include<iostream>
using namespace std;

int main()
{
    int num[3];
    char letter[3]; // ASCII code: a=65, b=66, c=67
    int result[3];
    
    for(int i=0; i<3; i++)
        cin>>num[i];
  
    for(int i=0; i<3; i++)
        cin>>letter[i];
      
    for(int i=0; i<2 ; i++ ){
        for(int j=1; j<=2 ; j++)
        {
            if(num[i]>num[j])
                swap(num[i],num[j]);
        }
    }
    
    for(int i=0; i<3; i++)
    {
        if(letter[i] == 'A')
            result[i]=num[0];
        else if(letter[i] == 'B')
            result[i]=num[1];
        else
            result[i]=num[2];
        
    }
    
    for(int i=0; i<3; i++)
        cout<<result[i]<<" ";
}
