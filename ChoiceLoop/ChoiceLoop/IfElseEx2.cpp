# include <iostream>
# include <string> // string �ڷ���
using namespace std;

/* 
	������ ���� ���� ��� ���α׷�
	90~100�� -> 'A'
	80~90�� -> 'B'
	70~80�� -> 'C'
	70�� �̸� -> 'F'
*/

int main_2()
{
	// ���� if�� : if ~ else if ~ else
	int score = 85; // ���� ����
	char grade; // ���� ����

	cout << "������ �Է��ϼ��� : ";
	cin >> score;

	if (score >= 90 && score <= 100)
	{
		grade = 'A';
	}
	else if (score >= 80 && score <= 90)
	{
		grade = 'B';
	}
	else if (score >= 70)
	{
		grade = 'C';
	}

	cout << "������ " << grade << " �Դϴ�.\n";




	return 0;
}