// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32

const int x = 14;
const int y = 17;
int game[x][y];

void Show()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; i++)
		{
			cout << game[i][j];
		}
		cout << endl;
	}
}

void MoveToPlus()
{

}

void MovePlus()
{

}

void Initiolize()
{
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			game[i][j] = 0;
		}
	}

	game[4][4] = 1;
	game[5][5] = 3;
	game[6][6] = 2;
	game[7][7] = 5;

}



int main()
{
	Initiolize();
	Show();
	//for (int i = 0; i < 256; i++)
	//{
	//	cout << i << " " << (char)i<<endl;
	//}
}

