#include<iostream>
using namespace std;
inline void fun();
int main(){
    cout<<"main output";
    fun();
    return 0;
}
void fun(){
       cout<<"fun output";
}