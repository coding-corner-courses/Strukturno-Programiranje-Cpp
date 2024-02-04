#include<iostream>
#include<cstring>
#include<ctype.h>

using namespace std;

//Задача 11
//Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #.
//Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :,
//па самите цифри подредени според ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void filterNumbers(char line[])
{

    int numbers[100];
    int n=0;

    for(int i=0; i<strlen(line); i++)
    {

        if(isdigit(line[i]))
        {
            numbers[n]=line[i]-'0';
            n++;
        }
    }

    bubbleSort(numbers, n);

    cout<<n<<":";

    for(int i=0; i<n; i++)
    {

        cout<<numbers[i];
    }

    cout<<endl;
}

int main()
{
    char line[100];

    cin.getline(line, 100);

    while(strcmp(line, "#")!=0)
    {

        filterNumbers(line);

        cin.getline(line, 100);
    }

    return 0;
}
