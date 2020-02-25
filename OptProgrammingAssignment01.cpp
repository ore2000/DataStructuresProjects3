//Programming assigment 1
//Name: Oreoluwa A. BAbatunde
//COSC2030 Spring 2020
// Date LAst Modified 2/25/2020

#include<vector>
#include<string>
#include<fstream>
#include<iostream>
#include<algorithm>
#include "OptlinkedList.h"
#include "OptnodeOBJ.h"
#include "timer.h"
using namespace std;

//function used to remove non alphabets and apostrophes.
void cleanWord(string& word)
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


//function used to read from the dictionary,store it in a vector and sort it alphabetically.
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



int main()
{
	float correctlySpelled = 0.0;
	float wrongSpelling = 0.0;
	int skipped = 0;
	float foundAvg = 0.0;
	float notFoundAvg = 0.0;
	ofstream outfile;
	outfile.open("misspelled.txt");

	Timer timer;
	vector<string> call;
	vector<string> missPelled;
	string word;
	linkedList<string> dict;

	call = readDict();
	for (string readWord : call)
	{
		cleanWord(readWord);
		dict.insert(readWord);
	}
   //dict.print();
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
			if (bookword.compare("") == 0)
			{

			}
			else  if (!(isalpha(bookword[0])))
			{
				skipped++;
			}
			else if (dict.find(bookword))
			{
				correctlySpelled++;
			}
			else
			{
				missPelled.push_back(bookword);
				wrongSpelling++;
			}
			infile >> bookword;
		}
		timer.Stop();
	}
	for(string w: missPelled)
	{
		outfile<<w;
		outfile << "\n";
	}
	outfile.close();
	foundAvg = ((correctlySpelled) / (dict.foundComp));
	notFoundAvg = ((wrongSpelling) / (dict.notFoundComp));
	infile.close();
	cout << "Done Checking and these are the results";
	cout << "\n";
	cout << "finished in time: ";
	cout << timer.Time();
	cout << "\n";
	cout << "There are ";
	cout << correctlySpelled;
	cout << " words found in the dictionary";
	cout << "\n";
	cout << dict.foundComp;
	cout << " Compares. Average: ";
	cout << foundAvg;
	cout << "\n";
	cout << "There are ";
	cout << wrongSpelling;
	cout << " words NOT found in the dictionary";
	cout << "\n";
	cout << dict.notFoundComp;
	cout << " compares. Average: ";
	cout << notFoundAvg;
	cout << "\n";
	cout << "There are ";
	cout << skipped;
	cout << " words not checked.";
	cout << "\n";

	return 0;
}
