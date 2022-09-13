#include <iostream>

int main()
{
    char word[] = "never gonna give you up";
    std::cout << word << std::endl;
    // method 1
    char helper[24];
    int i, j;
    for (i = 0; word[i] != '\0'; i++)
    {
         
    }
    i--;
    for (j = 0; i >= 0; i--, j++)
    {
        helper[j] = word[i];
    }
    helper[j] = '\0';
    
    std::cout << helper << std::endl;

    // Method 2
    char word2[] = "never gonna let you down";
    std::cout << word2 << std::endl;
    for (j = 0; word2[j] != '\0'; j++)
    {
    }
    j--;
    i = 0;
    while (i < j)
    {
        char t;
        t = word2[i];
        word2[i] = word2[j];
        word2[j] = t;
        i++;
        j--;
    }
    std::cout << word2;

    return 0;
}