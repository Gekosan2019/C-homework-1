#include <iostream>
#include <math.h>
#include <cmath>
#include <fstream>
#include <string>
#include <windows.h>
#include <stdio.h>
#include <set>
#include <map>
#include <vector>


using namespace std;

int Evklid(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return Evklid(b, a % b);
	}
}

void Eratosphen(int n) {
	int* a = new int[n + 1];
	for (int i = 2; i < n + 1; i++)
		a[i] = i;
	for (int p = 2; p < n + 1; p++)
	{
		if (a[p] != 0)
		{
			cout << a[p] << " ";
			for (int j = p * p; j < n + 1;j += p)
				a[j] = 0;
		}
	}
	cout << endl;
	delete a;
}

void dz1_1()
{
	setlocale(LC_ALL, "rus");
	cout << "Шамиль Хабибович" << endl;
}

void dz1_2() {
	int a;
	int b;
	setlocale(LC_ALL, "rus");
	cout << "Введите числа:" << endl;
	cin >> a >> b;
	cout << "Сумма чисел: " << a + b << endl;
	cout << "Произведение чисел: " << a * b << endl;
	cout << "Частное чисел(из большего меньшее): ";
	if (a > b &&  b !=0){
		cout << a / b << endl;
	}
	else if(a < b && a != 0) {
		cout << b / a << endl;
	}
	else if (a == 0 or b == 0) {
		cout << "Делить на ноль нельзя!" << endl;
	}
}

void dz1_3() {
	cout << "Введите числа: " << endl;
	double b;
	double c;
	cin >> b >> c;
	double x;
	if (b != 0) {
		x = (-c) / b;
		cout << "Для данных b и c чисел x = ";
		cout << x << endl;
	}
	else {
		if (c == 0) {
			cout << "x - любое" << endl;
		}
		else {
			cout << "решений нет!";
		}
	}
}

void dz1_4() {
	int a;
	int b;
	int c;
	setlocale(LC_ALL, "rus");
	cout << "Введите коээфициенты уравнения: " << endl;
	cin >> a >> b >> c;
	int D;
	if (a != 0) {
		D = b * b - (4 * a * c);
		if (D == 0) {
			double x1 = (-b + sqrt(D)) / (2 * a);
			cout << "Уравнение имеет два одинаковых корня: " << x1 << endl;
		}
		else  if (D > 0) {
			double x1 = (-b + sqrt(D)) / (2 * a);
			double x2 = (-b - sqrt(D)) / (2 * a);
			cout << "Уравнение имеет два корня: " << x1 << " и " << x2 << endl;
		}
		else {
			cout << "Действительных корней нет!" << endl;
		}
	}
	else {
		double x;
		if (b != 0) {
			x = (-c) / b;
			cout << "Для данных b и c чисел x = ";
			cout << x << endl;
		}
		else {
			if (c == 0) {
				cout << "x - любое" << endl;
			}
			else {
				cout << "решений нет!";
			}
		}
	}
	}

void dz1_5() {
	bool light;
	bool pall;
	bool lamp;
	setlocale(LC_ALL, "rus");
	cin >> boolalpha >> light >> pall >> lamp;
	if ((light == true && pall == true) || lamp == true) {
		cout << "В комнате светло!" << endl;
	}
	else {
		cout << "В комнате темно!" << endl;
	}
}

void dz2_1() {
	double pi = 3.14;
	setlocale(LC_ALL, "rus");
	cout << "Введите данные: "s << endl;
	double R;
	double r;
	double h;
	cout << "R = "s;
	cin >> R;
	cout << "r = "s;
	cin >> r;
	cout << "h = "s;
	cin >> h;
	double V = pi * h * (R * R + R * r + r * r) / 3;
	double l = sqrt(h * h + (R-r) * (R-r));
	double S = pi * (R * R + (R + r) * l + r * r);
	cout << "V = "s << V << endl;
	cout << "S = "s << S << endl;
}

void dz2_2() {
	double x;
	double a;
	setlocale(LC_ALL, "rus");
	cout << "Введите полученные данные: " << endl;
	cout << "x = "s;
	cin >> x;
	cout << "a = "s;
	cin >> a;
	if (abs(x) < 1) {
		double w = a * log(abs(x));
		cout << " w = "s << w << endl;
	}
	else if ((a - x * x) >= 0) {
		double w = sqrt(a - x * x);
		cout << " w = "s << w << endl;
	}
	else {
		cout << "Вычислить невозможно"s << endl;
	}
}

void dz2_3() {
	double x;
	double y;
	double b;
	setlocale(LC_ALL, "rus");
	cout << "Введите полученные данные: " << endl;
	cout << "x = "s;
	cin >> x;
	cout << "y = "s;
	cin >> y;
	cout << "b = "s;
	cin >> b;
	if (b - y > 0 && b - x >= 0) {
		double z = log(b - y) * sqrt(b - x);
		cout << "z = "s << z << endl;
	}
	else {
		cout << "Данную функцию нельзя посчитать";
	}
}

void dz2_4() {
	double K;
	setlocale(LC_ALL, "rus");
	cout << "Введено число: ";
	cin >> K;
	cout << "Следующие за ним числа: " << endl;
	if (K > 0) {
		if (K - trunc(K) > 0) {
			int K_n = trunc(K) + 1;
			for (int i = 0; i < 10; ++i) {
				cout << K_n + i << " ";
			}
		}
		else {
			for (int i = 0; i < 10; ++i) {
				cout << K + i << " ";
			}
		}
	}
	if (K < 0) {
		for (int i = 0; i < 10 ; ++i) {
			cout << 1 + i << " ";
		}
	}
}

void dz2_5() {
	double x = -4;
	setlocale(LC_ALL, "rus");
	for (double i = 0.5; i < 9; i = i + 0.5) {
		if (x - 1 == 0) {
			cout << "Нет корней "s;
			x += 0.5;
			continue;
		}
		double y = (x * x - 2 * x + 2) / (x - 1);
		cout << y << " ";
		x += 0.5;
	}
}

void dz3_1() {
	double S;
	double p;
	double n;
	setlocale(LC_ALL, "rus");
	cout << "Введите значения:" << endl;
	cout << "S = ";
	cin >> S;
	cout << "p = ";
	cin >> p;
	cout << "n = ";
	cin >> n;
	double r_1 = 1 + p / 100;
	double r = p / 100;
	double m = (S * r * pow(r_1, n)) / (12 * (pow(r_1, n) - 1));
	cout << m << endl;
}

void dz3_2() {
	setlocale(LC_ALL, "rus");
	double S;
	double m;
	double n;
	cout << "Введите данные: " << endl;
	cout << "S = ";
	cin >> S;
	cout << "m = ";
	cin >> m;
	cout << "n = ";
	cin >> n;
	double p = 0;
	double m_1 = 0;
	while(true) {
		double r = p / 100;
		double m_1 = (S * r * pow(r + 1, n)) / (12 * (pow(r + 1, n) - 1));
		if(m_1 >= m) {
			break;
		}
		p += 0.1;
	}
	cout << p << endl;
}

void dz3_3() {
	string way;
	cin >> way;
	string line;

	ifstream in(way);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			cout << line << endl;
		}
		in.close();
	}
	else {
		cout << "К сожалению файл не найден :(" << endl;
	}

	cout << "End of program" << endl;
}

void dz3_4() {
	string way;
	cin >> way;
	ifstream file(way);
	int b;
	int fl = 0;
	do
	{
		if (file >> b)
		{
			cout << b << " ";
			fl++;
		}
		else
		{
			file.clear();
			file.ignore(1, ' ');
		}
	} while (!file.eof());
	file.close();
	if (fl == 0) {
		cout << "В файле не было цифр" << endl;
	}
}

void dz3_5() {
	string name;
	cin >> name;
	multiset<char> alphavit;
	for (int i = 0; i < name.size(); ++i) {
		alphavit.insert(name[i]);
	}
	for (const char& alpha : alphavit) {
		cout << alpha;
	}
	cout << endl;
}

void dz4_1() {
	cout << "Создание файла..." << endl;
	cout << "Введите название файла: ";
	string name_file;
	cin >> name_file;
	int number = 10;
	double a;
	ofstream nfile;
	nfile.open(name_file);
	cout << "Введите числа в программу: ";
	for (int i = 0; i < number; ++i) {
		cin >> a;
		nfile << a << " ";
	}
	nfile.close();
	ifstream ofile(name_file);
	double b;
	double summ = 0;
	do
	{
		if (ofile >> b)
		{
			summ += b;
		}
		else
		{
			ofile.clear();
			ofile.ignore(1, ' ');
		}
	} while (!ofile.eof());
	ofile.close();
	cout << "Сумма введённых чисел в программу: ";
	cout << summ << endl;
}

int dz4_2(double x) {
	if (x > 0) {
		return 1;
	}
	else if (x == 0) {
		return 0;
	}
	return -1;
}

void dz4_3() {
	setlocale(LC_ALL, "rus");
	cout << "Введите тип фигуры: "s;
	char name;
	cin >> name;
	if (name == 'R') {
		cout << "Введите длины сторон: "s;
		double a, b;
		cin >> a >> b;
		cout << "S = a * b"s << endl;
		double S = a * b;
		cout << "S = "s << a << "*"s << b << " = "s << S << endl;
	}
	else if (name == 'C') {
		cout << "Введите радиус: "s;
		double r;
		const double pi = 3.14;
		cin >> r;
		cout << "S = pi * r^2 "s << endl;
		double S = pi * r * r;
		cout << "S = "s << pi << "*"s << r << "^"s << "2"s <<  " = "s << S << endl;
	}
	else if (name == 'T') {
		cout << "Введите основание и высоту: "s;
		double a, h;
		cin >> a >> h;
		cout << "S = (1/2) * a * h "s << endl;
		double S = (1/2.) * a * h;
		cout << "S = "s << a << "*"s << h << " = "s << S << endl;
	}
	else {
		cout << "Неизвестная фигура"s << endl;
	}
}

void dz4_4() {
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 50; j++) {
			if (j < 8)
				cout << "* ";
			else if (j > 8)
				cout << "-";
		}
		cout<< endl;
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 57; j++)
			cout << "_";
		cout << endl;
	}
}

void dz4_5() {
	while (true) {
		HWND consol = GetConsoleWindow();
		HDC hdc = GetDC(consol);
		HPEN Pen = CreatePen(PS_SOLID, 10, RGB(0, 0, 100));
		SelectObject(hdc, Pen);
		MoveToEx(hdc, 0, 85, NULL);
		LineTo(hdc, 200, 85);
		MoveToEx(hdc, 100, 0, NULL);
		LineTo(hdc, 100, 170);
		for (float x = -8.0f; x <= 20.0f; x += 0.01f)
		{
			MoveToEx(hdc, 10 * x + 100, -10 * sin(x) + 85, NULL);
			LineTo(hdc, 10 * x + 100, -10 * sin(x) + 85);
		}
	}
}

void dz4_6() {
	setlocale(LC_ALL, "Rus");
	map<char, int> c;
	c['I'] = 1;
	c['V'] = 5;
	c['X'] = 10;
	c['L'] = 50;
	c['C'] = 100;
	c['D'] = 500;
	c['M'] = 1000;
	string s;
	int d = 0;
	int	k = 0;
	while (true) {
		cout << "Введите число: "s << endl;
		cin >> s;
		int i = 0;
		while (i < s.size()) {
			k += c[s[i]];
			while (i < s.size() && c[s[i + 1]] == c[s[i]]) {
				k += c[s[i]];
				i++;
			}
			if (i < s.size() &&  c[s[i + 1]] > c[s[i]]) {
				d -= k;
			}
			else {
				d += k;
			}
			i++;
			k = 0;
		}
		cout << d << endl;
		d = 0;
	}
}

void dz4_7() {
	int m = 38;
	int a = 16;
	int c = 25;
	int s0 = 8;
	int n;
	int Si_1 = 0;
	int Si = s0;
	cin >> n;
	for (int i = 0; i < n + 2; ++i) {
		Si_1 = (a * Si + c) % m;
		Si = Si_1;
	}
	cout << Si_1 << endl;
}

void dz4_8() {
	setlocale(LC_ALL, "rus");
	int A[3][4] = { 5, 2, 0, 10,
					3, 5, 2, 5,
					20, 0, 0, 0 };
	double B[4][2] = { 1.20, 0.50,
					   2.80, 0.40,
					   5.00, 1.00,
					   2.00, 1.50 };
	double C[3][2] = { 0.0, 0.0,
	                   0.0, 0.0,
	                   0.0, 0.0 };
	int d = 0;
	int k = 0;
	double rez_1 = 0;
	cout << "Матрица С"s << endl;
	for (int m = 0; m < 3; ++m) {
		for (int j = 0; j < 2; ++j) {
			for (int i = 0; i < 4; ++i) {
				 C[d][k] += A[d][i] * B[i][k];
			}
			cout << C[d][k] << "\t";
			rez_1 += C[d][k];
			k++;
		}
		cout << endl;
		d++;
		k = 0;
	}
	if (max(C[0][0] + C[0][1], C[1][0] + C[1][1]) > max(C[0][0] + C[0][1], C[2][0] + C[2][1])) {
		cout << "2 продавец выручил больше всего денег!"s << endl;
	}
	else if (max(C[0][0] + C[0][1], C[1][0] + C[1][1]) == max(C[0][0] + C[0][1], C[2][0] + C[2][1])) {
		cout << "1 продавец выручил больше всего денег!"s << endl;
	}
	else {
		cout << "3 продавец выручил больше всего денег!"s << endl;
	}
	if (max(C[0][1],C[1][1]) > max(C[0][1],C[2][1])) {
		cout << "2 продавец получил наибольшие комиссионные!"s << endl;
	}
	else if (max(C[0][0],C[1][1]) == max(C[0][0],C[2][1])) {
		cout << "1 продавец получил наибольшие комиссионные!"s << endl;
	}
	else {
		cout << "3 продавец получил наибольшие комиссионные!"s << endl;
	}
	if (min(C[0][1], C[1][1]) < min(C[0][1], C[2][1])) {
		cout << "2 продавец получил наименьшие комиссионные!"s << endl;
	}
	else if (min(C[0][0], C[1][1]) == min(C[0][0], C[2][1])) {
		cout << "1 продавец получил наименьшие комиссионные!"s << endl;
	}
	else {
		cout << "3 продавец получил наименьшие комиссионные!"s << endl;
	}
	double rezult = 0;
	double rez_2 = 0;
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 2; ++j) {
			if (j == 0) {
				rezult += C[i][0];
			}
			else {
				rez_2 += C[i][j];
			}
		}
	}
	cout << "Сумма итогово товара: "s << rezult << endl;
	cout << "Итоговая сумма комиссионных: " << rez_2 << endl;
	cout << "Итоговая сумма денег: "s << rez_1 << endl;
}

void dz4_9() {
	setlocale(LC_ALL, "Rus");
	map <char, int> d;
	int i = 0;
	for (char c = '0'; c <= '9'; ++c, ++i) {
		d[c] = i;
	}
	for (char c = 'A'; c <= 'Z'; ++c, ++i) {
		d[c] = i;
	}
	int Sc_1;
	cout << "Введите систему счиления числа: "s;
	cin >> Sc_1;
	int Sc_2;
	cout << "Введите систему в которую нужно перевести число: "s;
	cin >> Sc_2;
	string number;
	cout << "Введите число: "s;
	cin >> number;
	int sum_1 = 0;
	int k = 1;
	for (char a : number) {
		sum_1 += d[a] * pow(Sc_1, number.size() - k);
		++k;
		}
	string sum_2 = "";
	vector <int> simbol;
	while (sum_1 >=  Sc_2) {
		simbol.push_back(sum_1 % Sc_2);
		sum_1 = sum_1 / Sc_2;
	}
	simbol.push_back(sum_1);
	for (int i = simbol.size() - 1; i >= 0; --i) {
		if (Sc_2 > 10 && simbol[i] > 10) {
			for (char j = 'A'; j <= 'Z'; ++j) {
				if (d[j] == simbol[i]) {
					cout << j << ""s;
					break;
				}
			}
		}
		else {
			cout << simbol[i] << ""s;
		}
	}
	cout << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	cout << " Введите номер задания: "s;
	double number;
	cin >> number;
	    if (number == 1) {
			int a;
			int b;
			cin >> a >> b;
		    cout << Evklid(a, b) << endl;
	    }
		else if (number == 2) {
			int N;
			cin >> N;
			Eratosphen(N);
		}
		else if (number == 1.1) {
			dz1_1();
		}
		else if (number == 1.2) {
			dz1_2();
		}
	    else if (number == 1.3) {
			dz1_3();
		}
		else if (number == 1.4) {
			dz1_4();
	    }
		else if (number == 1.5) {
			dz1_5();
		}
		else if (number == 2.1) {
			dz2_1();
		}
		else if (number == 2.2) {
			dz2_2();
		}
		else if (number == 2.3) {
			dz2_3();
		}
		else if (number == 2.4) {
			dz2_4();
		}
		else if (number == 2.5) {
			dz2_5();
		}
		else if (number == 3.1) {
			dz3_1();
		}
		else if (number == 3.2) {
			dz3_2();
		}
		else if (number == 3.3) {
			dz3_3();
		}
		else if (number == 3.4) {
			dz3_4();
		}
		else if (number == 3.5) {
			dz3_5();
		}
		else if (number == 4.1) {
			dz4_1();
		}
		else if (number == 4.2) {
			cout << "Введите число: ";
			double x;
			cin >> x;
			cout << dz4_2(x) << endl;
		}
		else if (number == 4.3) {
			dz4_3();
		}
		else if (number == 4.4) {
			dz4_4();
		}
		else if (number == 4.5) {
			dz4_5();
		}
		else if (number == 4.6) {
			dz4_6();
		}
		else if (number == 4.7) {
			dz4_7();
		}
		else if (number == 4.8) {
			dz4_8();
		}
		else if (number == 4.9) {
			dz4_9();
		}
}


