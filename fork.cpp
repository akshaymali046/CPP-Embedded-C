#include <stdio.h>
#include <stdlib.h>
#define _UNISTD_H    1

/* This is intended as a drop-in replacement for unistd.h on Windows.
 * Please add functionality as neeeded.
 * https://stackoverflow.com/a/826027/1202830
 */

#include <stdlib.h>
#include <process.h> /* for getpid() and the exec..() family */
#include <direct.h> /* for _getcwd() and _chdir() */
#include <sys/types.h>
#include<iostream>
using namespace std;
#include <stdint.h>
typedef int32_t pid_t;
/* global initialized variable in data segment */
int a = 10;
/* global uninitialized variable in BSS segment */
int b;
int c;
int
main (int argc, char *argv[])
{
/* local variable c in Stack segment or in reg */
int c;
pid_t retval;
b = 20;
c = 30;
retval =  getpid();
if (retval == 0)
{
cout<<"fork returned"<< retval << "So this is the child process\n";
cout<<"Original Variables:"<<a<<b<<c<<"\n";
a = 15;
b = 25;
c = 35;
cout<<"new Variables:"<<a<<b<<c<<"\n";
return (0);
}
else{
cout<<"fork returned"<< retval << "So this is the child process\n";
cout<<"Original Variables:"<<a<<b<<c<<"\n";
a = 115;
b = 125;
c = 135;
cout<<"new Variables:"<<a<<b<<c<<"\n";
return (0);   
}
}