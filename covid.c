#include <stdio.h>
#include "covid.h"

struct c {
	char land[10];
	int number;
	
};


int plus(int c, int d) {
	static struct c list[6] = { { "유럽" , 200 },
						{ "아시아" , 600 },
						{ "아프리카" , 300 },
						{ "남아메리카" , 500 },
						{ "북아메리카" , 400 },
						{ "오세아니아" , 700 } };




	for (int i = 0; i < 6; i++) {
		if (c == i + 1)
			list[i].number += d;


	}

	printf("------------------------------------------------------------------------\n");
	printf("----------------------업데이트한 확진자 정보입니다----------------------\n");
	for (int i = 0; i < 6; i++) {
		printf(" %d.%s    %d\n", i + 1, list[i].land, list[i].number);
	}
	printf("------------------------------------------------------------------------\n");


	return 0;

}

int open(int n){
	FILE *fs;
	fs = fopen("거리두기 정보.txt", "r");
	char str[5000];
	fgets(str,5000, fs);
	printf("%s", str);




}