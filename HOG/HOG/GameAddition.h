//! Класс GameAddition.
/*!
Класс предназначен для дополнения игры путем наследования от класса родителя.
Класс осуществляет: перегрузку оператора сравнения(по уровням персонажей);
перегрузку оператора инкремента(по количеству опыта).
*/
#pragma once
#include "Game.h"
class GameAddition :public Game
{
public:
	//! Конструктор по умолчанию.
	GameAddition();
	//! Конструктор с параметрами.
	/*!
	\param lvlHero Уровень героя.
	\param totalPoints Количество очков.
	\param totalBattles Количество битв.
	\param expMonster Опыт за монстра.
	\param expHero Опыт героя.
	\param lvlUpHero Количество опыта, требуемого для поднятия уровня.
	\param factorUp Коэффициент повышения значения поля "lvlUpHero".
	*/
	GameAddition(int, int, int, int, double, double, double);
	//! Перегрузка оператора сравнения.
	/*!
	Сравнение двух классов по полю lvlHero
	*/
	bool operator==(Game & game);
	//! Перегрузка оператора инкремента.
	/*!
	Увеличение значения поля expHero на 1000.
	*/
	void operator++(int);
};