#include<iostream>
using namespace std;

// Задача 1
//Да се напише програма каде преку тастатура ќе се внесат две променливи numberOfBooks и numberOfPencils.
//Програмата е потребно да ги замени нивните вредности со помош на функција swap.
//Резултатот да се отпечати.

//Input:
//numberOfBooks =5;
//numberOfPencils= 65
//Output:
//numberOfBooks =65;
//numberOfPencils= 5

void swapValues(int *value1, int *value2)
{
    int temp = *value1;
    *value1 = *value2;
    *value2 = temp;
}

int main()
{

    int numberOfBooks, numberOfPencils;

    cin>>numberOfBooks>>numberOfPencils;

    cout<<"Number of books: "<<numberOfBooks<<endl;
    cout<<"Number of pencils: "<<numberOfPencils<<endl;

    cout<<"SWAP"<<endl;

    swapValues(&numberOfBooks, &numberOfPencils);

    cout<<"Number of books: "<<numberOfBooks<<endl;
    cout<<"Number of pencils: "<<numberOfPencils<<endl;

    return 0;
}
