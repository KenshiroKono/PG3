#include<stdio.h>
#include<list>
using namespace std;

int main() {
	list<const char* >stations =
	{
		"Tokyo","Kanda","Akihabara",
		"Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome",
		"Sugamo","Otuka","Ikebukuro",
		"Mejiro","Takadanobaba","Sin-Okubo",
		"Shinjuku""Yoyogi","Harajuku",
		"Shibuya","Ebisu","Meguro","Gotanda",
		"Osaki","Shinagawa","Tamachi",
		"Hamamatucho","Shimbashi","Yurakucho",
	};

	//1970�N
	printf("--- 1970 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		printf("%s\n", *itr);
	}
	//1971�N"Nisi-Nippori"�ǉ�
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		if (strcmp(*itr, "Tabata") == 0) {
			itr = stations.insert(itr, "Nisi-Nippori");
			break;
		}
	}


	//2019�N
	printf("--- 2019 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		printf("%s\n", *itr);

	}
	//2020�N"Tkanawa-Gateway"�ǉ�
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		if (strcmp(*itr, "Tamachi") == 0) {
			itr = stations.insert(itr, "Tkanawa-Gateway");
			break;
		}
	}


	//2022�N
	printf("--- 2022 ---\n");
	for (auto itr = stations.begin(); itr != stations.end(); itr++) {
		printf("%s\n", *itr);
	}

	return 0;
}
