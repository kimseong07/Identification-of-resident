#include <iostream>
using namespace std;

int main()
{
	char a[14];
	cout << "�ֹε�� ��ȣ �Է�" << endl;
	cin >> a;

	int b[13];
	int total = 0;
	for (int i = 0; i < 13; i++)
	{
		b[i] = (int)a[i] - 48;
		if (i < 8) {

			total += (b[i] * (i + 2));
		}
		else if (i < 12)
		{
			total += (b[i] * (i - 6));
		}
	}

	if (b[12] == 11 - (total % 11) % 10)
	{
		cout << "��ȿ" << endl;
	}
	else
	{
		cout << "��ȿ" << endl;
		return 0;
	}

	if (a[6] % 2 == 1)
	{
		cout << "��" << endl;
	}
	else
	{
		cout << "��" << endl;
	}
	
	int y = (a[0] - 48) * 10 + (a[1] - '0');
	y += a[6] <= '2' ? 1900 : 2000;
	cout << "������� : " << y << endl;
	cout << "���� : " << 2021 - y + 1 << endl;

	cout << "������� : ";
	int local = (a[6] - '0') * 10 + a[7] - '0';
	if (local < 9)
	{
		cout << "����" << endl;
	}
	else if (local < 13)
	{
		cout << "�λ�" << endl;
	}
	else if (local < 16)
	{
		cout << "��õ" << endl;
	}
	else if (local < 19)
	{
		cout << "��⵵ �ֿ� ����" << endl;
	}
	else if (local < 25)
	{
		cout << "�� ���� ��⵵" << endl;
	}
	else if (local < 35)
	{
		cout << "������" << endl;
	}
	else if (local < 40)
	{
		cout << "��û�ϵ�" << endl;
	}
	else if (local < 48)
	{
		cout << "��û����" << endl;
	}
	else if (local < 55)
	{
		cout << "����ϵ�" << endl;
	}
	else if (local < 67)
	{
		cout << "���󳲵�" << endl;
	}
	else if (local < 91)
	{
		cout << "���" << endl;
	}

	return 0;
}