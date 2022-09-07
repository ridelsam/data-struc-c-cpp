#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle//class rectangle
{
    private:
    int length;
    int breath;

    public:

    Rectangle ()//constructor of rectangle class ,it gets initalize as soon as class rectangle is declared in main 
    {
        length=0;
        breath=05;
    }

    Rectangle (int l,int b)//constructor of rectangle class ,it gets initalize as soon as class rectangle is declared in main 
    {
        length=l;
        breath=b;
    }
    int area()
    {
        return length*breath;
    }
    int peri()
    {
        return 2*(length+breath);
    }      
};

int main()
{
    int l,b;
    cout<<"Enter length and breath of rectangle ";
    cin>>l>>b;
    Rectangle r(l,b);
    int a=r.area();
    int p=r.peri();
    printf("%d is area\n%d is perimeter",a,p);
    return 0;
}