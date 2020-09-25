#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct students
{
	char *name;
	float *scores[3];
}stu1;

int main(int argc, char *argv[])
{
	struct students *s[3];

	for (int i = 0; i < 3; ++i) {
		s[i] = (struct students *)malloc(sizeof(stu1));
		s[i]->name =(char *)malloc(sizeof(char) * 21);
		s[i]->scores[0] = (float *)malloc(sizeof(float));
		s[i]->scores[1] = (float *)malloc(sizeof(float));
		s[i]->scores[2] = (float *)malloc(sizeof(float));

		puts("请输入姓名 成绩");
		scanf("%s %f %f %f", 
				s[i]->name,
				s[i]->scores[0],
				s[i]->scores[1],
				s[i]->scores[2]);
	}

	for (int i = 0; i < 3 - 1; ++i) {
		for (int l = 0; l < 3 - i - 1; l++) {
			int sum1 = *s[l]->scores[0] + *s[l]->scores[1] + *s[l]->scores[2];
			int sum2 = *s[l + 1]->scores[0] + *s[l + 1]->scores[1] + *s[l + 1]->scores[2];
			if (sum1 < sum2) {
				struct students *temp = s[l];
				s[l] = s[l + 1];
				s[l + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 3; ++i) {
		printf("%s %.2f %.2f %.2f\n", s[i]->name, *s[i]->scores[0], *s[i]->scores[1], *s[i]->scores[2]);
		free(s[i]->name);
		free(s[i]->scores[0]);
		free(s[i]->scores[1]);
		free(s[i]->scores[2]);
		free(s[i]);
	}

	return 0;
}
