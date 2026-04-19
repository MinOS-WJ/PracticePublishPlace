#include "usr.h"
#include <string>
using namespace std;

int main()
{
	int i,j,k;
	string name1,name2,name3;
	float score1,score2,score3;
	cin >> i >> name1 >> score1;
	cin >> j >> name2 >> score2;
	cin >> k >> name3 >> score3;
	Add(i,name1,score1);
	Add(j,name2,score2);
	Add(k,name3,score3);
	PrintAll();
	Average();
}