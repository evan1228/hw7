#include <stdio.h>
#include <stdlib.h>
#define MAX 80
int main(void) {
	FILE *in, *out;
	int cnt;
	char str[100];
	in = fopen("welcome.txt", "r");
	out = fopen("output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);//Ū���ɮ� 
		if (cnt > 0)
			fprintf(out, "%s\n", str);//�g�J�ɮ�

	}
	fclose(in); //�����ɮ� //�����ɮ�
	fclose(out);
	system("pause");
	return 0;
}