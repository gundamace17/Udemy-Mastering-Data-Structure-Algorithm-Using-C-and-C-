// Quiz1 Question5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void count(int n)
{
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if (n > 1) count(n - 1);
    printf("%d", d);
}

int main()
{
    count(3);
    return 0;
}

