#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int zadanie;
	do
	{
		cout << "������� ����� �������: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "������� 1." << endl;
			cout << "��������, ���������, ������� ��������� ������� ����� �� 6 �������. ������������ ������ ������� ����� �� ������ �����." << endl;
			cout << "�������:" << endl;
			int a[6], sum = 0, prib = 0;
			for (int i = 0; i < 6; i++)
			{
				cout << "������� � " << i + 1 << " �����: ";
				cin >> prib;
				sum += prib;
			}
			cout << "������� �� 6 ������� = " << sum << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "������� 2." << endl;
			cout << "�������� ���������, ������� ������� ���������� ������ � �������� �������." << endl;
			cout << "�������:" << endl;
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl << "���������� ������:" << endl;
			for (int i = 19; i >= 0; i--)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "������� 3." << endl;
			cout << "������������ ������ ����� ������ �������������, ������ ������� ���������� � ������, ���������� ��������� �������� ������������� (�������� � ����� ���� ������)." << endl;
			cout << "�������:" << endl;
			int a[5], stor = 0, per = 0;
			for (int i = 0; i < 5; i++)
			{
				cout << "����� " << i + 1 << " ������� = ";
				cin >> stor;
				per += stor;
			}
			cout << "�������� = " << per << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "������� 4." << endl;
			cout << "������������ ������ ������� ����� �� ��� (12 �������). ���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ����������." << endl;
			cout << "�������:" << endl;
			int a[12], min = 0, max = 0, ii, jj;
			for (int i = 0; i < 12; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << i + 1 << " ����� - ������� " << a[i] << " ���." << endl;
			}
			min = a[0];
			for (int i = 1; i < 12; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
					ii = i;
				}
			}
			for (int i = 0; i < 12; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
					jj = i;
				}
			}
			cout << "����. ������� � " << jj + 1 << " ���., ����������� � " << ii + 1 << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "������� 5." << endl;
			cout << "� ���������� �������, ����������� ���������� �������, ���������� ����������� � ������������ ��������." << endl;
			cout << "�������:" << endl;
			int a[20], min = 0, max = 0, ii, jj;
			for (int i = 0; i < 20; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			min = a[0];
			for (int i = 1; i < 20; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
					ii = i;
				}
			}
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
					jj = i;
				}
			}
			cout << endl << "����. ������� " << jj << ", ���. " << ii << endl;
			break;
		}
		case 6:
		{
			system("cls");
			cout << "������� 6." << endl;
			cout << "������������ ������ ������� ����� �� ��� (12 �������). �����  ������������ ������ �������� (��������, 3 � 6 � ����� ����� 3-� � 6-� �������). ���������� ���������� �����, � ������� ������� ���� ����������� � �����, � ������� ������� ���� ���������� � ������ ���������� ���������." << endl;
			cout << "�������:" << endl;
			int a[12], min = 0, max = 0, ii, jj;
			for (int i = 0; i < 12; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << i + 1 << " ����� - ������� " << a[i] << " ���." << endl;
			}
			int x, y;
			cout << "������� ��������:" << endl;
			cin >> x;
			cin >> y;
			min = a[x - 1];
			for (int i = x - 1; i < y; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
					ii = i;
				}
			}
			for (int i = x - 1; i < y; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
					jj = i;
				}
			}
			cout << "��� ���������� ��������� ����. ������� � " << jj + 1 << " ���., ����������� � " << ii + 1 << endl;
			break;
		}
		case 7:
		{
			system("cls");
			cout << "������� 7." << endl;
			cout << "� ���������� �������, ��������� �� N ������������ ����� ���������:" << endl;
			cout << "1) ����� ������������� ���������." << endl;
			cout << "2) ������������ ���������, ����������� ����� min � max ����������." << endl;
			cout << "3) ������������ ��������� � ������� ��������." << endl;
			cout << "4) �����  ���������, ����������� ����� ������ � ��������� �������������� ����������." << endl;
			cout << "�������:" << endl;
			int a[20], sum = 0, max = 0, min = 0, ii = 0, jj = 0, proiz = 1;
			for (int i = 0; i < 20; i++)
			{
				a[i] = -20 + rand() % 40;
				cout << a[i] << "  ";
			}
			cout << endl;
			for (int i = 0; i < 20; i++)
			{
				if (a[i] < 0)
					sum += a[i];
			}
			cout << "1) " << sum << endl;
			min = a[0];
			for (int i = 1; i < 20; i++)
			{
				if (a[i] < min)
				{
					min = a[i];
					ii = i;
				}
			}
			for (int i = 0; i < 20; i++)
			{
				if (a[i] > max)
				{
					max = a[i];
					jj = i;
				}
			}
			for (int i = ii; i <= jj; i++)
			{
				proiz *= a[i];
			}
			cout << "2) " << proiz << endl;
			proiz = 1;
			for (int i = 0; i < 20; i++)
			{
				if (a[i] % 2 == 0)
					proiz *= a[i];
			}
			cout << "3) " << proiz << endl;
			for (int i = 0; i < 20; i++)
				if (a[i] < 0)
				{
					ii = i;
					break;
				}
			for (int i = 0; i < 20; i++)
				if (a[i] < 0)
				{
					jj = i;
				}
			sum = 0;
			for (int i = ii; i <= jj; i++)
				sum += a[i];
			cout << "4) " << sum << endl;
			break;
		}
		case 8://///////////////////////////////////////////////////////////////////////////////////////////////////////////////
		{
			system("cls");
			cout << "������� 8." << endl; //??????????????????????????????????? ��� ������
			cout << "�����(�������� ��������) ������, ������ �� ���� ��� 0, � ��������� �������������� ������ �������� ���������� -1;" << endl;
			cout << "�������:" << endl;

			break;
		}
		case 9:
		{
			system("cls");
			cout << "������� 9." << endl;
			cout << "�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� ��������." << endl;
			cout << "�������:" << endl;
			int a[30];
			cout << "�� ����������:" << endl;
			for (int i = 0; i < 30; i++)
			{
				a[i] = 10 + rand() % 40;
				cout << a[i] << " ";
			}
			cout << endl << "����� ����������:" << endl;
			for (int i = 0; i < 29; i++)
			{
				for (int j = 29; j > i; j--)
				{
					if (a[j - 1] > a[j])
					{
						swap(a[j], a[j - 1]);
					}
				}
			}
			for (int i = 0; i < 30; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			break;
		}
		case 10:
		{
			system("cls");
			cout << "������� 10." << endl;
			cout << "�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������." << endl;
			cout << "�������:" << endl;
			int a[30];
			cout << "�� ����������:" << endl;
			for (int i = 0; i < 30; i++)
			{
				a[i] = 10 + rand() % 40;
				cout << a[i] << " ";
			}
			cout << endl << "����� ����������:" << endl;
			for (int i = 1; i < 30; i++)
			{
				int val = a[i];
				int ind = i;
				while ((ind > 0) && (a[ind - 1] > val))
				{
					a[ind] = a[ind - 1];
					ind--;
				}
				a[ind] = val;
			}
			for (int i = 0; i < 30; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			break;
		}
		case 11:///////////////////////////////////////////////////////////////////////////////////////////////
		{
			system("cls");
			cout << "������� 11." << endl;  //quickSort????
			cout << "�������� ���������, ����������� ���������� ����������� ������� ����� ����� ������� �������� ������." << endl;
			cout << "�������:" << endl;

			break;
		}
		case 12:///////////////////////////////////////////////////////////////////////////
		{
			system("cls");
			cout << "������� 12." << endl;
			cout << "�������� ��������� �����������. ������� ��� ���������� �������. ���� ������ ������ ������ ICQ, ������ � ���������� ������. ����������� ���� ��� ������������: " << endl;
			cout << "a)	������������� �� ������� ICQ" << endl;
			cout << "b)	������������� �� ������� ��������" << endl;
			cout << "c)	������� ������ �������������" << endl;
			cout << "d)	�����" << endl;
			cout << "�������:" << endl;
			char var;
			int icq[10], tel[10], iicq, itel;
			for (int i = 0; i < 10; i++)
			{
				icq[i] = 10000 + rand() % 20000;
				tel[i] = 100000 + rand() % 200000;
			}
			for (int i = 0; i < 10; i++)
			{
				iicq = i;
				itel = i;
			}
			do
			{
				cout << "��� �������?" << endl;
				cout << "a)	������������� �� ������� ICQ" << endl;
				cout << "b)	������������� �� ������� ��������" << endl;
				cout << "c)	������� ������ �������������" << endl;
				cout << "d)	�����" << endl;
				cin >> var;
				if (var == 'a')
				{
					for (int i = 0; i < 9; i++)
					{
						for (int j = 9; j > i; j--)
						{
							if (icq[j - 1] > icq[j])          //����� �����, �� ���-�� �������� �����
							{
								swap(icq[j], icq[j - 1]);
							}
						}
					}
					for (int i = 0; i < 10; i++)
					{
						cout << icq[i] << " - " << tel[iicq] << endl;
					}
				}
				if (var == 'b')
				{

				}
				if (var == 'c')
				{
					for (int i = 0; i < 10; i++)
					{
						cout << icq[i] << " - " << tel[i] << endl;
					}
				}
			} while (var != 'd');
			break;
		}
		case 13:
		{
			system("cls");
			cout << "������� 13." << endl;
			cout << "�������� ��������� ��������������. ������������ ������ 10 ������ ��������. ����������� ���� ��� ������������" << endl;
			cout << "�������:" << endl;
			char var;
			int a[10], ocenka, n, sum = 0;
			float sr = 0;
			cout << "������� ������ ��������:" << endl;
			for (int i = 0; i < 10; i++)
			{
				cin >> ocenka;
				a[i] = ocenka;
			}
			do
			{
				cout << "��� �������?" << endl;
				cout << "a)	����� ������ (����� ����������� �������)" << endl;
				cout << "b)	��������� �������� (������������ ������ ����� �������� ������� � ����� ������)" << endl;
				cout << "c)	������� �� ��������� (��������� �������, ���� ������� ��� �� ���� 10.7) " << endl;
				cout << "d)	�����" << endl;
				cin >> var;
				if (var == 'a')
				{
					for (int i = 0; i < 10; i++)
					{
						cout << a[i] << " ";
					}
				}
				if (var == 'b')
				{
					cout << "������� ����� �������� � ����� ������" << endl;
					cin >> n;
					cin >> ocenka;
					a[n] = ocenka;
				}
				if (var == 'c')
				{
					for (int i = 0; i < 10; i++)
					{
						sum += a[i];
					}
					sr = ((float)sum) / 10;
					if (sr >= 10.7)
						cout << "��������� �������" << endl;
					else
						cout << "��������� �� �������" << endl;
				}
			} while (var != 'd');
			break;
		}
		case 14:
		{
			system("cls");
			cout << "������� 14." << endl;
			cout << "�������� ���������, ���������� �������� 2-� �������� �������� 5 ��������� ������ � ���� ������ �������� 10 ���������  ��������� �������: ������� ���������� ��������������� ��� ��������, ������� 0, ����� ��������������� ��� ��������, ������ 0, � ����� ��������������� ��� ��������, ������� 0." << endl;
			cout << "�������:" << endl;
			int a[5], b[5], c[10] = { 0 };
			for (int i = 0; i < 5; i++)
			{
				a[i] = -5 + rand() % 10;
				b[i] = -5 + rand() % 10;
			}
			for (int i = 0; i < 5; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 5; j++)
				{
					if (a[j] > 0)
						c[i] = a[j];
					if (b[j] > 0)
						c[i] = b[j];
					if (a[j] == 0)
						c[i] = a[j];
					if (b[j] == 0)
						c[i] = b[j];
					if (a[j] < 0)
						c[i] = a[j];
					if (b[j] < 0)
						c[i] = b[j];
				}
			}
			for (int i = 0; i < 10; i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
			break;
		}
		case 15:
		{
			system("cls");
			cout << "������� 15." << endl;
			cout << "�������� ���������, ������� ��������� ���������� ������ �� 10 ��������� ������������� ������� � ��������� �� 1 �� 10 � ����� ������� ����� �������." << endl;
			cout << "a) ���������� ������ ����� ������� ������ ������������." << endl;
			cout << "�������:" << endl;
			float a[10];
			int n;
			cout.precision(3);
			for (int i = 0; i < 10; i++)
			{
				(float)a[i] = (float)(1 + rand() % 10) + (float)(1 / (float)(1 + rand() % 10));
				cout << (float)a[i] << endl;
			}
			cout << "���-�� ������ ����� �������: ";
			cin >> n;
			cout.precision(n);
			for (int i = 0; i < 10; i++)
			{
				cout << (float)a[i] << endl;
			}
			break;
		}
		case 16:
		{
			system("cls");
			cout << "������� 16." << endl;
			cout << "�������� ���������, ���������� ��������������� �������� ������ ������� �������� 10 ��������� � 2 ������� �������� 5 ��������� ������." << endl;
			cout << "�������:" << endl;
			int a[10], b[5] = { 0 }, c[5] = { 0 };
			for (int i = 0; i < 10; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				b[i] = a[i * 2];
				c[i] = a[(i * 2) + 1];
			}
			for (int i = 0; i < 5; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
			break;
		}
		case 17:
		{
			system("cls");
			cout << "������� 17." << endl;
			cout << "�������� ���������, ���������� ��������������� �������� 2-� �������� �������� 5 ��������� ������ � ���� ������ �������� 10 ���������." << endl;
			cout << "�������:" << endl;
			int a[10] = { 0 }, b[5], c[5];
			for (int i = 0; i < 5; i++)
			{
				b[i] = 10 + rand() % 90;
				c[i] = 10 + rand() % 90;
			}
			for (int i = 0; i < 5; i++)
			{
				cout << b[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				cout << c[i] << " ";
			}
			cout << endl;
			for (int i = 0; i < 5; i++)
			{
				a[i * 2] = b[i];
				a[(i * 2) + 1] = c[i];
			}
			for (int i = 0; i < 10; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			break;
		}
		case 18:
		{
			system("cls");
			cout << "������� 18." << endl;
			cout << "�������� ���������, ������� ������������ ��������� ���������� ����� �� ����� � ������� ��� ����� � ������. ������� �������� �������, �������� �� ����� ���������." << endl;
			cout << "�������:" << endl;
			int n, a[] = { 0 }, i = 0, k = 0;
			cout << "������� �����: ";
			cin >> n;
			do
			{
				a[i] = n % 10;
				i++;
				k++;
				n = n / 10;
			} while (n > 1);
			for (i = 0; i < k; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			break;
		}
		default:
			cout << "�������� ����� �������." << endl;
			break;
		}
	} while (zadanie > 0);
}