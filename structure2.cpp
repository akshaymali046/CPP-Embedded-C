#include <cstring>
#include<iostream>

using namespace std;

struct book{
    int bookid;
    char title[20];
    float price;
};

void display(book);
book input();
//global defination of structure
int main(){
   book b1;
   b1=input();
   display(b1);
}
void display(book b){
  cout<<b.bookid<<b.title<<b.price;
}

book input(){
   cout<<"enter bookid,title,price";
   book b;
   cin>>b.bookid>>b.title>>b.price;
   return(b);
}