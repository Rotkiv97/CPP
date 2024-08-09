#include <string>
#ifndef CONCTAT_HPP
#define CONCTAT_HPP
class Contatto{
	private:
		std::string name;
		std::string lastname;
		std::string nikname;
		std::string number;
		std::string secret;

	public:
		Contatto();
			Contatto(std::string pname, std::string plastname, std::string pnikname, std::string pnumber, std::string psecreat){
				name = pname;
				lastname = plastname;
				nikname = pnikname;
				number = pnumber;
				secret = psecreat; 
			}
		std::string GetName();
		std::string GetLastName();
		std::string GetNikName();
		std::string GetNumber();
		std::string GetSecreat();
		void	SetName(std::string tname);
		void	SetLastName(std::string tlastname);
		void	SetNikName(std::string tnikname);
		void	SetNumber(std::string tnumber);
		void	SetSecret(std::string tsecret);
		~Contatto();
};

#endif