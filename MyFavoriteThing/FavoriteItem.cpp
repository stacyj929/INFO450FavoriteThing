#include "stdafx.h"
#include "FavoriteItem.h"


FavoriteItem::FavoriteItem()
{
	title = " ";
	rating = " ";
	genre = " ";
	yearReleased = 0;
	imdbScore = 0; 
	
}

FavoriteItem::~FavoriteItem()
{
	
}

int FavoriteItem::getFavoriteItem()
{
	cout << "Title? /n";
	cin >> title;
	cout << "Rating? /n ";
	getline(cin, rating);
	cout << "Genre?";
	getline(cin, genre);
	cout << "Year released?";
	cin >> yearReleased;
	cout << "IMDB Score?";
	cin >> imdbScore;

};
	




	ostream & operator<<(ostream &os, const FavoriteItem &item)
{
	os << "**** ITEM ****" << endl;
	os << "Title: " << item.title << endl;
	os << "Rating: " << item.rating << endl;
	os << "Genre: " << item.genre << endl;
	os << "Year released: " << item.yearReleased << endl;
	os << "IMDB score: " << item.imdbScore << endl;
	return os;
}