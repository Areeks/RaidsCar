
class Member
{
	int id;
	std::string name;
	std::string surname;
	std::string nrre;
	std::string nrpj;
	bool status;
	int stime;
public:
	void AddMember(int id, std::string surname, std::string name, std::string nrre, std::string nrPranrpjwaJazdy);
	void SetStatus(bool status);
	void StartRajd();
	int GetId();
	std::string GetSurname();
	std::string GetName();
	std::string GetnrRe();
	std::string Getnrpj();
	int GetTime();
	bool GetStatus();
};

