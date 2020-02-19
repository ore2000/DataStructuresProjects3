//Programming assigment 1
//Name: Oreoluwa A. BAbatunde
//COSC2030 Spring 2020
// Date LAst Modified 2/17/2020

#include<vector>
#include<string>
#include<fstream>
#include<iostream>
#include<algorithm>
#include "linkedList.h"
#include "nodeOBJ.h"
#include "timer.h"
using namespace std;


void cleanWord(string &word)
{
	int len = word.size();
	string comp;
	string apos = "'";
	for (int i = 0; i < len; i++)
	{
		comp = word[i];
		if (isalpha(word[i]))
		{
			if (isupper(word[i]))
			{
				word[i] = tolower(word[i]);
			}
		}
		else if (isdigit(word[i]))
		{
			word[i] = word[i];
		}
		else if (comp == apos)
		{
			word[i] = word[i];
		}
		else
		{
			word = word.erase(i, 1);
			len = word.size();
			i--;
		}
	}
}



vector<string> readDict()
{
	ifstream infile;
	vector<string> words;
	string filename;
	filename = "dict.txt";
	string word;
	infile.open(filename);

	if (infile.is_open())
	{
		infile >> word;
		while (!infile.eof())
		{
			words.push_back(word);
			infile >> word;
		}
		sort(words.begin(), words.end());
	}
	infile.close();
	return words;
}

	void printInfo(int dictSize, float spellCheckTime, int NumberOfWowrdsSpelledCorrectly, float avgCOmp, int wordsNotFound, int AvgWordsNotFound, int wordsNotChecked)
	{
		cout << " Time to spell check: ";
		cout << spellCheckTime;
		cout << "\n";

     }

int main()
{
	int correctlySpelled = 0;
	int wrongSpelling = 0;
	int skipped = 0;

	Timer timer;
	vector<string> call;
	string word;
	linkedList<string> dict;

	call = readDict();
	for (string readWord : call)
	{
		cleanWord(readWord);
		dict.insert(readWord);
	}

	cout << "Size of linked List: ";
	cout << dict.getSize();
	cout << "\n";

	ifstream infile;
	string filename;
	filename = "book.txt";
	string bookword;
	infile.open(filename);

	if (infile.is_open())
	{
		timer.Start();
		infile >> bookword;
		
		while (!infile.eof())
		{
			cleanWord(bookword);
			if (bookword == "'")
			{
				skipped++;
			}
			else if (!(isalpha(bookword[0])))
			{
				skipped++;
			}
		    if (dict.find(bookword))
			{
				correctlySpelled++;
			}
			else
			{
				wrongSpelling++;
			}
			infile >> bookword;
		}
		timer.Stop();
	}
	infile.close();
	cout << "Number of Correctly spelled words: ";
	cout << correctlySpelled;
	cout << "\n";
	cout << "Number of wrongly spelled words: ";
	cout << wrongSpelling;
	cout << "\n";
	cout << "Number of skipped words: ";
	cout << skipped;
	cout << "\n";
	cout << "time it took to run: ";
	cout << timer.Time();
	

	system("pause");
	return 0;
}