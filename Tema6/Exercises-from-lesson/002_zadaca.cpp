#include <iostream>

using namespace std;

// Задача2
//Напиши програма каде преку тастатура се внесува еден број n (n<100), кој претставува должина на низа составена од n природни броеви.
//Внеси n-броеви преку тастатура и отпечати ја добиената низа.
//а. Напиши функција која за ќе ја пронајди сумата на сите броеви во низата. Отпечати ја вратената вредност од функцијата.
//б. Напиши функција која за дадена низа ќе ја пронајди просечната вредност на сите броеви во низата. Отпечати ја вратената вредност од функцијата

int findSum(int numbers[], int n){

    int sum=0;

    for(int i=0; i<n; i++){
        sum+=numbers[i];
    }

    return sum;
}

float findAverage(int numbers[], int n){

    int sum = findSum(numbers, n);

    return sum*1.0/n;
}

int main()
{
    int n;

    cin>>n;

    int numbers[n];

    for(int i=0; i<n; i++){

        int number;

        cin>>number;

        numbers[i]=number;
    }

    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
    cout<<"Sum: "<<findSum(numbers, n)<<endl;
    cout<<"Average: "<<findAverage(numbers, n)<<endl;

    return 0;
}
