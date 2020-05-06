#ifndef GHOST
#define GHOST
#include "Object.h"
#include <cstdlib>   
#include <ctime>
#include<fstream>
#include<queue>
#define row 21
#define col 17



class Ghost:public Object
{
private:
	bool canMove;
	int gpath[row][col];
	vector<int> graph[200];
	int cost[200];
	bool startLeft;
	int wait;
public:
	Ghost();
	Ghost(string n, int initialR, int initialC, string imagename,bool sl);
	Ghost& operator=(Ghost&);
	void setGhost(string n, int initialR, int initialC, string imagename1, string imagename2, string imagename3, bool can, bool sl);
	void move(int node);
	void freightMode();
	void unFreight();
	int getDirection(int  x, int y);
	int getFreightDirection(int x, int y);
	void okMove(bool n);
};

#endif