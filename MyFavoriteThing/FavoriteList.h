#pragma once

#include "stdafx.h"
#include "FavoriteItem.h"

class FavoriteList
{
private:
	FavoriteItem movieArray[100];
	int listSize;
public:
	FavoriteList();
	~FavoriteList();
	bool isUnique(FavoriteItem movieEntry);
	int addFavoriteItem();
	void displayList();
};
