#include "gtest/gtest.h"
#include "../HOG/Game.h"
#include "../HOG/GameAddition.h"

//! ���� ������������ �� ���������
TEST(Game, DefaultConstructor)
{
	Game game;
	ASSERT_EQ(1, game.getLvlHero());
	ASSERT_EQ(0, game.getTotalPoints());
	ASSERT_EQ(0, game.getTotalBattles());
	ASSERT_EQ(10, game.getExpMonster());
	ASSERT_EQ(0, game.getExpHero());
	ASSERT_EQ(100, game.getLvlUpHero());
	ASSERT_EQ(1.2, game.getFactorUp());
}

//! ���� �������� � ��������
TEST(Game, SettersGetters)
{
	Game game;
	game.setLvlHero(10);
	game.setTotalPoints(100);
	game.setTotalBattles(15);
	game.setExpMonster(25);
	game.setExpHero(100000);
	game.setLvlUpHero(10);
	game.setFactorUp(1.1);
	ASSERT_EQ(10, game.getLvlHero());
	ASSERT_EQ(100, game.getTotalPoints());
	ASSERT_EQ(15, game.getTotalBattles());
	ASSERT_EQ(25, game.getExpMonster());
	ASSERT_EQ(100000, game.getExpHero());
	ASSERT_EQ(10, game.getLvlUpHero());
	ASSERT_EQ(1.1, game.getFactorUp());
}

//! ���� �������� � �������� �� ������������
TEST(Game, SettersGettersStability)
{
	Game game;
	game.setLvlHero(-1);
	game.setTotalPoints(-1);
	game.setTotalBattles(-1);
	game.setExpMonster(-1);
	game.setExpHero(-1);
	game.setLvlUpHero(-1);
	game.setFactorUp(-1);
	ASSERT_EQ(1, game.getLvlHero());
	ASSERT_EQ(0, game.getTotalPoints());
	ASSERT_EQ(0, game.getTotalBattles());
	ASSERT_EQ(10, game.getExpMonster());
	ASSERT_EQ(0, game.getExpHero());
	ASSERT_EQ(100, game.getLvlUpHero());
	ASSERT_EQ(1.2, game.getFactorUp());
}

//! ���� ������ ��������� ���������� ��� ����� ����
TEST(Game, ParametersNewGame)
{
	Game game;
	game.newGame();
	ASSERT_EQ(1, game.getLvlHero());
	ASSERT_EQ(0, game.getTotalPoints());
	ASSERT_EQ(0, game.getTotalBattles());
	ASSERT_EQ(10, game.getExpMonster());
	ASSERT_EQ(0, game.getExpHero());
	ASSERT_EQ(100, game.getLvlUpHero());
	ASSERT_EQ(1.2, game.getFactorUp());
}

//! ���� ������ �������� ������.
TEST(Game, LvlUp)
{
	Game game;
	game.setLvlHero(1);
	game.setExpHero(0);
	game.setLvlUpHero(10);
	game.setFactorUp(2.0);
	game.lvlUp();
	ASSERT_EQ(0, game.getExpHero());
	ASSERT_EQ(10, game.getLvlUpHero());
	ASSERT_EQ(1, game.getLvlHero());
	game.setLvlHero(1);
	game.setExpHero(100);
	game.setLvlUpHero(50);
	game.lvlUp();
	ASSERT_EQ(50, game.getExpHero());
	ASSERT_EQ(100, game.getLvlUpHero());
	ASSERT_EQ(2, game.getLvlHero());
}

//! ���� ���������� ��������� ���������.
TEST(GameAddition, OperatorCompare)
{
	Game game;
	GameAddition gameAdd;
	game.setLvlHero(100);
	gameAdd.setLvlHero(100);
	ASSERT_TRUE(gameAdd == game);
	game.setLvlHero(10);
	gameAdd.setLvlHero(100);
	ASSERT_FALSE(gameAdd == game);
}

//! ���� ���������� ��������� ����������.
TEST(GameAddition, OperatorIncrement)
{
	GameAddition gameAdd;
	gameAdd.setExpHero(100);
	gameAdd++;
	ASSERT_EQ(1100, gameAdd.getExpHero());
}

int main(int argc, char ** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	if (!RUN_ALL_TESTS())
		std::cout << "All Tests are Passed." << std::endl;
	else
		std::cerr << "One or more tests FAILED!" << std::endl;
	std::cin.get();
	return 0;
}