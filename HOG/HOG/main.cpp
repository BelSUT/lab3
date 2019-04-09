/*!
\mainpage ������������ ������ �3
\version 0.1
\author Zalesovskiy Vladislav
\date 09.04.2019

\section goal ������� ��� �� �3
������������. ����������
���� ������: ������� �������� ������������ � ��������-��������������� ����������������, � ����� ���������� ������� � ����������.

\subsection task �������������� �������. ������� 6
�������� ��������� ���� ����� ��������� ������� ��������. �����
������� ������������ �������� ����� ���������� ����� ������� �����
������� �� ���������� ������ � ��������� ���� �� ������� ������. �
������ ������� ���������� ����� ������� ���������� ������� �����
������� �� ��������� ������������� �� 20%. ���������� �����
�������� ������� � ���������. ���� ������� ������� ��������� �
������� ��������� ��� ������ ��� ������ ������ ��������� �� 1
����������� ������ ��� �������� ���������� 60%. ���� �������
��������� ���� ������ ������� �� 2, �� ����������� ������ ���
�������� � 100%. ������ ���� ������� ������� ���� ������ ���������
�� 3 � �����, �� �� ������ ��� ��� �������� �� ������� �����. �
���������� ������ ������� ����������� ��� �������� ������ �� 15%.
������� ����� ���������, ������������� ���� ������, ����� �������
���������� ������� �� ������, �������� �������� ����� �� ������ �
����� ������ ��������, � ����� ���� ����� �� �������� ������
�������. �������� ������ �������� ����� ����, � ������ ������� �
��������, � ������� ������� ������� ������������ ��������� �������
� ���������� +- 4 �� ������ ���������.

*/

#include "Game.h"

int main(void)
{
	int maxLvl;
	char symbol;
	Game curGame;
	for (;;)
	{
		std::cout << "Set max level :" << std::endl;
		std::cin >> maxLvl;
		curGame.game(maxLvl);
		std::cout << "Start new game?(Y/N)" << std::endl;
		std::cin >> symbol;
		if (toupper(symbol) == 'N')
		{
			break;
		}
	}
	return 0;
}