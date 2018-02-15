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
		cout << "Введите номер задания: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "Задание 1." << endl;
			cout << "Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев. Пользователь вводит прибыль фирмы за каждый месяц." << endl;
			cout << "Решение:" << endl;
			int a[6], sum = 0, prib = 0;
			for (int i = 0; i < 6; i++)
			{
				cout << "Прибыль в " << i + 1 << " месяц: ";
				cin >> prib;
				sum += prib;
			}
			cout << "Прибыль за 6 месяцев = " << sum << endl;
			break;
		}
		case 2:
		{
			system("cls");
			cout << "Задание 2." << endl;
			cout << "Написать программу, которая выводит одномерный массив в обратном порядке." << endl;
			cout << "Решение:" << endl;
			int a[20];
			for (int i = 0; i < 20; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << a[i] << " ";
			}
			cout << endl << "Измененный массив:" << endl;
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
			cout << "Задание 3." << endl;
			cout << "Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив, необходимо вычислить периметр пятиугольника (периметр – сумма всех сторон)." << endl;
			cout << "Решение:" << endl;
			int a[5], stor = 0, per = 0;
			for (int i = 0; i < 5; i++)
			{
				cout << "Длина " << i + 1 << " стороны = ";
				cin >> stor;
				per += stor;
			}
			cout << "Периметр = " << per << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "Задание 4." << endl;
			cout << "Пользователь вводит прибыль фирмы за год (12 месяцев). Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна." << endl;
			cout << "Решение:" << endl;
			int a[12], min = 0, max = 0, ii, jj;
			for (int i = 0; i < 12; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << i + 1 << " месяц - прибыль " << a[i] << " тыс." << endl;
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
			cout << "Макс. прибыль в " << jj + 1 << " мес., минимальная в " << ii + 1 << endl;
			break;
		}
		case 5:
		{
			system("cls");
			cout << "Задание 5." << endl;
			cout << "В одномерном массиве, заполненном случайными числами, определить минимальный и максимальный элементы." << endl;
			cout << "Решение:" << endl;
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
			cout << endl << "Макс. элемент " << jj << ", мин. " << ii << endl;
			break;
		}
		case 6:
		{
			system("cls");
			cout << "Задание 6." << endl;
			cout << "Пользователь вводит прибыль фирмы за год (12 месяцев). Затем  пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем). Необходимо определить месяц, в котором прибыль была максимальна и месяц, в котором прибыль была минимальна с учетом выбранного диапазона." << endl;
			cout << "Решение:" << endl;
			int a[12], min = 0, max = 0, ii, jj;
			for (int i = 0; i < 12; i++)
			{
				a[i] = 10 + rand() % 90;
				cout << i + 1 << " месяц - прибыль " << a[i] << " тыс." << endl;
			}
			int x, y;
			cout << "Введите диапозон:" << endl;
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
			cout << "Для введенного диапозона макс. прибыль в " << jj + 1 << " мес., минимальная в " << ii + 1 << endl;
			break;
		}
		case 7:
		{
			system("cls");
			cout << "Задание 7." << endl;
			cout << "В одномерном массиве, состоящем из N вещественных чисел вычислить:" << endl;
			cout << "1) Сумму отрицательных элементов." << endl;
			cout << "2) Произведение элементов, находящихся между min и max элементами." << endl;
			cout << "3) Произведение элементов с четными номерами." << endl;
			cout << "4) Сумму  элементов, находящихся между первым и последним отрицательными элементами." << endl;
			cout << "Решение:" << endl;
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
			cout << "Задание 8." << endl; //??????????????????????????????????? как понять
			cout << "Сжать(сдвинуть элементы) массив, удалив из него все 0, и заполнить освободившиеся справа элементы значениями -1;" << endl;
			cout << "Решение:" << endl;

			break;
		}
		case 9:
		{
			system("cls");
			cout << "Задание 9." << endl;
			cout << "Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырька." << endl;
			cout << "Решение:" << endl;
			int a[30];
			cout << "До сортировки:" << endl;
			for (int i = 0; i < 30; i++)
			{
				a[i] = 10 + rand() % 40;
				cout << a[i] << " ";
			}
			cout << endl << "После сортировки:" << endl;
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
			cout << "Задание 10." << endl;
			cout << "Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок." << endl;
			cout << "Решение:" << endl;
			int a[30];
			cout << "До сортировки:" << endl;
			for (int i = 0; i < 30; i++)
			{
				a[i] = 10 + rand() % 40;
				cout << a[i] << " ";
			}
			cout << endl << "После сортировки:" << endl;
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
			cout << "Задание 11." << endl;  //quickSort????
			cout << "Написать программу, выполняющую сортировку одномерного массива целых чисел методом быстрого поиска." << endl;
			cout << "Решение:" << endl;

			break;
		}
		case 12:///////////////////////////////////////////////////////////////////////////
		{
			system("cls");
			cout << "Задание 12." << endl;
			cout << "Написать программу «справочник». Создать два одномерных массива. Один массив хранит номера ICQ, второй – телефонные номера. Реализовать меню для пользователя: " << endl;
			cout << "a)	отсортировать по номерам ICQ" << endl;
			cout << "b)	отсортировать по номерам телефона" << endl;
			cout << "c)	вывести список пользователей" << endl;
			cout << "d)	выход" << endl;
			cout << "Решение:" << endl;
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
				cout << "Что сделать?" << endl;
				cout << "a)	отсортировать по номерам ICQ" << endl;
				cout << "b)	отсортировать по номерам телефона" << endl;
				cout << "c)	вывести список пользователей" << endl;
				cout << "d)	выход" << endl;
				cin >> var;
				if (var == 'a')
				{
					for (int i = 0; i < 9; i++)
					{
						for (int j = 9; j > i; j--)
						{
							if (icq[j - 1] > icq[j])          //смысл такой, но что-то поменять нужно
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
			cout << "Задание 13." << endl;
			cout << "Написать программу «успеваемость». Пользователь вводит 10 оценок студента. Реализовать меню для пользователя" << endl;
			cout << "Решение:" << endl;
			char var;
			int a[10], ocenka, n, sum = 0;
			float sr = 0;
			cout << "Введите оценки студента:" << endl;
			for (int i = 0; i < 10; i++)
			{
				cin >> ocenka;
				a[i] = ocenka;
			}
			do
			{
				cout << "Что сделать?" << endl;
				cout << "a)	вывод оценок (вывод содержимого массива)" << endl;
				cout << "b)	пересдача экзамена (пользователь вводит номер элемента массива и новую оценку)" << endl;
				cout << "c)	выходит ли стипендия (стипендия выходит, если средний бал не ниже 10.7) " << endl;
				cout << "d)	выход" << endl;
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
					cout << "Введите номер элемента и новую оценку" << endl;
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
						cout << "Стипендия выходит" << endl;
					else
						cout << "Стипендия не выходит" << endl;
				}
			} while (var != 'd');
			break;
		}
		case 14:
		{
			system("cls");
			cout << "Задание 14." << endl;
			cout << "Написать программу, копирующую элементы 2-х массивов размером 5 элементов каждый в один массив размером 10 элементов  следующим образом: сначала копируются последовательно все элементы, большие 0, затем последовательно все элементы, равные 0, а затем последовательно все элементы, меньшие 0." << endl;
			cout << "Решение:" << endl;
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
			cout << "Задание 15." << endl;
			cout << "Написать программу, которая заполняет одномерный массив из 10 элементов вещественными числами в диапазоне от 1 до 10 с двумя знаками после запятой." << endl;
			cout << "a) количество знаков после запятой вводит пользователь." << endl;
			cout << "Решение:" << endl;
			float a[10];
			int n;
			cout.precision(3);
			for (int i = 0; i < 10; i++)
			{
				(float)a[i] = (float)(1 + rand() % 10) + (float)(1 / (float)(1 + rand() % 10));
				cout << (float)a[i] << endl;
			}
			cout << "Кол-во знаков после запятой: ";
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
			cout << "Задание 16." << endl;
			cout << "Написать программу, копирующую последовательно элементы одного массива размером 10 элементов в 2 массива размером 5 элементов каждый." << endl;
			cout << "Решение:" << endl;
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
			cout << "Задание 17." << endl;
			cout << "Написать программу, копирующую последовательно элементы 2-х массивов размером 5 элементов каждый в один массив размером 10 элементов." << endl;
			cout << "Решение:" << endl;
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
			cout << "Задание 18." << endl;
			cout << "Написать программу, которая осуществляет разбиение введенного числа на цифры и заносит эти цифры в массив. Вывести элементы массива, разделяя их двумя пробелами." << endl;
			cout << "Решение:" << endl;
			int n, a[] = { 0 }, i = 0, k = 0;
			cout << "Введите число: ";
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
			cout << "Неверный номер задания." << endl;
			break;
		}
	} while (zadanie > 0);
}