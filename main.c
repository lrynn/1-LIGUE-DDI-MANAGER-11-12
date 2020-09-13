#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// A5BGLEAGUE Club Manager V 1.1.3 Release

int main() {
	int toolNumber = 0;

	SetConsoleTitle(TEXT("ZODDESLIGA Club Manager 1.1.3"));
	printf("\nA5BG FOOTBALL LEAGUE ZODDESLIGA 09-10 구단 매니저\n");
	printf("\n1 : 전술 설정 도구\n원하는 포메이션을 설정하고 코드값을 출력받는 도구입니다.\n");
	printf("\n2 : 경기력 예측 도구\n두 팀의 포메이션에 따른 각각 능력치와 점유율, 경기력을 예측하는 도구입니다.\n");
	printf("\n사용하고자 하는 도구의 번호를 입력하세요 : ");

	scanf("%d", &toolNumber);

	// 도구 번호 오류
	if (toolNumber != 1 && toolNumber != 2) {
		printf("\n오류 발생 401: 지정된 입력 범위 벗어남. 프로그램을 다시 시작하십시오.");
		system("PAUSE");
		return 0;
	}

	printf("\n\n\n\n");

	// 전술 설정 도구
	if (toolNumber == 1) {
		int gk, cb, lb, rb, dm, lwb, rwb, lw, rw, cm, clw, crw, ss, st;
		int form[14];

		printf("\n전술 설정 도구\n사용법\n각 항마다 쓰라는 걸 쓰고 엔터를 치세요");

		printf("\n\n골키퍼를 출전시키려면 1, 스위핑 키퍼를 출전시키려면 2 : "); // 골키퍼 유형
		scanf("%d", &gk);
		switch (gk) {
		case 1:
			printf("골키퍼가 출전합니다.");
			form[0] = 0;
			break;
		case 2:
			printf("스위핑 키퍼가 출전합니다.");
			form[0] = 1;
			break;
		default:
			printf("\n오류 발생 401: 지정된 입력 범위 벗어남. 프로그램을 다시 시작하십시오.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n출전시키려는 센터백 수(0 ~ 3 사이) : "); // 센터백 수
		scanf("%d", &cb);
		if (cb >= 1 && cb <= 3) {
			form[1] = cb;
			printf("센터백이 %d명 출전합니다.", cb);
		}
		else if (cb == 0) {
			form[1] = cb;
			printf("센터백이 출전하지 않습니다.");
		}
		else {
			printf("오류 발생 401: 지정된 입력 범위 벗어남. 프로그램을 다시 시작하십시오.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n왼쪽 풀백 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 왼쪽 풀백 출전 여부
		scanf("%d", &lb);
		switch (lb) {
		case 0:
			form[2] = 0;
			printf("왼쪽 풀백이 출전하지 않습니다.");
			break;
		default:
			form[2] = 1;
			printf("왼쪽 풀백이 출전합니다.");
			break;
		}

		printf("\n\n오른쪽 풀백 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 오른쪽 풀백 출전 여부
		scanf("%d", &rb);
		switch (rb) {
		case 0:
			form[3] = 0;
			printf("오른쪽 풀백이 출전하지 않습니다.");
			break;
		default:
			form[3] = 1;
			printf("오른쪽 풀백이 출전합니다.");
			break;
		}

		printf("\n\n출전시키려는 수비형 중원 수(0 ~ 2 사이) : "); // 수비형 중원 수
		scanf("%d", &dm);
		if (dm == 1 || dm == 2) {
			form[4] = dm;
			printf("수비형 중원이 %d명 출전합니다.", dm);
		}
		else if (dm == 0) {
			form[4] = dm;
			printf("수비형 중원이 출전하지 않습니다.");
		}
		else {
			printf("오류 발생 401: 지정된 입력 범위 벗어남. 프로그램을 다시 시작하십시오.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n왼쪽 윙백 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 왼쪽 윙백 출전 여부
		scanf("%d", &lwb);
		switch (lwb) {
		case 0:
			form[5] = 0;
			printf("왼쪽 윙백이 출전하지 않습니다.");
			break;
		default:
			form[5] = 1;
			printf("왼쪽 윙백이 출전합니다.");
			break;
		}

		printf("\n\n오른쪽 윙백 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 오른쪽 윙백 출전 여부
		scanf("%d", &rwb);
		switch (rwb) {
		case 0:
			form[6] = 0;
			printf("오른쪽 윙백이 출전하지 않습니다.");
			break;
		default:
			form[6] = 1;
			printf("오른쪽 윙백이 출전합니다.");
			break;
		}

		printf("\n\n왼쪽 윙어 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 왼쪽 윙어 출전 여부
		scanf("%d", &lw);
		switch (lw) {
		case 0:
			form[7] = 0;
			printf("왼쪽 윙어가 출전하지 않습니다.");
			break;
		default:
			form[7] = 1;
			printf("왼쪽 윙어가 출전합니다.");
			break;
		}

		printf("\n\n오른쪽 윙어 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 오른쪽 윙어 출전 여부
		scanf("%d", &rw);
		switch (rw) {
		case 0:
			form[8] = 0;
			printf("오른쪽 윙어가 출전하지 않습니다.");
			break;
		default:
			form[8] = 1;
			printf("오른쪽 윙어가 출전합니다.");
			break;
		}

		printf("\n\n출전시키려는 중원 미드필더 수(0 ~ 2 사이) : "); // 중원 미드필더 수
		scanf("%d", &cm);
		if (cm == 1 || cm == 2) {
			form[9] = cm;
			printf("중원 미드필더가 %d명 출전합니다.", cm);
		}
		else if (cm == 0) {
			form[9] = cm;
			printf("중원 미드필더가 출전하지 않습니다.");
		}
		else {
			printf("오류 발생 401: 지정된 입력 범위 벗어남. 프로그램을 다시 시작하십시오.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n공격형 왼쪽 윙어 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 공격형 왼쪽 윙어 출전 여부
		scanf("%d", &clw);
		switch (clw) {
		case 0:
			form[10] = 0;
			printf("공격형 왼쪽 윙어가 출전하지 않습니다.");
			break;
		default:
			form[10] = 1;
			printf("공격형 왼쪽 윙어가 출전합니다.");
			break;
		}

		printf("\n\n공격형 오른쪽 윙어 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 공격형 오른쪽 윙어 출전 여부
		scanf("%d", &crw);
		switch (crw) {
		case 0:
			form[11] = 0;
			printf("공격형 오른쪽 윙어가 출전하지 않습니다.");
			break;
		default:
			form[11] = 1;
			printf("공격형 오른쪽 윙어가 출전합니다.");
			break;
		}

		printf("\n\n세컨드 스트라이커 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 세컨드 스트라이커 출전 여부
		scanf("%d", &ss);
		switch (ss) {
		case 0:
			form[12] = 0;
			printf("세컨드 스트라이커가 출전하지 않습니다.");
			break;
		default:
			form[12] = 1;
			printf("세컨드 스트라이커가 출전합니다.");
			break;
		}

		printf("\n\n스트라이커 출전 여부(미출전시 0, 출전시 아무 숫자) : "); // 스트라이커 출전 여부
		scanf("%d", &st);
		switch (st) {
		case 0:
			form[13] = 0;
			printf("스트라이커가 출전하지 않습니다.");
			break;
		default:
			form[13] = 1;
			printf("스트라이커가 출전합니다.");
			break;
		}

		int teamPersonnel = 0;
		for (int personnel = 1; personnel < 14; personnel++) {
			teamPersonnel += form[personnel];
		}

		switch (teamPersonnel) {
		case 10:
			printf("\n\n포메이션 설정 완료\n설정된 포메이션의 코드값은 ");
			for (int formcodes = 0; formcodes < 14; formcodes++) {
				printf("%d ", form[formcodes]);
			}
			printf("입니다."); break;
		default:
			printf("\n\n오류 발생 501: 제한 범위 벗어남. 프로그램을 다시 시작하십시오.");
			system("PAUSE");
			return 0;
		}

		system("PAUSE");
		return 0;
	}

	// 경기력 예측 도구
	if (toolNumber == 2) {

		printf("\n경기력 예측 도구\n사용법\n각 항마다 쓰라는 걸 쓰고 엔터를 치세요");

		//홈

		int home_def_left = 0, home_def_center = 0, home_def_right = 0,
			home_mid_left = 0, home_mid_center = 0, home_mid_right = 0,
			home_for_left = 0, home_for_center = 0, home_for_right = 0;

		int sform[14];

		printf("\n\n홈 팀 코드값을 입력해주세요 : ");
		for (int sformcodes = 0; sformcodes < 14; ++sformcodes) {
			scanf("%d", &sform[sformcodes]);
		}

		switch (sform[0]) { // 홈 골키퍼 관련 능력치 설정
		case 0:
			home_def_left += 3; home_def_center += 3;  home_def_right += 3;
		case 1:
			home_def_left += 2; home_def_center += 2; home_def_right += 2;
			home_mid_left += 2; home_mid_center += 2; home_mid_right += 2;
		}

		home_def_center += (2 * sform[1]); // 홈 센터백 관련 능력치 설정

		switch (sform[2]) // 홈 왼쪽 풀백 관련 능력치 설정
			case 1: home_def_left += 3;

		switch (sform[3]) // 홈 오른쪽 풀백 관련 능력치 설정
			case 1: home_def_right += 3;

		home_def_center += sform[4]; // 홈 수비형 중원 관련 능력치 설정
		home_mid_center += (3 * sform[4]);

		switch (sform[5]) // 홈 왼쪽 윙백 관련 능력치 설정
			case 1: home_def_left++; home_mid_left += 3;

		switch (sform[6]) // 홈 오른쪽 윙백 관련 능력치 설정
			case 1: home_def_right++; home_mid_right += 3;

		switch (sform[7]) // 홈 왼쪽 윙어 관련 능력치 설정
			case 1: home_mid_left += 8;

		switch (sform[8]) // 홈 오른쪽 윙어 관련 능력치 설정
			case 1: home_mid_right += 8;

		home_mid_center += (5 * sform[9]); // 홈 중원 미드필더 관련 능력치 설정

		switch (sform[10]) // 홈 공격형 왼쪽 윙어 관련 능력치 설정
			case 1: home_for_left += 10;

		switch (sform[11]) // 홈 공격형 오른쪽 윙어 관련 능력치 설정
			case 1: home_for_right += 10;

		switch (sform[12]) // 홈 세컨드 스트라이커 관련 능력치 설정
			case 1: home_mid_center += 3; home_for_center += 5;

		switch (sform[13]) // 홈 스트라이커 관련 능력치 설정
			case 1: home_for_center += 10;

		// 원정

		int away_def_left = 0, away_def_center = 0, away_def_right = 0,
			away_mid_left = 0, away_mid_center = 0, away_mid_right = 0,
			away_for_left = 0, away_for_center = 0, away_for_right = 0;

		int aform[14];

		printf("\n원정 팀 코드값을 입력해주세요 : ");
		for (int aformcodes = 0; aformcodes < 14; ++aformcodes) {
			scanf("%d", &aform[aformcodes]);
		}

		switch (aform[0]) { // 원정 골키퍼 관련 능력치 설정
		case 0:
			away_def_left += 3; away_def_center += 3;  away_def_right += 3;
		case 1:
			away_def_left += 2; away_def_center += 2; away_def_right += 2;
			away_mid_left += 2; away_mid_center += 2; away_mid_right += 2;
		}

		away_def_center += (2 * aform[1]); // 원정 센터백 관련 능력치 설정

		switch (aform[2]) // 원정 왼쪽 풀백 관련 능력치 설정
			case 1: away_def_left += 3;

		switch (aform[3]) // 원정 오른쪽 풀백 관련 능력치 설정
			case 1: away_def_right += 3;

		away_def_center += aform[4]; // 원정 수비형 중원 관련 능력치 설정
		away_mid_center += (3 * aform[4]);

		switch (aform[5]) // 원정 왼쪽 윙백 관련 능력치 설정
			case 1: away_def_left++; away_mid_left += 3;

		switch (aform[6]) // 원정 오른쪽 윙백 관련 능력치 설정
			case 1: away_def_right++; away_mid_right += 3;

		switch (aform[7]) // 원정 왼쪽 윙어 관련 능력치 설정
			case 1: away_mid_left += 8;

		switch (aform[8]) // 원정 오른쪽 윙어 관련 능력치 설정
			case 1: away_mid_right += 8;

		away_mid_center += (5 * aform[9]); // 원정 중원 미드필더 관련 능력치 설정

		switch (aform[10]) // 원정 공격형 왼쪽 윙어 관련 능력치 설정
			case 1: away_for_left += 10;

		switch (aform[11]) // 원정 공격형 오른쪽 윙어 관련 능력치 설정
			case 1: away_for_right += 10;

		switch (aform[12]) // 원정 세컨드 스트라이커 관련 능력치 설정
			case 1: away_mid_center += 3; away_for_center += 5;

		switch (aform[13]) // 원정 스트라이커 관련 능력치 설정
			case 1: away_for_center += 10;

		// 결과 계산

		float share_left = (float)home_mid_left / ((float)home_mid_left + (float)away_mid_left);
		float share_center = (float)home_mid_center / ((float)home_mid_center + (float)away_mid_center);
		float share_right = (float)home_mid_right / ((float)home_mid_right + (float)away_mid_right);

		int home_offense_left = (home_for_left - away_def_left) * share_left;
		int away_offense_left = (home_for_left - away_def_left - 1) * (1 - share_left);

		int home_offense_center = (home_for_center - away_def_center) * share_center;
		int away_offense_center = (away_for_center - home_def_center - 1) * (1 - share_center);

		int home_offense_right = (home_for_right - away_def_right) * share_right;
		int away_offense_right = (away_for_right - home_def_right - 1) * (1 - share_right);

		if (home_offense_center < 0)
			home_offense_center = 0;
		if (home_offense_left < 0)
			home_offense_left = 0;
		if (home_offense_right < 0)
			home_offense_right = 0;

		if (away_offense_center < 0)
			away_offense_center = 0;
		if (away_offense_left < 0)
			away_offense_left = 0;
		if (away_offense_right < 0)
			away_offense_right = 0;

		printf("\n\n왼쪽에서 골 기회를 홈 팀이 %d회, 원정 팀이 %d회 가집니다.", home_offense_left, away_offense_left);
		printf("\n중앙에서 골 기회를 홈 팀이 %d회, 원정 팀이 %d회 가집니다.", home_offense_center, away_offense_center);
		printf("\n오른쪽에서 골 기회를 홈 팀이 %d회, 원정 팀이 %d회 가집니다.", home_offense_right, away_offense_right);
		printf("\n\n한 번의 기회에서 골을 넣을 확률은 3분의 1이며,\n골 기회와 득점 수가 정비례하는 것은 아닙니다.");
		printf("\n이 시뮬레이션에는 선수가 퇴장당할 확률이 배제되어 있습니다.\n\n");

		system("PAUSE");
		return 0;
	}
}