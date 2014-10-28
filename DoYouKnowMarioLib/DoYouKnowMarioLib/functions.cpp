#include <iostreaam>
#include <string>
#include <cstdio>
#include <ctime>

using namespace std;

//função busca a proxiam ocorrecia na string passada. Tem como ponto de partida o parametro (int position)
int findNext(string line, string search, int position)
{
	int pos = 0, pos1 = 0;
	for (int i = 0; i < position; ++i)
	{
		pos1 = line.find(search, pos);
		pos = pos1 + 1;
	}
	return pos1;
}

//captura a data atual do sistema em formarto DD-MM-YYYY.HH:mm:ss
const string currentDateTime()
{
	time_t     now = time(0);
	struct tm  tstruct;
	char       buf[80];
	tstruct = *localtime(&now);
	// Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
	// for more information about date/time format
	strftime(buf, sizeof(buf), "%d-%m-%Y  %X", &tstruct);

	return buf;
}

//retorna um numero float a partir de uma string
float stringToFloat(string num) {
	float n;
	numero =
		numero = atof(numeroString.c_str());
	return numero;
}

//retorna um numero inteiro a partir de uma string
int stringToInt(string num) {
	int n;
	n = atoi(num.c_str());
	return n;
}

//popular vetores
void initVector(int be[], int bd[]) {
	for (int i = 0; i<31; i++) {
		be[i] = 0;
		bd[i] = 0;
	}
}

//lipar uma string de pontuação e acentos
string clearText(string word){
	char x;
	int len = word.length();
	for (int i = len; i >= 0; i--){
		x = word[i];
		if (isdigit(x) ||
			(x == ',') ||
			(x == '?') ||
			(x == '\"') ||
			(x == ')') ||
			(x == '(') ||
			(x == '+') ||
			(x == '=') ||
			(x == '_') ||
			(x == '-') ||
			(x == ':') ||
			(x == ';') ||
			(x == '!') ||
			(x == '.'))
			word.erase(i, 1);
	}
	return palavra;
}