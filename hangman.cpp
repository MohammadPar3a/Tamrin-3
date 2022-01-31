#include <iostream>

using namespace std;


int main()
{
	string words[3] = { "apple", "car", "bear" };
	int random;
	string word, input_word;
	char user_letter;



	srand(time(0));
	random = rand() % 3;
	word = words[random];

	for (int i = 0; i < word.size(); i++)
	{
		cout << "_";
	}
	while (true)
	{
		cout << "\nEnter a letter : ";
		cin >> user_letter;


		for (int i = 0; i < word.size(); i++)
		{
			if (user_letter == word[i])
			{
				cout << user_letter;
				for (int i = 0; i < word.size(); i++)
				{
					input_word = user_letter;
					cout << input_word;
				}

			}
			else
			{
				cout << "_";
			}
		}
	}

	cout << words[random];


}