struct SYM // ������������� �������
{
    unsigned char ch; // ASCII-���
    float freq; // ������� �������������
    char code[256]; // ������ ��� ������ ����
    struct SYM* left; // ����� ������� � ������
    struct SYM* right; // ������ ������� � ������
};
typedef struct SYM TSYM;
typedef TSYM* PSYM;
int read(FILE* fp, SYM* syms);//���������� ���� ����������� � ������ syms
void countFreq(int sum, SYM* syms); // ��������� ������� ������������� � ������� syms
int cmp(const void* a, const void* b); // ��������� ������ syms