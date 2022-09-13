#include <iostream>
#include <stdio.h>


void findlength (char s[]){
    
    int i = 0;
    while(s[i]!='\0')
    {
        i++;
    }
    printf("length is %d", i);

}

int main()
{
    char name1[] = "bruhhh";
    char name2[20];
    std::cout << "Enter your name ";
    gets(name2);
    printf("ok %s\n", name2);
    std::cout << name1 << " and " << name2 << " are friends\n";
    
    findlength(name2);
    

}