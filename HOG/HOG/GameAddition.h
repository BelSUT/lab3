//! ����� GameAddition.
/*!
����� ������������ ��� ���������� ���� ����� ������������ �� ������ ��������.
����� ������������: ���������� ��������� ���������(�� ������� ����������);
���������� ��������� ����������(�� ���������� �����).
*/
#pragma once
#include "Game.h"
class GameAddition :public Game
{
public:
	//! ����������� �� ���������.
	GameAddition();
	//! ����������� � �����������.
	/*!
	\param lvlHero ������� �����.
	\param totalPoints ���������� �����.
	\param totalBattles ���������� ����.
	\param expMonster ���� �� �������.
	\param expHero ���� �����.
	\param lvlUpHero ���������� �����, ���������� ��� �������� ������.
	\param factorUp ����������� ��������� �������� ���� "lvlUpHero".
	*/
	GameAddition(int, int, int, int, double, double, double);
	//! ���������� ��������� ���������.
	/*!
	��������� ���� ������� �� ���� lvlHero
	*/
	bool operator==(Game & game);
	//! ���������� ��������� ����������.
	/*!
	���������� �������� ���� expHero �� 1000.
	*/
	void operator++(int);
};