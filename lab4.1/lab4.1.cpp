// Lab4.1.cpp
// Гордій Олег
// Лабораторна робота № 4.1
// Цикли
// Варіант 3
#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int  N, i;
	double S;
	cout << "N = "; cin >> N;
	

	//1) while(...) { ... }
	S = 0;
	i = 1;
	while (i <= N)
	{
		S += 1/i+sqrt(1+sin(i)*sin(i));
		i++;
	}
	cout <<"S = "<< S << endl;

	

	//2) do{ ... } while(...); 
	S = 0;
	i = 1;
	do {
		S += 1 / i + sqrt(1 + sin(i) * sin(i));
		i++;
	} while (i <= N);
	cout << "S = " << S << endl;
	

	//3) for(...; ...; n++) {... } 
	S = 0;
	for (i = 1; i <= N; i++)
	{
		S += 1 / i + sqrt(1 + sin(i) * sin(i));
	}
	cout << "S = " << S << endl;

	

	//3) for(...; ...; n--) {... }  
	S = 0;
	for (i = N; i >= 1; i--)
	{
		S += 1 / i + sqrt(1 + sin(i) * sin(i));
	}
	cout << "S = " << S << endl;



	cin.get();
	return 0;
}

