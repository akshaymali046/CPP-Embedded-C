#include<iostream>
using namespace std;
void abs(int x, int* y);

int main(){
   int a=5,b=6;
   cout<<"a address -"<<&a<<endl;
   cout<<"b adress-"<<&b<<endl;
   abs(a,&b);
   cout<<"new adress a -"<<&a<<endl;
   cout<<"new adress b-"<<&b<<endl;  
   return 0;
}


void abs(int x, int* y)
{
cout<<"incoming x -"<<x<<endl;
cout<<"incoming y -"<<y<<endl;      
if(x < 0){
*y = -x;
 cout<<"x -"<<x<<endl;
 cout<<"y -"<<*y<<endl;
 }
else{
*y = x;
 cout<<"x -"<<&x<<endl;
 cout<<"y -"<<&y<<endl;
  }

}

