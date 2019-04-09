#include "GameAddition.h"

GameAddition::GameAddition() : Game()
{

}

GameAddition::GameAddition(int lvlHero, int totalPoints, int totalBattles, int expMonster, double expHero, double lvlUpHero, double factorUp)
{
	setLvlHero(lvlHero);
	setTotalPoints(totalPoints);
	setTotalBattles(totalBattles);
	setExpMonster(expMonster);
	setExpHero(expHero);
	setLvlUpHero(lvlUpHero);
	setFactorUp(factorUp);
}

bool GameAddition::operator == (Game & game)
{
	return getLvlHero() == game.getLvlHero();
}

void GameAddition::operator++(int)
{
	Game game;
	setExpHero(getExpHero() + 1000);
}