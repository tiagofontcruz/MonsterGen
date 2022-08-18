#include<iostream>

#include "Monster.h"

void main()
{
	//create a monster object
	Monster aMonster;

	//generate the monsters
	for (int i = 0; i < 3; i++)
	{
		CreateMonster(aMonster);
		//print out the monster sheet
		aMonster.Print();
	}

	system("pause");
}