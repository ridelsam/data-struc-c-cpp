#include<iostream>
#include<stdio.h>


using namespace std;


struct rectangle
{
    //members 
    int length;
    int height;
    char x;
} r1, r2, r3;


//global declaration
//or 

struct rectangle r4;

int main()
{
    //local struct
    struct rectangle r5 = {10,5};

    printf("%lu\n", sizeof(r3));

    cout<<r5.length<<endl;
    cout<<r5.height<<endl;
    
}