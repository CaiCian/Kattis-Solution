#include <iostream>

using namespace std;

int main()
{
    int room,ppl;
    cin>>room>>ppl;

    int a=(ppl/room);
    int b=(ppl%room);

    for(int i=0; i<(room-b); i++) // room-b line, a ppl
    {
        for(int j=0; j<a; j++){
            cout<<"*";
        }

        cout<<endl;
    }

    for(int i=0; i<b; i++) // b line, a+1 ppl per room
    {
        for(int j=0; j<a+1; j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
