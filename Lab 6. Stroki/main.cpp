#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int count_digit(char* word);

int main()
{
setlocale(LC_ALL, "rus");

char s[256];
cout << "¬ведите строку: ";
gets_s(s);

char* word = strtok(s, " ");
while (word != NULL)
{
int count = count_digit(word);
if (count == 1)
cout << word << endl;

word = strtok(NULL, " ");
}
}

int count_digit(char* word)
{
int count = 0;

for (int i = 0; i < strlen(word); i++)
{
if (isdigit(word[i]))
count++;
}

return count;
}
