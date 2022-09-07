// FntasticConsole.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>

void findNumberOfChars(char* str, int* count)
{
    int i;
    for (i = 0; *(str + i); i++)
    {
        count[std::toupper(*(str + i))]++;
    } 
}

void printCodedStr(char* str)
{
    int count[256] = { };
    //int* count = (int*)calloc(256, sizeof(int));

    findNumberOfChars(str, count);

    int i;
    for (i = 0; *(str + i); i++)
    {
        if (count[std::toupper(*(str + i))] == 1)
        {
            printf("(");
        }
        if (count[std::toupper(*(str + i))] > 1)
        {
            printf(")");
        }
    }

    //free(count);
}

int main()
{
    char str[] = "Succes";
    printCodedStr(str);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
