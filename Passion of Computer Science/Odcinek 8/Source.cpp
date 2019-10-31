#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

	/*string name;
	cout << "Please tell me your name: ";
	cin >> name;


	int name_lenght=name.length();
	//cout << name_lenght;
	//cout << endl;

	if (name[name_lenght - 1] == 'a')
	{
		cout << "You are probably a woman.";
	}
	else
	{
		cout << "You are probably a man";
	}*/ //checking if nameis feminin or masculin


	/*string word;
	cout << "Please give me a word: ";
	cin >> word;
	int word_lenght = word.length();
	for (int i = word_lenght -1; i>=0; i--)
	{
		cout << word[i];
	}*/ //printing word backwards

	/*string sentence;
	cout << "Please give me the provisional sentence:";
	getline(cin, sentence);
	cout << sentence;*/ //getting whole sentences

	/*string first_sentence = "Jenny has a cat ";
	string second_sentence = "Toby has a dog ";
	string merged_sentences = first_sentence + second_sentence;

	cout << merged_sentences;*/

	/*string sentence = "Jenny has a dog";

	transform(sentence.begin(), sentence.end(), sentence.begin(), ::toupper);
	cout << sentence;
	cout << endl;
	transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
	cout << sentence;*/ //letter to uppercase and lowercase

	/*string sentence = "Jenny has a cat";
	string search = "cat";

	size_t position = sentence.find(search);

	if (position != string::npos)
		cout << "Found on the position: " << position;
	else
		cout << "Not found";*/ //searching of the word in a sentence

	/*string sentence = "Jenny has a cat";
	sentence.erase(12, 3);

	cout << sentence;*/ //erasing words from sentence

	return 0;
}