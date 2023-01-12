#include <cstring>
#include<iostream>
using namespace std;

struct book{
    int bookid;
    char title[20];
    float price;
};

void display(book);

//global defination
int main(){
   book b1={450,"andrew Ng",0.0};

   book b2;
   b2.bookid=301;
   strcpy(b2.title,"cpp");//b2.title="cpp"; it will give error;
   b2.price = 45.9;

   book b3=b2;

   display(b1);
   display(b2);
   display(b3);

}
  
void display(book b){
  cout<<b.bookid<<b.title<<b.price;
}