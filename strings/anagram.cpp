#include <iostream>
using namespace std;

void anagram1(char word1[], char word2[])
{
    int i, j;
    for (i = 0; word1[i] != '\0'; i++)
    {
        for (j = 0; word2[j] != '\0'; j++)
        {
            if (word1[i] == word2[j])
                break;
        }
        if (word2[j] == '\0')
            break;
    }
    if (word1[i] == '\0')
        cout << "It's an anagram " << endl;
    else
        cout << "It's not an angram" << endl;
}

void anagram2(char word1[], char word2[])
{
    int i;
    int h[25] = {0};
    for (i = 0; word1[i] != '\0'; i++)
        h[word1[i] - 97]++;

    for (i = 0; word2[i] != '\0'; i++)
    {
        if ((h[word2[i] - 97] - 1) < 0)
        {
            cout << "It's not a anagram" << endl;
            break;
        }
    }
    if (word2[i] == '\0')
        cout << "It's an anagram" << endl;
}

void anagram3(char word1[], char word2[])
{
    int i;
    int a = 0;
    for (i = 0; word1[i] != '\0'; i++) // assigning word6 character as per bit
    {
        int b = 1;              // assigning 0 bit as 1 i.e turning is on
        b = b << word1[i] - 97; // turning on the bit for that particular char
        if (a & b)
            continue;
        else
            a = a | b;
    }
    for (i = 0; word2[i] != '\0'; i++)
    {
        int b = 1;              // assigning 0 bit as 1 i.e turning is on
        b = b << word2[i] - 97; // turning on the bit for that particular char
        if (a & b)
            continue;
        else
        {
            cout << "It's not a anagram" << endl;
            break;
        }
    }
    if (word2[i] == '\0')
        cout << "It's an anagram";

}

int main()
{
    // Anagram using method 1 i.e for loop
    char word1[] = "elbow";
    char word2[] = "below";

    anagram1(word1, word2);

    // Anagram using method 2 using hasing

    char word3[] = "cat";
    char word4[] = "tac";

    anagram2(word3, word4);

    // method 3 using bitwise operator

    char word5[] = "never gonna give you up";
    char word6[] = "never gonna let you down";

    anagram3(word5, word6);

    return 0;
}