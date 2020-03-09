#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task1.h"
#define MAXNAME 128
#define MAXPREFICS 3

int main()
{
	FILE* fp = fopen("subcountry_codes.csv", "r");//�������� �����
	if (!fp) //���� ���� �� �������� - ��������� ������ ���������
	{
		printf("File not found\n");
		exit(1);
	}
	printf("Welcome to the region code search program!\n");

	regionST* headOflist = createList(fp); //�������������� ������ � ��������� ��� ������� �� �����
	fclose(fp);

	while (1) // ���� ������ ��� ������������
	{
		printf("\nEnter your choice, what do we do next:\n> 1 < - Search for a country by country code\n");
		printf("> 2 < - Search for a country by region code\n> 3 < - Search for a country by name\n> 0 < - EXIT\n=>");
		int i = 99;
		while (i < 0 || i > 3) //��������� ������������ �����
		{
			scanf("%d", &i);
			clean_stdin();
			if (i < 0 || i > 3)
				printf("\nWrong symbol, try again: ");
		}
		if (!i) // ���� ������ �����
			break;
		printf("\nEnter your data for search: ");
		char tempChar[128] = { 0 };
		scanf("%s", tempChar);
		clean_stdin();
		switch (i) // ���� ������ �����
		{
			case 1:	
				searchBYcountryCode(headOflist, tempChar);
				break;
			case 2:
				searchBYregionCode(headOflist, tempChar);
				break;
			case 3:
				searchBYname(headOflist, tempChar);
				break;
		}	
	}
	printf("\n*****Good Bye!*****\n");
	deleteList(headOflist);
	return 0;
}