#include <iostream>

using namespace std;

//Задача 1.
//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
//Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
//да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
//For example:
//Input    Result
//99 500
//200
int main()
{
    int m,n;

    cin>>m>>n;

    // претпоставуваме дека постои благ број во рангот
    bool blagBroj = 1;

    for(int i=m; i<=n; i++)
    {

        // претпоставуваме дека бројот е благ број
        blagBroj=1;

        int number = i;

        //ги проверуваме сите цифри на бројот
        while(number !=0)
        {
            int digit = number % 10;

            if(digit % 2 != 0)
            {
                blagBroj = 0;
                break;
            }

            number=number/10;
        }

        if(blagBroj==1)
        {
            cout<<i<<endl;
            break;
        }
    }

    if(blagBroj==0)
    {
        cout<<"NE"<<endl;
    }

    return 0;
}
