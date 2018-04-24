// MyFavoriteThing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FavoriteItem.h"
#include "FavoriteList.h"
using namespace std;


int main()
{  
	string answer = "y";
	int count = 0;
	FavoriteList collection;



		cout << "My favorite thing is movies!\n" << endl;
		cout << "Here, you can create a list of favorite movies.\n" << endl;
		cout << "All you need to do is enter the movie title, rating (PG, PG-13, R), genre, year released and IMDB score." << endl;
		cout << "Press y to add items or v to view your collection" << endl;
		cin >> answer; 

	while (answer == "y")
	{
		if (collection.addFavoriteItem() < 0)
			break;

		cout << "\nEnter y to Continue adding movies, ";
		cout << "\nor v to View your movie collection: ";
		cin >> answer;

	}
	if (answer == "v")
	{
		collection.displayList();
	}

	

	FavoriteList mylist;
	mylist.addFavoriteItem();
	mylist.addFavoriteItem();
	mylist.displayList();
	return 0;

}

