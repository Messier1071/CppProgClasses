#include <iostream>
#include <vector>
#include <fstream>

// Ian Martins Mendes (23205319)

using namespace std;

int newWord(vector<string> &WordList);
int printList(const vector<string> &WordList);
int exactSearch(const vector<string> &WordList);
int fuzzySearch(const vector<string> &WordList);
int eraseEntryByIndex(vector<string> &WordList);
int fuzzyRemove(vector<string> &WordList);
bool ReadFile(vector<string> &WordList, string path);
bool SaveFile(const vector<string> &WordList, string path);

int main(int argc, char const *argv[])
{
    char option = 'z';
    string filename("pass.txt");

    vector<string> WordList;
    ReadFile(WordList, filename);
    while (option != '0')
    {
        cout << "1 insert word" << endl
             << "2 ToString" << endl
             << "3 ExactSearch" << endl
             << "4 FuzzySearch" << endl
             << "5 removebyIndex" << endl
             << "6 fuzzy remove" << endl
             << "0 exit" << endl;
        cin >> option;

        switch (option)
        {
        case '1':
            newWord(WordList);
            break;
        case '2':
            printList(WordList);
            break;
        case '3':
            exactSearch(WordList);
            break;
        case '4':
            fuzzySearch(WordList);
            break;
        case '5':
            eraseEntryByIndex(WordList);
            break;
        case '6':
            fuzzyRemove(WordList);
            break;
        default:
            break;
        }
    }
    SaveFile(WordList, filename);
    return 0;
}

int newWord(vector<string> &WordList)
{
    cout << "\n\n\n\n\n\n------------------------------" << endl
         << "write a word: " << endl;

    string word;
    cin >> word;
    WordList.push_back(word);
    cout << "------------------------------" << endl;
    return 1;
}

int printList(const vector<string> &WordList)
{
    string hold;
    cout << "\n\n\n\n\n\n------------------------------" << endl;
    for (size_t i = 0; i < WordList.size(); i++)
    {
        cout << "[" << i << "]" << WordList.at(i) << endl;
    }

    cout << "------------------------------" << endl;
    return 1;
}

int exactSearch(const vector<string> &WordList)
{
    cout << "insert string to search:" << endl;
    string word;
    cin >> word;
    int count = 0;
    cout << "\n\n\n\n\n\n------------------------------" << endl;
    for (size_t i = 0; i < WordList.size(); i++)
    {
        if (WordList.at(i) == word)
        {
            cout << "Found at [" << i << "]:" << WordList.at(i) << endl;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "no matches" << endl;
    }
    cout << "------------------------------" << endl;
    return count;
}

int fuzzySearch(const vector<string> &WordList)
{
    cout << "insert substring to search:" << endl;
    string word;
    cin >> word;
    int count = 0;
    cout << "------------------------------" << endl;
    for (size_t i = 0; i < WordList.size(); i++)
    {
        if (WordList.at(i).find(word) != -1)
        {
            cout << "Found at [" << i << "]:" << WordList.at(i) << endl;
            count++;
        }
    }
    if (count == 0)
    {
        cout << "no matches" << endl;
    }
    cout << "------------------------------" << endl;
    return count;
}

int eraseEntryByIndex(vector<string> &WordList)
{
    int hold;
    cout << "\n\n\n\n\n\n------------------------------" << endl
         << "insert the id to remove";
    cin >> hold;
    WordList.erase(WordList.begin() + hold);

    cout << "------------------------------" << endl;
    return 1;
}

int fuzzyRemove(vector<string> &WordList)
{
    cout << "insert substring to remove:" << endl;
    string word;
    cin >> word;
    int count = 0;
    cout << "------------------------------" << endl;

    size_t i = 0;

    while (true)
    {
        if (WordList.at(i).find(word) != -1)
        {
            cout << "Removed at [" << i << "]:" << WordList.at(i) << endl;

            WordList.erase(WordList.begin() + i);
            count++;
        }
        else
        {

            i++;
        }
        if (i >= WordList.size())
        {
            break;
        }
    }

    if (count == 0)
    {
        cout << "no matches" << endl;
    }
    cout << "------------------------------" << endl;
    return count;
}

bool ReadFile(vector<string> &WordList, string path)
{
    ifstream filereader(path);
    int i = 0;
    if (!filereader.is_open())
        return false;

    string tmp;
    while (getline(filereader, tmp))
    {
        WordList.push_back(tmp);
    }

    filereader.close();

    return true;
}

bool SaveFile(const vector<string> &WordList, string path)
{
    ofstream filereader(path);

    if (!filereader.is_open())
        return false;

    string tmp;

    for (size_t i = 0; i < WordList.size(); i++)
    {
        filereader << WordList.at(i) << endl;
    }

    filereader.close();

    return true;
}