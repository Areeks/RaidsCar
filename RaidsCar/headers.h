#ifndef _headers_h_
#define _headers_h_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <stdint.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <iomanip>
#include <algorithm>
#include "Members.h"

using namespace std;

Member AddMember(int licznik);
void ShowMembers(vector<Member> bazaZawodnikow);
vector<Member> ChangeMemberStat(vector<Member> bazaZawodnikow, int licznik);
void ShowCheckMember(vector<Member> bazaZawodnikow);
void ShowWaitingMembers(vector<Member> bazaZawodnikow);
void LookTimeTable(vector<Member> bazaZawodnikow);
vector<Member> StartMember(vector<Member> bazaZawodnikow, int licznik);
vector<Member> DeleteMember(vector<Member> bazaZawodnikow, int licznik);

#endif




