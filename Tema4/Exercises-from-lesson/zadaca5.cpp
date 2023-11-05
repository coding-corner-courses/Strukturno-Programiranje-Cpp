#include <iostream>

using namespace std;

//Напиши програма каде ќе се избројат колку броеви во рангот од 1-100 завршуваат на 6.
//Резултатот да се отпечати.
int main()
{
    int counter = 0;

    for(int i=0; i<30; i++)
    {
        cout<<i+1;

        if((i+1)%5 == 0)
        {
            cout<<endl;
        }
        else
        {
            cout<<" ";
        }
    }

    return 0;
}
