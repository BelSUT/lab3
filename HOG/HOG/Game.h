//! ����� Game.
/*!
����� ������������ ��� ���������� ����� � ����� ���,
� ������ ���������� ���������� ����, ����������� ��� ����������
��������� ������.
*/

#pragma once
#include <iostream>
#include <random>
class Game
{
public:
	//! ����������� �� ���������.
	Game();
	//! ��������� ���������� ��� ����� ����.
	/*!
	\param lvlHero ������� �����.
	\param totalPoints ���������� �����.
	\param totalBattles ���������� ����.
	\param expMonster ���� �� �������.
	\param expHero ���� �����.
	\param lvlUpHero ���������� �����, ���������� ��� �������� ������.
	\param factorUp ����������� ��������� �������� ���� "lvlUpHero".
	*/
	void newGame();

	//! ���������� ����� ����.
	/*!
	\param maxLvl �������� ������������� ������.
	\brief ��������� �������� ������������� ������.
	\param totalBattles ���������� ����.
	\brief ������� ���������� ����������� ����.
	*/
	void game(int maxLvl);
	//! ���������� ����� ����� � ����.
	/*!
	\param lvlMonster ������� �������.
	\brief ��������� ��������������� ������� �������.
	\param expHero ���� �����.
	\brief ��������� ����� ����� ����� � ����� �� ������� � ������ ������.
	\param totalPoints ���������� �����.
	\brief ������������� �� 1 � ������ ������.
	*/
	void battle();
	//! ���������� ����������, ��������� � ���������� ������.
	/*!
	\param lvlHero ������� �����.
	\brief ������������� �� 1.
	\param expHero ���� �����.
	\brief ����������� �� �������� lvlUpHero.
	\param lvlUpHero ���������� �����, ���������� ��� �������� ������.
	\brief ����������������� � ������������ � factorUp.
	*/
	void lvlUp();

	//! ������� ��� ������.
	//! ����� ��������� �������� ���� lvlHero.
	int getLvlHero();
	//! ����� ��������� �������� ���� totalPoints.
	int getTotalPoints();
	//! ����� ��������� �������� ���� totalBattles.
	int getTotalBattles();
	//! ����� ��������� �������� ���� expMonster.
	int getExpMonster();
	//! ����� ��������� �������� ���� expHero.
	double getExpHero();
	//! ����� ��������� �������� ���� lvlUpHero.
	double getLvlUpHero();
	//! ����� ��������� �������� ���� factorUp.
	double getFactorUp();

	//! ������� ��� ������.
	//! ����� ��������� �������� ���� lvlHero.
	void setLvlHero(int x);
	//! ����� ��������� �������� ���� totalPoints.
	void setTotalPoints(int x);
	//! ����� ��������� �������� ���� totalBattles.
	void setTotalBattles(int x);
	//! ����� ��������� �������� ���� expMonster.
	void setExpMonster(int x);
	//! ����� ��������� �������� ���� expHero.
	void setExpHero(double x);
	//! ����� ��������� �������� ���� lvlUpHero.
	void setLvlUpHero(double x);
	//! ����� ��������� �������� ���� factorUp.
	void setFactorUp(double x);

private:
	//! ������� �����.
	int lvlHero;
	//! ������� �������.
	int lvlMonster;
	//! ���������� �����.
	int totalPoints;
	//! ���������� ����.
	int totalBattles;
	//! ���� �� �������.
	int expMonster;
	//! ���� �����.
	double expHero;
	//! ���������� �����, ���������� ��� �������� ������.
	double lvlUpHero;
	//! ����������� ��������� �������� ���� lvlUpHero.
	double factorUp;

	//! ����� �� ������� ����������� ����.
	/*!
	\param i ���������� ����.
	\param totalPoints ���������� �����.
	*/
	void showResultGame(int i);
	//! ����� �� ������� ����������� ���.
	/*!
	\param lvlHero ������� �����.
	\param expHero ���� �����.
	\param lvlUpHero ���������� �����, ���������� ��� �������� ������.
	*/
	void showResultBattle();
};