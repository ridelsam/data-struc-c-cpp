#include<iostream>
#include<stdio.h>
using namespace std;


void perm1(char s[],int k)
{
    static int A[10]={0};
    static char Res[10];
    int i;
    if(s[k]=='\0')
    {
        Res[k]='\0';
        cout<<Res<<endl;
    }
    else
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(A[i]==0)
            {
                Res[k]=s[i];
                A[i]=1;
                perm1(s,k+1);
                A[i]=0;
            }
        }
    }
}


void swap(char *c1,char *c2)
{
    char t=*c1;
    *c1=*c2;
    *c2=t;
}

void perm2(char s[],int l,int h)
{
    if(l==h)
    {
        cout<<s<<endl;
    }
    else
    {
        for(int i=l;i<=h;i++)
        {
            swap(&s[i],&s[l]);
            perm2(s,l+1,h);
            swap(&s[i],&s[l]);
        }
    }
}


int main()
{
    char s1[]="ABC";
    char s2[]="never gonna give you up";
    perm1(s1,0);
    perm2(s2,0,22);
    return 0;
}