#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void copy_file(const char* source, const char* destination, int pos);
void calc_count_symbols(const char* source);

int main()
{
	setlocale(LC_ALL, "rus");

	copy_file("file.txt", "out.txt", 4);
	calc_count_symbols("out.txt");
}

void copy_file(const char* source, const char* destination, int pos)
{
	FILE* file = fopen(source, "r");
	FILE* outfile = fopen(destination, "w");

	char s[255];

	int numberLine = 0;

	while (!feof(file))
	{
		fgets(s, 255, file);
		numberLine++;

		if (numberLine >= pos)
		{
			fputs(s, outfile);
		}
	}

	fclose(file);
	fclose(outfile);
}

void calc_count_symbols(const char* source)
{
	FILE* file = fopen(source, "r");

	char s[255];

	while (!feof(file))
		fgets(s, 255, file);

	char lastRow[255] = "";
	strcpy(lastRow, s);

	char* word = strtok(s, " ,.!?");
	char lastWord[100];

	while (word != NULL)
	{
		strcpy(lastWord, word);

		word = strtok(NULL, " ,.!?");
	}

	cout << "Последняя строка: " << lastRow << endl;
	cout << "Последнее слово: " << lastWord << endl;
	cout << "Кол-во символов в последнем слове = " << strlen(lastWord) << endl;

	fclose(file);
}
