#include<iostream>
#include<stdio.h>


using namespace std;

int main()
{
    int n;
    cout<<"Enter Size";
    cin>>n;
    int A[n];

    


    for(int x:A)
    {
        cout<<x<<endl;
    }


    cout<<sizeof(A)<<endl;
    cout<<A[15]<<endl;
    printf("%d\n", A[14]);

    return 0;
}