#include <iostream>

using namespace std;

//Задача 6
//Напиши програма која преку тастатура ќе овозможува да се внесат три променливи x, y и z.
//Искористи еден израз за дa доделиш нова вредност во променливата “result”, така
//што доколку z е поголемо од 15, резултатот ќе биде збирот на x и y. Во спротивно резултатот ќе биде разликата на x и y.
//Прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор).

int main()
{

    int x, y, z;

    cin>>x>>y>>z;

    int result = z > 15 ? x+y : x-y;

    cout<<"The result is: "<<result;

    return 0;
}
