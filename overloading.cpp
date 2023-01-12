#include<conio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int area(int ,int);
float area(int);
int main(){
    system("cls");
    int r ;
    cout << "enter radius of circle:";
    cin>>r;
    float a=area(r);
    cout<<"\n area of circle is : "<<a;
    int l,b;
    cout << "\n enter l,b:";
    cin>>l>>b;
    int c=area(l,b);
    cout<<"\n area of trangle"<<c;
    getch();
}
float area(int x){
    return 3.14*x*x;
}
int area(int x,int y){
    return x*y;
}
