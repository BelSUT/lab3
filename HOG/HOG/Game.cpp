#include "Game.h"

void Game::game(int maxLvl)
{
	newGame();
	for (totalBattles = 0;; totalBattles++)
	{
		battle();
		showResultBattle();
		if (maxLvl == lvlHero)
		{
			showResultGame(totalBattles);
			break;
		}
	}
}

int Game::getLvlHero()
{
	return lvlHero;
}

int Game::getTotalPoints()
{
	return totalPoints;
}

int Game::getTotalBattles()
{
	return totalBattles;
}

int Game::getExpMonster()
{
	return expMonster;
}

double Game::getExpHero()
{
	return expHero;
}

double Game::getLvlUpHero()
{
	return lvlUpHero;
}

double Game::getFactorUp()
{
	return factorUp;
}

void Game::setLvlHero(int x)
{
	if (x > 0) lvlHero = x;
	else lvlHero = 1;
}

void Game::setTotalPoints(int x)
{
	if (x >= 0) totalPoints = x;
	else totalPoints = 0;
}

void Game::setTotalBattles(int x)
{
	if (x >= 0) totalBattles = x;
	else totalBattles = 0;
}

void Game::setExpMonster(int x)
{
	if (x > 0) expMonster = x;
	else expMonster = 10;
}

void Game::setExpHero(double x)
{
	if (x >= 0.0) expHero = x;
	else expHero = 0;
}

void Game::setLvlUpHero(double x)
{
	if (x > 0.0) lvlUpHero = x;
	else lvlUpHero = 100;
}

void Game::setFactorUp(double x)
{
	if (x > 1.0) factorUp = x;
	else factorUp = 1.2;
}

void Game::newGame()
{
	lvlHero = 1;
	totalPoints = 0;
	totalBattles = 0;
	expMonster = 10;
	expHero = 0;
	lvlUpHero = 100;
	factorUp = 1.2;
}

Game::Game()
{
	lvlHero = 1;
	totalPoints = 0;
	totalBattles = 0;
	expMonster = 10;
	expHero = 0;
	lvlUpHero = 100;
	factorUp = 1.2;
}

void Game::battle()
{

	int maxLvlMonster = lvlHero + 4, minLvlMonster = 0, chanceWin, factorExp = 1, MIN = 0, MAX = 100, delay = 100;
	if (lvlHero > 4)
	{
		minLvlMonster = lvlHero - 4;
	}
	std::random_device rd;
	std::mt19937 generator(rd());
	std::uniform_int_distribution<int> randomLvlMonster(minLvlMonster, maxLvlMonster), randomChanceWin(MIN, MAX);
	lvlMonster = randomLvlMonster(generator);
	if (lvlHero - 4 <= lvlMonster && lvlMonster <= lvlHero - 2)
	{
		chanceWin = 100;
		if (lvlMonster < lvlHero - 2)
		{
			factorExp = 0;
		}
	}
	if (lvlHero - 1 <= lvlMonster && lvlMonster <= lvlHero + 1)
	{
		chanceWin = 60;
	}
	if (lvlHero + 2 == lvlMonster)
	{
		chanceWin = 45;
	}
	if (lvlHero + 3 == lvlMonster)
	{
		chanceWin = 30;
	}
	if (lvlHero + 4 == lvlMonster)
	{
		chanceWin = 15;
	}
	if (randomChanceWin(generator) <= chanceWin)
	{
		expHero += expMonster * factorExp;
		totalPoints++;
	}
	lvlUp();
}

void Game::lvlUp()
{
	if (expHero >= lvlUpHero)
	{
		expHero -= lvlUpHero;
		lvlHero++;
		lvlUpHero *= factorUp;
	}
}

void Game::showResultGame(int i)
{
	std::cout << "Victory!" << std::endl
		<< "Total battles : " << i + 1 << std::endl
		<< "Total points : " << totalPoints << std::endl;
}

void Game::showResultBattle()
{
	std::cout << "Level hero : " << lvlHero << std::endl
		<< "Exp hero : " << expHero << std::endl
		<< "Exp for level up : " << lvlUpHero << std::endl
		<< std::endl;
}