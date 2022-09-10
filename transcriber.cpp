#include <iostream>
#include <map>
#include <Windows.h>
#include <string>
using namespace std;
map<char, char> translator;
map<string, string> extra_words;

string Translate(string str)
{
	string temp;

	for (auto& i : extra_words)
	{
		int counter = 1;
		if (str == i.first)
		{
			temp += i.second;
			return temp;
		}
		if (counter == extra_words.size() - 1)
		{
			continue;
		}
		++counter;
		
	}


	for   ( int i = 0; i < str.size(); ++i)
	{
		for (map<char, char>::const_iterator j = translator.cbegin(); j != translator.end(); ++j)
		{
			

			if (str[str.size() - 1] == 'e')
			{
				if (str[i] == 'a')
				{
					temp += "эй";
					break;
				}

				if (str[i] == 'i')
				{
					temp += "ай";
					break;
				}

				if (str[i] == 'o')
				{
					if (str[i + 1] == 'o')
					{
						temp += 'у';
					}
					else
					{
						temp += "оу";
						break;
					}
				}

				if (str[i] == 'e')
				{
					temp += ' ';
					break;
				}

				if (str[i] == 'u')
				{
					temp += "ью";
					break;
				}
			}


			if (i == str.size() - 1)
			{
				if (str[i] == 'e')
				{
					temp += ' ';
					break;
				}
			}
			

			if (str[i] == 'c' && str[i + 1] == 'h')
			{
				temp += 'ч'; 
				i++;
				break;
			}


			if (str[i] == 's' && str[i + 1] == 'h')
			{
				temp += 'ш';
				i++;
				break;
			}

			if (str[i] == 'a' && str[i + 1] == 'y')
			{
				temp += "эй";
				i++;
				break;
			}

			if (str[i] == 'e' && str[i + 1] == 'e')
			{
				temp += 'и';
				i++;
				break;
			}

			if (str[i] == 'p' && str[i + 1] == 'h')
			{
				temp += 'ф';
				i++;
				break;
			}

			if (str[i] == 'e' && str[i + 1] == 'a')
			{
				temp += 'и';
				i++;
				break;
			}

			if (str[i] == 't' && str[i + 1] == 'h')
			{
				temp += 'с';
				i++;
				break;
			}

			if (str[i] == 'o' && str[i + 1] == 'o')
			{
				temp += 'у';
				i++;
				break;
			}

			if (str[i] == 'u' && str[i + 1] == 'i')
			{
				temp += 'и';
				i++;
				break;
			}

			if (str[i] == 'a' && str[i + 1] == 'u')
			{
				temp += 'о';
				i++;
				break;
			}

			if (str[i] == 'x')
			{
				temp += "кс";
				break;
			}

			if (str[i] == j->first)
			{
				if (str[i] == 'u' && str.size() - 1 != 'e')
				{
					temp += 'a';
					break;
				}
				else
				{
					temp += j->second;
					break;
				}
			}
			if (str[i] == j->second)
			{
				
				temp += j->first;
				break;
			}
			
		}
	}
	
	
	

	SetConsoleCP(866);
	return temp;
	
}
    


int main() 
{
	setlocale(LC_ALL, "ru");
	extra_words.emplace("arm", "арм");
	extra_words.emplace("queen", "куин");
	extra_words.emplace("be", "би");
	extra_words.emplace("she", "ши");
	extra_words.emplace("he", "хи");
	extra_words.emplace("they", "зэй");
	extra_words.emplace("we", "уи");
	extra_words.emplace("you", "ю");
	extra_words.emplace("queue", "кью");
	extra_words.emplace("go", "гоу");
	extra_words.emplace("put", "пут");
	extra_words.emplace("mouse", "маус");
	extra_words.emplace("woman", "вумэн");
	extra_words.emplace("the", "зэ");
	extra_words.emplace("this", "зыс");
	extra_words.emplace("that", "зэт");
	extra_words.emplace("these", "зиис");
	extra_words.emplace("those", "зоус");
	extra_words.emplace("bush", "буш");
	extra_words.emplace("army", "арми");
	extra_words.emplace("doughter", "дотэр");
	extra_words.emplace("brother", "бразэр");
	extra_words.emplace("mother", "мазэр");
	extra_words.emplace("father", "фазэр");
	extra_words.emplace("thank", "сэнк");
	extra_words.emplace("what", "уот");
	extra_words.emplace("where", "уээ");
	extra_words.emplace("who", "ху");
	extra_words.emplace("head", "хэд");
	extra_words.emplace("last", "ласт");
	extra_words.emplace("son", "сан");
	extra_words.emplace("light", "лайт");
	extra_words.emplace("fight", "файт");
	extra_words.emplace("right", "райт");
	extra_words.emplace("sight", "сайт");
	extra_words.emplace("night", "найт");
	extra_words.emplace("guide", "гуайд");
	extra_words.emplace("might", "майт");
	extra_words.emplace("buy", "бай");
	extra_words.emplace("calm", "кам");
	extra_words.emplace("apple", "эппл");
	extra_words.emplace("age", "эйдж");

	translator.emplace('a', 'а');
	translator.emplace('b', 'б');
	translator.emplace('c', 'к');
	translator.emplace('d', 'д');
	translator.emplace('e', 'э');
	translator.emplace('f', 'ф');
	translator.emplace('g', 'г');
	translator.emplace('h', 'х');
	translator.emplace('i', 'и');
	translator.emplace('j', 'ж');
	translator.emplace('k', 'к');
	translator.emplace('l', 'л');
	translator.emplace('m', 'м');
	translator.emplace('n', 'н');
	translator.emplace('o', 'о');
	translator.emplace('p', 'п');
	translator.emplace('q', 'к');
	translator.emplace('r', 'р');
	translator.emplace('s', 'с');
	translator.emplace('t', 'т');
	translator.emplace('u', 'у');
	translator.emplace('v', 'в');
	translator.emplace('w', 'в');
	translator.emplace('z', 'з');
	SetConsoleCP(1251);



	string str;
	cin >> str;
	
	cout << Translate(str) << endl;
	
	
	return 0;
}