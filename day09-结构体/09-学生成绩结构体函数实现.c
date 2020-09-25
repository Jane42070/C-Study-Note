#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

struct students
{
	char *name;
	float *scores;
};

void _bubble_sort(struct students *s, int len);

int main(int argc, char *argv[])
{
	struct students *s = malloc(sizeof(struct students) * 3);
	for (int i = 0; i < 3; ++i) {
		s[i].name = malloc(sizeof(char) * 21);
		s[i].scores = malloc(sizeof(float) * 3);

		printf("姓名 分数\n");
		scanf("%s %f %f %f",
				s[i].name,
				&s[i].scores[0],
				&s[i].scores[1],
				&s[i].scores[2]);
	}

	for (int i = 0; i < 3; ++i) {
		printf("%s %.2f %.2f %.2f\n", s[i].name, s[i].scores[0], s[i].scores[1], s[i].scores[2]);
	}

	_bubble_sort(s, 3);

	return 0;
}

void _bubble_sort(struct students *s, int len)
{
	for (int i = 0; i < 3 - 1; ++i) {
		for (int l = 0; l < 3 - i -1; l++) {
			float sum1 = s[l].scores[0] + s[l].scores[1] + s[l].scores[2];
			float sum2 = s[l + 1].scores[0] + s[l + 1].scores[1] + s[l + 1].scores[2];

			if (sum1 < sum2) {
				struct students temp = s[l];
				s[l] = s[l + 1];
				s[l + 1] = temp;
			}

		}
	}

	for (int i = 0; i < 3; ++i) {
		printf("%s %.2f %.2f %.2f\n", s[i].name, s[i].scores[0], s[i].scores[1], s[i].scores[2]);
	}
}
