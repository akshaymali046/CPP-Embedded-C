#include<iostream>
using namespace std;
int sum (int ,int=0,int=0);
int main(){
    int a,b;
    cin>>a>>b;
    int s=sum(a,b);
    cout<<"sum output a,b"<<s;
    int c;
    cin>>c;
    int s1=sum(a,b,c);
    cout<<"sum output a,b,c"<<s1;
    int s2=sum(c);
    cout<<"sum output c"<<s2;    
    return 0;
}
int sum(int x,int y,int z){
       return (x+y+z);
}