#include <iostream>

using namespace std;

//Задача7
//Напиши програма која од стандарден влез ќе прочита број на елементи (n<100) што ќе ги содржи една низа од природни броеви.
//Програмата е потребно да провери дали дадената низа е строго растечка, строго опаѓачка или ниту строго растечка ниту строго опаѓачка.
//Резултатот да се испечати.
void fillArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {

        int number;
        cin>>number;

        numbers[i]=number;
    }
}

void printArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
}

bool isStrictlyIncreasing(int numbers[], int n){

    // 1 2 3 4 5
    for(int i=0; i<n-1; i++){

        if(numbers[i] >= numbers[i+1]){
            return 0;
        }
    }

    return 1;
}

bool isStrictlyDecreasing(int numbers[], int n){

    // 5 4 3 2 1
    for(int i=0; i<n-1; i++){

        if(numbers[i] <= numbers[i+1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    int n;

    cin>>n;

    int numbers[n];

    fillArray(numbers, n);
    printArray(numbers, n);

    bool strictlyIncreasing = isStrictlyIncreasing(numbers, n);
    bool strictlyDecreasing = isStrictlyDecreasing(numbers, n);


    if(strictlyIncreasing == 1){
        cout<<"STRICTLY INCREASING"<<endl;
    }
    else if(strictlyDecreasing == 1){
        cout<<"STRICTLY DECREASING"<<endl;
    }
    else {
        cout<<"NOR STRICTLY INCREASING, NOR STRICTLY DECREASING"<<endl;

    }

    return 0;
}
