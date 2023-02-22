#include <stdio.h>
#include <stdlib.h>
#include<stdio.h>
#include<iostream>

using namespace std;

int main (int argc, char *argv[]){
int i;
i = argc;
cout<<"Function called as: "<<argv[0]<< "\n";
cout<<"with arguments "<<argc-1<< "\n";
for (i = 1; i <argc; i++)
cout<<"Argument" <<i<<"is "<<argv[i]<< "\n";
return 0;
}
