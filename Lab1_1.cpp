﻿// Test.cpp : Defines the entry point for the console application.
	//

#include "stdafx.h"
#include <conio.h>
#include <locale.h>

	int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(0,"");

	int counter, denominator;

	denominator = counter = 0; //Устанавливаем начальные значение

	printf("Увеличиваем счетчик и отображаем на экране\n");
	printf("%d\n",counter++);//семантическая ошибка
	printf("Вычисляем значение Counter/Denominator = ");
	printf("%d\n",counter*denominator); // Логическая ошибка
	printf("%d",counter);//синтаксическая ошибка
	getch();

}
