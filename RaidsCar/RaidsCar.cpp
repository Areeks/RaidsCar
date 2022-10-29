#include "headers.h"
//Made by Areeks® 
int main()
{
	vector<Member> MemberBase;

	int x;
	int licznik = 0;
	do
	{
		system("cls");
		cout << "Program Rajdowy" << endl;
		cout << "1. Wyswietl liste zawodnikow" << endl;
		cout << "2. Dodaj kierowce" << endl;
		cout << "3. Zmien status kierowcy" << endl;
		cout << "4. Wyswietl gotowych kierowcow" << endl;
		cout << "5. Wyswietl liczbe oczekujacych kierowcow" << endl;
		cout << "6. Start Kierowcy" << endl;
		cout << "7. Wyswietl tablice generalna" << endl;
		cout << "8. Wycofaj kierowce" << endl;
		cout << endl << endl << "Wybierz opcje: ";
		cin >> x;
		switch (x)
		{
		case 1:
			ShowMembers(MemberBase);
			cin.get();
			cin.get();
			break;
		case 2:
		{
			system("cls");
			Member temp = AddMember(licznik);
			MemberBase.push_back(temp);
			licznik++;
		}
		break;
		case 3:
			MemberBase = ChangeMemberStat(MemberBase, licznik);
			break;
		case 4:
			ShowCheckMember(MemberBase);
			break;
		case 5:
			ShowWaitingMembers(MemberBase);
			break;
		case 6:
			MemberBase = StartMember(MemberBase, licznik);
			break;
		case 7:
			LookTimeTable(MemberBase);
			break;
		case 8:
			MemberBase = DeleteMember(MemberBase, licznik);
			break;
		}
	} while (x != 0);
}



