#include<stdio.h>
#include<list>
using namespace std;


int main(void)
{
	//駅名のリスト
	list <const char*> stationList{
			"Tokyo", "Kanda", "Akihabara", "Okachimachi", "Ueno", "Uguisudani", "Nippori", "Tabata", "Komagome", "Sugamo", "Otsuka", "Ikebukuro", "Mejiro", "Takadanobaba", "Sin-Okubo", "Shinjuku", "Yoyogi", "Harajuku", "Shibuya", "Ebisu", "Meguro", "Gotanda", "Osaki", "Sinagawa", "Tamachi", "Hamamatsucho", "Shimbashi", "Yurakucho"
	};

	//最初期の駅順
	printf("最初期の駅順\n");
	//イテレーターを使い先頭から順に描画する
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		printf("%s\n", *itr);
	}
	printf("\n");

	//1971年
	printf("1971年の駅順\n");
	//iteratorを使い先頭から順に探索、Tabataがあったらその前にNishi-Nipporiを挿入する
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		if (*itr == "Tabata")
		{
			itr = stationList.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		printf("%s\n", *itr);
	}
	printf("\n");

	//2020年
	printf("2020年の駅順\n");
	//iteratorを使い先頭から順に探索、Tamachiがあったらその前にTakanawa Gatawayを挿入する
	for (std::list<const char*>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		if (*itr == "Tamachi")
		{
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr)
	{
		printf("%s\n", *itr);
	}
	printf("\n");

	return 0;
}