#include <stdio.h>
#include<locale.h>
#include <iostream>
#include<stdint.h>
#include<math.h>
#include<Windows.h>

using namespace std;

char u;
void main()
{
	setlocale(LC_ALL, "Russian");

start:

	int a;
	cout << "������� ����� �������:";
	cin >> a;
	switch (a)
	{
		//1.	������������ ������ ��� �����.����������, ����� �� ��� �����, � ���� ���, ������� �� �� ����� � ������� �����������.
	case 1: {
		int a, b;
		cout << "������� ����� a:";
		cin >> a;
		cout << "������� ����� b:";
		cin >> b;
		if (a == b)
		{
			cout << "����� �����" << endl;
		}
		else
		{
			if (a < b)
			{
				cout << a << "\t" << b << endl;
			}
			else
			{
				cout << b << "\t" << a << endl;
			}
		}
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//2.	������������ � ���������� ������ 5 ������ ��������. ����������, ������� �� ������� � ��������.
		//������� �������� ������, ���� ��� ������� ���� 4 ����� � ����

	case 2: {
		int x, x1, x2, x3, x4, sr;
		cout << "������� ������ (1-5):";
		cin >> x;
		cout << "������� ������ (1-5):";
		cin >> x1;
		cout << "������� ������ (1-5):";
		cin >> x2;
		cout << "������� ������ (1-5):";
		cin >> x3;
		cout << "������� ������ (1-5):";
		cin >> x4;

		sr = (x + x1 + x2 + x3 + x4) / 5;

		if (sr >= 4)
		{
			cout << "������� �������� ������" << endl;
		}
		else
		{
			cout << "������� ���." << endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	} break;

		//3.	������������ � ���������� ������ 5 ������ ��������.����������, ������� �� ������� � ��������.
		//������� �������� ������, ���� ��� ������� ���� 4 ����� � ����

	case 3: {
		int x, x1, x2, x3, x4, sr;
		cout << "������� ������ (1-5):";
		cin >> x;
		cout << "������� ������ (1-5):";
		cin >> x1;
		cout << "������� ������ (1-5):";
		cin >> x2;
		cout << "������� ������ (1-5):";
		cin >> x3;
		cout << "������� ������ (1-5):";
		cin >> x4;

		sr = (x + x1 + x2 + x3 + x4) / 5;

		if (sr >= 4)
		{
			cout << "������� �������� ������"<<sr << endl;
		}
		else
		{
			cout << "������� ���." <<sr<< endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	} break;

		//4.	�������� ���������-�����������. ������������ ������ ��� ����� � �������� �������������� ��������.
		//������� �� ����� ���������

	case 4: {
		int a, b, x, s;
		cout << "������� ����� a:";
		cin >> a;
		cout << "������� ����� b:";
		cin >> b;
		cout << "�������� ��������: umnogenie -1, delenie-2, slogenie-3,vichitanie-4 :";
		cin >> x;
		
		switch (x)
		{
		case 1:
		{
			s = a*b;
			cout << s << endl;
		}break;
		case 2:
		{
			s = a / b;
			cout << s << endl;
		} break;
		case 3:
		{
			s = a + b;
			cout << s << endl;
		}break;
		case 4:
		{
			s = a - b;
			cout << s << endl;
		}break;
		}
		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}

	}break;

		//5.	�������� ���������, ������� �� ������ ������������ ������ ���� ����������� ����������.
		//������������ ����� ������� ���� ������ � ���� ����

	case 5: {
		int x;
		HANDLE hConsole;
		cout << "������ ����� �����:";
		cin >> x;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, x);
		cout << x <<"\t"<< "������" << endl;


		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//6.	�������� ���������, ������� �� ������ ������������ ��������
		//��������� �� ����� � ������� �� ������� �� ������� ������������

	case 6: {
		int a, i, s;
		cout << "������� �����:";
		cin >> a;
		cout << "������� ������� (0-7):";
		cin >> i;

		s = pow(a, i);
		cout << "����� � �������:" << s << endl;

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;

		//7.	� ��� ��� �� ��������� ������������ ��������� ��� ���������� �����, 
		//��������� �� ������ ��������, � ������� ��� �� �������� ���������. 
		//�������� ����������, ��� ���������� ����� � ������ ���������� ������, 
		//� ������ ���������� ����� ���������� ���, ����� � ������ ��������� ���� 
		//������� ����������. ��������� �� ����������� ����� � ���� ���������� ����������,
		//����� ���������� ���������� ���������� ��������� ��� ���� ���������� 
		//(���� ��� ������ ��������)

	case 7:
	{
		int x, x1, x2, x3, p, p1, p2, p3,p11,p22,p33, s;
		float s1;
		cout << "������� ���-�� ������� � 1-� ���������:";
		cin >> x1;
		cout << "������� ���-�� ������� � 2-� ���������:";
		cin >> x2;
		cout << "������� ���-�� ������� � 3-� ���������:";
		cin >> x3;
		s = x1 + x2 + x3;
		/*s1 = s % 3;*/
		if ((s % 3) == 0)
		{
			x = s / 3;

			if (x1 > x)
			{
				p1 = x1 - x;
				cout << "���������� �� 1 ���������:" << p1 << "�������" << endl;

			}
			if (x2 > x)
			{
				p2 = x2 - x;
				cout << "���������� �� 2 ���������:" << p2 << "�������" << endl;
			}
			if (x3 > x)
			{
				p3 = x3 - x;
				cout << "���������� �� 3 ���������:" << p3 << "�������" << endl;
			}
			 if (x1 < x)
			{
				p11 = x - x1;
				cout << "�������� � 1-� ���������:" << p11 << "�������" << endl;
				

			}
			if (x2 < x)
			{
				p22 = x - x2;
				cout << "�������� �� 2-� ���������:" << p22 << "�������" << endl;
			}
			if (x3 < x)
			{
				p33 = x - x3;
				cout << "�������� �� 2-� ���������:" << p33 << "�������" << endl;
			}
		
			 if ((x1 == x) || (x2 == x) || (x3 == x))
			{
				cout << "�������� ��� ���������" << endl;
			}
						
		}
		else
		{
			cout << "������� �� ���������." << endl;
		}

		cout << "������ ���������� y/n:";
		cin >> u;
		if (u == 'y')
		{
			system("cls");
			goto start;

		}
	}break;
	}
}
