//Clab 7 task1

/* �������� ���������, ��������� ��������� ������ � �������� � �������� � �� ����� � ������������ � ����������� ����� ������*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100

struct region
{
	char code[SIZE];
	char number[SIZE];
	char name[SIZE];
};

struct note
{
	region country;
	note* next;
};

struct note* create(struct region* any);
void add(struct note* head, struct region* any);
void CodeSearch(char* strCode, note* head);
void NameSearch(char* strName, note* head);