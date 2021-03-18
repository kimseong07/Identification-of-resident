#include <iostream>
using namespace std;

int main()
{
	char a[14];
	cout << "주민등록 번호 입력" << endl;
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
		cout << "유효" << endl;
	}
	else
	{
		cout << "무효" << endl;
		return 0;
	}

	if (a[6] % 2 == 1)
	{
		cout << "남" << endl;
	}
	else
	{
		cout << "여" << endl;
	}
	
	int y = (a[0] - 48) * 10 + (a[1] - '0');
	y += a[6] <= '2' ? 1900 : 2000;
	cout << "출생연도 : " << y << endl;
	cout << "나이 : " << 2021 - y + 1 << endl;

	cout << "출생지역 : ";
	int local = (a[6] - '0') * 10 + a[7] - '0';
	if (local < 9)
	{
		cout << "서울" << endl;
	}
	else if (local < 13)
	{
		cout << "부산" << endl;
	}
	else if (local < 16)
	{
		cout << "인천" << endl;
	}
	else if (local < 19)
	{
		cout << "경기도 주요 도시" << endl;
	}
	else if (local < 25)
	{
		cout << "그 밖의 경기도" << endl;
	}
	else if (local < 35)
	{
		cout << "강원도" << endl;
	}
	else if (local < 40)
	{
		cout << "충청북도" << endl;
	}
	else if (local < 48)
	{
		cout << "충청남도" << endl;
	}
	else if (local < 55)
	{
		cout << "전라북도" << endl;
	}
	else if (local < 67)
	{
		cout << "전라남도" << endl;
	}
	else if (local < 91)
	{
		cout << "경상도" << endl;
	}

	return 0;
}