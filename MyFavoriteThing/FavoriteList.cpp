#include "stdafx.h"
#include "FavoriteList.h"
#include <iostream>
using namespace std;

FavoriteList::FavoriteList()
{
	listSize = 0;
}

FavoriteList::~FavoriteList()
{

}

bool FavoriteList::isUnique(FavoriteItem movieEntry)
{
	for (int i = 0; i < listSize; i++)
	{
		if (movieEntry.getFavoriteItem() == movieArray[i].getFavoriteItem())
		{
			
			return false;
		}
	}
	return true;
}




int FavoriteList::addFavoriteItem()
{
	if (movieArray[listSize].getFavoriteItem() == 0
			&& isUnique(movieArray[listSize]))
	{
		listSize++;
		return 0;
	}
	else
	{
		cout << "error occurred in addFavoriteItem " << endl;
		return ERROR1;
	}
}

void FavoriteList::displayList()
{
	for (int outer = 1; outer < listSize; outer++)
	{
		int inner = outer;
		while (inner > 0 &&
			movieArray[inner].getFavoriteItem() < movieArray[inner - 1].getFavoriteItem())
		{
			FavoriteItem temp = movieArray[inner];
			movieArray[inner] = movieArray[inner - 1];
			movieArray[inner - 1] = temp;
			inner--;
		}
	}
	cout << "Here is your collection. It has " << listSize << " movies!\n\n";
	for (int i = 0; i < listSize; i++)
	{
		cout << movieArray[i];
		cout << endl << endl;
	}
}

/*void FavoriteList::displayList()
{
	int i;
	for (i = 0; i < listSize; i++)
	{
		cout << movieArray[i];
		cout << endl << endl;
	}
}*/