#include "headers.h"


void Member::AddMember(int id, string surname, string name, string nrre, string nrpj)
{
    this->id = id;
    this->name = name;
    this->surname = surname;
    this->nrpj = nrpj;
    this->nrre = nrre;
    this->status = false;
    this->stime = 0;
}

void Member::SetStatus(bool status)
{
    this->status = status;
}

void Member::StartRajd()
{
    srand(time(NULL));
    this->stime = rand() % 240 + 60;
}

int Member::GetId() { return this->id; }
std::string Member::GetSurname() { return this->surname; }
std::string Member::GetName() { return this->name; }
std::string Member::GetnrRe() { return this->nrre; }
std::string Member::Getnrpj() { return this->nrpj; }
int Member::GetTime() { return this->stime; }
bool Member::GetStatus() { return this->status; }


