#include <stdio.h>                      // 다중 소스 파일
#include "covid.h" 

struct c {
	char land[10];                      // 구조체 사용
	int number;
	
};


int plus(int c, int d) {                                   // 감염 현황 업데이트 함수
	static struct c list[6] = { { "유럽" , 200 },
						{ "아시아" , 600 },
						{ "아프리카" , 300 },             // 정적 변수,  구조체 사용 하여 감염 현황 저장
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

int open(int n){                                 // 파일 입출력 함수
	FILE *fs;
	fs = fopen("거리두기 정보.txt", "r");
	char str[5000];                             // 텍스트 파일을 출력함
	fgets(str,5000, fs);
	printf("%s", str);




}