#include <iostream>
#include "List.h"
using namespace std;

int main()
{
    system("chcp 1251");

    int* arr = new int[10];
    List<Pair> example(10, &arr);
    for (int i = 1; i <= 10; i++)
    {
        arr[i - 1] = i;
    }

    int* arr2 = new int[10];
    List<Pair> example2(10, &arr2);
    for (int i = 3; i <= 12; i++)
    {
        arr2[i - 3] = i;
    }
}