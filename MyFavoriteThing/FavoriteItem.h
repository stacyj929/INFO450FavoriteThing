#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

const int ERROR1 = 330;

class FavoriteItem
{
private:
	string title;
	string rating;
	string genre;
	int yearReleased;
	int imdbScore;
public:
	FavoriteItem();
	~FavoriteItem();
	int getFavoriteItem();
	int addFavorite(int num);
	

	friend ostream & operator<<(ostream &os, const FavoriteItem &item);

};
