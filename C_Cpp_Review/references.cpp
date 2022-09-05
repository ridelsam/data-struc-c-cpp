//reference only for c++
#include<iostream>
using namespace std;
int main()
{
    int original=10;
    int &alias=original;//declaring and initializing reference variable
    printf("%d\n",original);
    cout<<alias;
    return 0;
}