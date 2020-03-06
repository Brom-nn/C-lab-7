#define MAXNAME 128
#define MAXPREFICS 3

typedef struct region // ��������� ����� ��� ���������
{
	char countryCode[MAXPREFICS];
	char regionCode[MAXNAME];
	char name[MAXNAME];
	struct region* next;
}regionST;

regionST* createList(FILE* fp); // �������� ������
regionST* createStruct(char bufer[]); // �������� � ���������� ���������
void parsing(char buf[256], char prefics[MAXPREFICS], char code[MAXPREFICS], char name[MAXNAME]); //���������� ������ �� ����� �� ���������
void clean_stdin(void); // ������� ������ �����
void searchBYcountryCode(regionST* headOflist, char tempChar[]); //�����
void searchBYname(regionST* headOflist, char tempChar[]);//�����
void searchBYregionCode( regionST* headOflist,  char tempChar[]);//�����
void printRegion(const regionST* pointOflist); // ���������� ���������
void deleteList(regionST* pointOflist); // ������������ ���������� ������