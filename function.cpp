#include<iostream>
using namespace std;
int main(){
    void fun();
    cout<<"main output";
    fun();
    return 0;
}
void fun(){
       cout<<"fun output";
}