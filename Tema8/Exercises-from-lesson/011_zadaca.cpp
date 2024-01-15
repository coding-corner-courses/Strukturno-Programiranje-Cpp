#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

//Задача 11
//Напиши програма која ќе овозможи внесување матрица од карактери со големина n.
//Програмата треба да овозможи и внесување на стринг/низа од карактери со големина n
//и треба да провери дали внесениот стринг се совпаѓа со зборот кој што лежи на главна
//дијагонала или споредна дијагонала. Резултатот да се отпечати.

//Пр. n=4
//
//    h   a   f   s
//    l   o   s   w
//    u   z   m   q
//    g   c   a   e
//
//    word=home


void insertMatrix(char matrix[][10], int n)
{

    for(int i=0; i<n; i++)
    {

        for(int j=0; j<n; j++)
        {

            char character;

            cin>>character;

            matrix[i][j]=character;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    char matrix[10][10];

    insertMatrix(matrix, n);

    char word[10];

    cin>>word;

    char mainDiagonal[10];
    char secondaryDiagonal[10];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){

            if(i==j){
                mainDiagonal[i]=matrix[i][j];
            }

            if(i+j==n-1){
                secondaryDiagonal[i]=matrix[i][j];
            }
        }
    }

    mainDiagonal[n]='\0';
    secondaryDiagonal[n]='\0';

    if(strcmp(word, mainDiagonal)==0 || strcmp(word, secondaryDiagonal)==0){
        cout<<"The word is on main/secondary diagonal"<<endl;
    }

    return 0;
}
