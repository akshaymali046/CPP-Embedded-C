#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x=5;
    int *p = &x;
    int &s = x;
    s++;
    cout<<"pointer output "<<p<<endl;
    cout<<"reference output "<<s<<endl;
    return 0;
}
