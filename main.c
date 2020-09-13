#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

// A5BGLEAGUE Club Manager V 1.1.3 Release

int main() {
	int toolNumber = 0;

	SetConsoleTitle(TEXT("ZODDESLIGA Club Manager 1.1.3"));
	printf("\nA5BG FOOTBALL LEAGUE ZODDESLIGA 09-10 ���� �Ŵ���\n");
	printf("\n1 : ���� ���� ����\n���ϴ� �����̼��� �����ϰ� �ڵ尪�� ��¹޴� �����Դϴ�.\n");
	printf("\n2 : ���� ���� ����\n�� ���� �����̼ǿ� ���� ���� �ɷ�ġ�� ������, ������ �����ϴ� �����Դϴ�.\n");
	printf("\n����ϰ��� �ϴ� ������ ��ȣ�� �Է��ϼ��� : ");

	scanf("%d", &toolNumber);

	// ���� ��ȣ ����
	if (toolNumber != 1 && toolNumber != 2) {
		printf("\n���� �߻� 401: ������ �Է� ���� ���. ���α׷��� �ٽ� �����Ͻʽÿ�.");
		system("PAUSE");
		return 0;
	}

	printf("\n\n\n\n");

	// ���� ���� ����
	if (toolNumber == 1) {
		int gk, cb, lb, rb, dm, lwb, rwb, lw, rw, cm, clw, crw, ss, st;
		int form[14];

		printf("\n���� ���� ����\n����\n�� �׸��� ����� �� ���� ���͸� ġ����");

		printf("\n\n��Ű�۸� ������Ű���� 1, ������ Ű�۸� ������Ű���� 2 : "); // ��Ű�� ����
		scanf("%d", &gk);
		switch (gk) {
		case 1:
			printf("��Ű�۰� �����մϴ�.");
			form[0] = 0;
			break;
		case 2:
			printf("������ Ű�۰� �����մϴ�.");
			form[0] = 1;
			break;
		default:
			printf("\n���� �߻� 401: ������ �Է� ���� ���. ���α׷��� �ٽ� �����Ͻʽÿ�.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n������Ű���� ���͹� ��(0 ~ 3 ����) : "); // ���͹� ��
		scanf("%d", &cb);
		if (cb >= 1 && cb <= 3) {
			form[1] = cb;
			printf("���͹��� %d�� �����մϴ�.", cb);
		}
		else if (cb == 0) {
			form[1] = cb;
			printf("���͹��� �������� �ʽ��ϴ�.");
		}
		else {
			printf("���� �߻� 401: ������ �Է� ���� ���. ���α׷��� �ٽ� �����Ͻʽÿ�.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n���� Ǯ�� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ���� Ǯ�� ���� ����
		scanf("%d", &lb);
		switch (lb) {
		case 0:
			form[2] = 0;
			printf("���� Ǯ���� �������� �ʽ��ϴ�.");
			break;
		default:
			form[2] = 1;
			printf("���� Ǯ���� �����մϴ�.");
			break;
		}

		printf("\n\n������ Ǯ�� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ������ Ǯ�� ���� ����
		scanf("%d", &rb);
		switch (rb) {
		case 0:
			form[3] = 0;
			printf("������ Ǯ���� �������� �ʽ��ϴ�.");
			break;
		default:
			form[3] = 1;
			printf("������ Ǯ���� �����մϴ�.");
			break;
		}

		printf("\n\n������Ű���� ������ �߿� ��(0 ~ 2 ����) : "); // ������ �߿� ��
		scanf("%d", &dm);
		if (dm == 1 || dm == 2) {
			form[4] = dm;
			printf("������ �߿��� %d�� �����մϴ�.", dm);
		}
		else if (dm == 0) {
			form[4] = dm;
			printf("������ �߿��� �������� �ʽ��ϴ�.");
		}
		else {
			printf("���� �߻� 401: ������ �Է� ���� ���. ���α׷��� �ٽ� �����Ͻʽÿ�.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n���� ���� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ���� ���� ���� ����
		scanf("%d", &lwb);
		switch (lwb) {
		case 0:
			form[5] = 0;
			printf("���� ������ �������� �ʽ��ϴ�.");
			break;
		default:
			form[5] = 1;
			printf("���� ������ �����մϴ�.");
			break;
		}

		printf("\n\n������ ���� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ������ ���� ���� ����
		scanf("%d", &rwb);
		switch (rwb) {
		case 0:
			form[6] = 0;
			printf("������ ������ �������� �ʽ��ϴ�.");
			break;
		default:
			form[6] = 1;
			printf("������ ������ �����մϴ�.");
			break;
		}

		printf("\n\n���� ���� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ���� ���� ���� ����
		scanf("%d", &lw);
		switch (lw) {
		case 0:
			form[7] = 0;
			printf("���� ��� �������� �ʽ��ϴ�.");
			break;
		default:
			form[7] = 1;
			printf("���� ��� �����մϴ�.");
			break;
		}

		printf("\n\n������ ���� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ������ ���� ���� ����
		scanf("%d", &rw);
		switch (rw) {
		case 0:
			form[8] = 0;
			printf("������ ��� �������� �ʽ��ϴ�.");
			break;
		default:
			form[8] = 1;
			printf("������ ��� �����մϴ�.");
			break;
		}

		printf("\n\n������Ű���� �߿� �̵��ʴ� ��(0 ~ 2 ����) : "); // �߿� �̵��ʴ� ��
		scanf("%d", &cm);
		if (cm == 1 || cm == 2) {
			form[9] = cm;
			printf("�߿� �̵��ʴ��� %d�� �����մϴ�.", cm);
		}
		else if (cm == 0) {
			form[9] = cm;
			printf("�߿� �̵��ʴ��� �������� �ʽ��ϴ�.");
		}
		else {
			printf("���� �߻� 401: ������ �Է� ���� ���. ���α׷��� �ٽ� �����Ͻʽÿ�.");
			system("PAUSE");
			return 0;
		}

		printf("\n\n������ ���� ���� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ������ ���� ���� ���� ����
		scanf("%d", &clw);
		switch (clw) {
		case 0:
			form[10] = 0;
			printf("������ ���� ��� �������� �ʽ��ϴ�.");
			break;
		default:
			form[10] = 1;
			printf("������ ���� ��� �����մϴ�.");
			break;
		}

		printf("\n\n������ ������ ���� ���� ����(�������� 0, ������ �ƹ� ����) : "); // ������ ������ ���� ���� ����
		scanf("%d", &crw);
		switch (crw) {
		case 0:
			form[11] = 0;
			printf("������ ������ ��� �������� �ʽ��ϴ�.");
			break;
		default:
			form[11] = 1;
			printf("������ ������ ��� �����մϴ�.");
			break;
		}

		printf("\n\n������ ��Ʈ����Ŀ ���� ����(�������� 0, ������ �ƹ� ����) : "); // ������ ��Ʈ����Ŀ ���� ����
		scanf("%d", &ss);
		switch (ss) {
		case 0:
			form[12] = 0;
			printf("������ ��Ʈ����Ŀ�� �������� �ʽ��ϴ�.");
			break;
		default:
			form[12] = 1;
			printf("������ ��Ʈ����Ŀ�� �����մϴ�.");
			break;
		}

		printf("\n\n��Ʈ����Ŀ ���� ����(�������� 0, ������ �ƹ� ����) : "); // ��Ʈ����Ŀ ���� ����
		scanf("%d", &st);
		switch (st) {
		case 0:
			form[13] = 0;
			printf("��Ʈ����Ŀ�� �������� �ʽ��ϴ�.");
			break;
		default:
			form[13] = 1;
			printf("��Ʈ����Ŀ�� �����մϴ�.");
			break;
		}

		int teamPersonnel = 0;
		for (int personnel = 1; personnel < 14; personnel++) {
			teamPersonnel += form[personnel];
		}

		switch (teamPersonnel) {
		case 10:
			printf("\n\n�����̼� ���� �Ϸ�\n������ �����̼��� �ڵ尪�� ");
			for (int formcodes = 0; formcodes < 14; formcodes++) {
				printf("%d ", form[formcodes]);
			}
			printf("�Դϴ�."); break;
		default:
			printf("\n\n���� �߻� 501: ���� ���� ���. ���α׷��� �ٽ� �����Ͻʽÿ�.");
			system("PAUSE");
			return 0;
		}

		system("PAUSE");
		return 0;
	}

	// ���� ���� ����
	if (toolNumber == 2) {

		printf("\n���� ���� ����\n����\n�� �׸��� ����� �� ���� ���͸� ġ����");

		//Ȩ

		int home_def_left = 0, home_def_center = 0, home_def_right = 0,
			home_mid_left = 0, home_mid_center = 0, home_mid_right = 0,
			home_for_left = 0, home_for_center = 0, home_for_right = 0;

		int sform[14];

		printf("\n\nȨ �� �ڵ尪�� �Է����ּ��� : ");
		for (int sformcodes = 0; sformcodes < 14; ++sformcodes) {
			scanf("%d", &sform[sformcodes]);
		}

		switch (sform[0]) { // Ȩ ��Ű�� ���� �ɷ�ġ ����
		case 0:
			home_def_left += 3; home_def_center += 3;  home_def_right += 3;
		case 1:
			home_def_left += 2; home_def_center += 2; home_def_right += 2;
			home_mid_left += 2; home_mid_center += 2; home_mid_right += 2;
		}

		home_def_center += (2 * sform[1]); // Ȩ ���͹� ���� �ɷ�ġ ����

		switch (sform[2]) // Ȩ ���� Ǯ�� ���� �ɷ�ġ ����
			case 1: home_def_left += 3;

		switch (sform[3]) // Ȩ ������ Ǯ�� ���� �ɷ�ġ ����
			case 1: home_def_right += 3;

		home_def_center += sform[4]; // Ȩ ������ �߿� ���� �ɷ�ġ ����
		home_mid_center += (3 * sform[4]);

		switch (sform[5]) // Ȩ ���� ���� ���� �ɷ�ġ ����
			case 1: home_def_left++; home_mid_left += 3;

		switch (sform[6]) // Ȩ ������ ���� ���� �ɷ�ġ ����
			case 1: home_def_right++; home_mid_right += 3;

		switch (sform[7]) // Ȩ ���� ���� ���� �ɷ�ġ ����
			case 1: home_mid_left += 8;

		switch (sform[8]) // Ȩ ������ ���� ���� �ɷ�ġ ����
			case 1: home_mid_right += 8;

		home_mid_center += (5 * sform[9]); // Ȩ �߿� �̵��ʴ� ���� �ɷ�ġ ����

		switch (sform[10]) // Ȩ ������ ���� ���� ���� �ɷ�ġ ����
			case 1: home_for_left += 10;

		switch (sform[11]) // Ȩ ������ ������ ���� ���� �ɷ�ġ ����
			case 1: home_for_right += 10;

		switch (sform[12]) // Ȩ ������ ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: home_mid_center += 3; home_for_center += 5;

		switch (sform[13]) // Ȩ ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: home_for_center += 10;

		// ����

		int away_def_left = 0, away_def_center = 0, away_def_right = 0,
			away_mid_left = 0, away_mid_center = 0, away_mid_right = 0,
			away_for_left = 0, away_for_center = 0, away_for_right = 0;

		int aform[14];

		printf("\n���� �� �ڵ尪�� �Է����ּ��� : ");
		for (int aformcodes = 0; aformcodes < 14; ++aformcodes) {
			scanf("%d", &aform[aformcodes]);
		}

		switch (aform[0]) { // ���� ��Ű�� ���� �ɷ�ġ ����
		case 0:
			away_def_left += 3; away_def_center += 3;  away_def_right += 3;
		case 1:
			away_def_left += 2; away_def_center += 2; away_def_right += 2;
			away_mid_left += 2; away_mid_center += 2; away_mid_right += 2;
		}

		away_def_center += (2 * aform[1]); // ���� ���͹� ���� �ɷ�ġ ����

		switch (aform[2]) // ���� ���� Ǯ�� ���� �ɷ�ġ ����
			case 1: away_def_left += 3;

		switch (aform[3]) // ���� ������ Ǯ�� ���� �ɷ�ġ ����
			case 1: away_def_right += 3;

		away_def_center += aform[4]; // ���� ������ �߿� ���� �ɷ�ġ ����
		away_mid_center += (3 * aform[4]);

		switch (aform[5]) // ���� ���� ���� ���� �ɷ�ġ ����
			case 1: away_def_left++; away_mid_left += 3;

		switch (aform[6]) // ���� ������ ���� ���� �ɷ�ġ ����
			case 1: away_def_right++; away_mid_right += 3;

		switch (aform[7]) // ���� ���� ���� ���� �ɷ�ġ ����
			case 1: away_mid_left += 8;

		switch (aform[8]) // ���� ������ ���� ���� �ɷ�ġ ����
			case 1: away_mid_right += 8;

		away_mid_center += (5 * aform[9]); // ���� �߿� �̵��ʴ� ���� �ɷ�ġ ����

		switch (aform[10]) // ���� ������ ���� ���� ���� �ɷ�ġ ����
			case 1: away_for_left += 10;

		switch (aform[11]) // ���� ������ ������ ���� ���� �ɷ�ġ ����
			case 1: away_for_right += 10;

		switch (aform[12]) // ���� ������ ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: away_mid_center += 3; away_for_center += 5;

		switch (aform[13]) // ���� ��Ʈ����Ŀ ���� �ɷ�ġ ����
			case 1: away_for_center += 10;

		// ��� ���

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

		printf("\n\n���ʿ��� �� ��ȸ�� Ȩ ���� %dȸ, ���� ���� %dȸ �����ϴ�.", home_offense_left, away_offense_left);
		printf("\n�߾ӿ��� �� ��ȸ�� Ȩ ���� %dȸ, ���� ���� %dȸ �����ϴ�.", home_offense_center, away_offense_center);
		printf("\n�����ʿ��� �� ��ȸ�� Ȩ ���� %dȸ, ���� ���� %dȸ �����ϴ�.", home_offense_right, away_offense_right);
		printf("\n\n�� ���� ��ȸ���� ���� ���� Ȯ���� 3���� 1�̸�,\n�� ��ȸ�� ���� ���� ������ϴ� ���� �ƴմϴ�.");
		printf("\n�� �ùķ��̼ǿ��� ������ ������� Ȯ���� �����Ǿ� �ֽ��ϴ�.\n\n");

		system("PAUSE");
		return 0;
	}
}