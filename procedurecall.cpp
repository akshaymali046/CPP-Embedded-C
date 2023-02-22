#include<stdio.h>
#include<iostream>

int shft(int, int);
using namespace std;
int main()
{
int a = 5;
int b = 3;
cout<<a<<" and "<<b;
a = shft(a, b);
cout<<a;
return 0;
}
int shft(int x, int y)
{ return (x << y); }
