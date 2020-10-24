#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main01(){
	int a = 10, b = 50;
	if(a>b){
		printf("a>b\n");
	}
	else{
		printf("a<b\n");
	}
	return 0;
}

int main02(){
	int a;
	scanf("%d",&a);
	switch (a/=10) {
		case 6:
			printf("pass\n");
			break;
		case 7:
		case 8:
			printf("not bad\n");
			break;
		case 9:
			printf("excellent\n");
			break;
		case 10:
			printf("impressive\n");
			break;
		default:
			printf("bad\n");
	}
	return 0;
}

int main(){

	int pig1, pig2, pig3;

	printf("请输入三只小猪的体重：");
	scanf("%d %d %d", &pig1, &pig2, &pig3);

	if (pig1>pig2 && pig1>pig3) {
		printf("pig1 is the fastest pig, and its weight is %d stone\n", pig1);
	}
	else if (pig2>pig1 && pig2>pig3) {
		printf("pig2 is the fastest pig, and its weight is %d stone\n", pig2);
	}
	else {
		printf("pig3 is the fastest pig, and its weight is %d stone\n", pig3);
	}

	return 0;
}
