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


bool checkNumber(int number)
{

    int newNumber = number;

    //ги проверуваме сите цифри на бројот
    while(newNumber !=0)
    {
        int digit = newNumber % 10;

        if(digit % 2 != 0)
        {
            return 0;
        }

        newNumber=newNumber/10;
    }

    return 1;
}

int main()
{
    int m,n;

    cin>>m>>n;

    bool blagBroj = 0;

    for(int i=m; i<=n; i++)
    {

        blagBroj = checkNumber(i);

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
