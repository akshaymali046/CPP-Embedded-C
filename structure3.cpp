#include <cstring>
#include<iostream>

using namespace std;

struct book
{
    private: // only accessable in private
    int bookid;
    char title[20];
    float price;

    public:
    void input(){
        cout<<"enter id,title,price";
        cin>>bookid>>title>>price;
        if (bookid < 0) {
           bookid=-1*bookid;
           }
    }

    void display(){
        cout<<bookid<<title<<price;
    }
};

//global defination of structure
int main(){
   book b1;
   b1.input();
   b1.display();
   return 0;
}
