//! Класс Game.
/*!
Класс предназначен для реализации одной и более игр,
а именно проведение количества битв, необходимых для достижения
заданного уровня.
*/

#pragma once
#include <iostream>
#include <random>
class Game
{
public:
	//! Конструктор по умолчанию.
	Game();
	//! Установка параметров для новой игры.
	/*!
	\param lvlHero Уровень героя.
	\param totalPoints Количество очков.
	\param totalBattles Количество битв.
	\param expMonster Опыт за монстра.
	\param expHero Опыт героя.
	\param lvlUpHero Количество опыта, требуемого для поднятия уровня.
	\param factorUp Коэффициент повышения значения поля "lvlUpHero".
	*/
	void newGame();

	//! Проведение одной игры.
	/*!
	\param maxLvl Значение максимального уровня.
	\brief Принимает значение максимального уровня.
	\param totalBattles Количество битв.
	\brief Счетчик количества проведенных битв.
	*/
	void game(int maxLvl);
	//! Проведение одной битвы в игре.
	/*!
	\param lvlMonster Уровень монстра.
	\brief Принимает сгенерированный уровень монстра.
	\param expHero Опыт героя.
	\brief Принимает сумму опыта героя и опыта за монстра в случае победы.
	\param totalPoints Количество очков.
	\brief Увеличивается на 1 в случае победы.
	*/
	void battle();
	//! Перерасчет параметров, связанных с повышением уровня.
	/*!
	\param lvlHero Уровень героя.
	\brief Увеличивается на 1.
	\param expHero Опыт героя.
	\brief Уменьшается на значение lvlUpHero.
	\param lvlUpHero Количество опыта, требуемого для поднятия уровня.
	\brief Перерасчитывается в соответствии с factorUp.
	*/
	void lvlUp();

	//! Геттеры для тестов.
	//! Метод получения значения поля lvlHero.
	int getLvlHero();
	//! Метод получения значения поля totalPoints.
	int getTotalPoints();
	//! Метод получения значения поля totalBattles.
	int getTotalBattles();
	//! Метод получения значения поля expMonster.
	int getExpMonster();
	//! Метод получения значения поля expHero.
	double getExpHero();
	//! Метод получения значения поля lvlUpHero.
	double getLvlUpHero();
	//! Метод получения значения поля factorUp.
	double getFactorUp();

	//! Сеттеры для тестов.
	//! Метод установки значения поля lvlHero.
	void setLvlHero(int x);
	//! Метод установки значения поля totalPoints.
	void setTotalPoints(int x);
	//! Метод установки значения поля totalBattles.
	void setTotalBattles(int x);
	//! Метод установки значения поля expMonster.
	void setExpMonster(int x);
	//! Метод установки значения поля expHero.
	void setExpHero(double x);
	//! Метод установки значения поля lvlUpHero.
	void setLvlUpHero(double x);
	//! Метод установки значения поля factorUp.
	void setFactorUp(double x);

private:
	//! Уровень героя.
	int lvlHero;
	//! Уровень монстра.
	int lvlMonster;
	//! Количество очков.
	int totalPoints;
	//! Количество битв.
	int totalBattles;
	//! Опыт за монстра.
	int expMonster;
	//! Опыт героя.
	double expHero;
	//! Количество опыта, требуемого для поднятия уровня.
	double lvlUpHero;
	//! Коэффициент повышения значения поля lvlUpHero.
	double factorUp;

	//! Вывод на дисплей результатов игры.
	/*!
	\param i Количество битв.
	\param totalPoints Количество очков.
	*/
	void showResultGame(int i);
	//! Вывод на дисплей результатов боя.
	/*!
	\param lvlHero Уровень героя.
	\param expHero Опыт героя.
	\param lvlUpHero Количество опыта, требуемого для поднятия уровня.
	*/
	void showResultBattle();
};