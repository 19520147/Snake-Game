#include<iostream>
#include"hdrlib.h"
using namespace std;
int n = 4;
void drawSnake(int x[], int y[])
{
	gotoXY(x[0], y[0]);
	cout << "O";
	for (int i = 1; i < n; i++)
	{
		gotoXY(x[i], y[i]);
		cout << "o";
	}
}
void initSnake(int x[], int y[])
{
	int a = 50; int b = 13;
	for (int i = 0; i < n; i++)
	{
		x[i] = a;
		y[i] = b;
		a--;
	}
}
void delSnake(int x[], int y[])
{
	for (int i = 0; i < n; i++)
	{
		gotoXY(x[i], y[i]);
		cout << " ";
	}
}

int main()
{

}
