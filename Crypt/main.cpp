#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

string ReadFile(string filename);
vector<pair<char, char>> CreateTable(int key);
string encrypt(string in, const vector<pair<char, char>> &table);
bool SaveFile(string path, string content);

int main(int argc, char const *argv[])
{
    char option = 'z';
    string efilename("Encrypted.txt");
    string dfilename("Text.txt");
    string outfilename("out.txt");
    vector<pair<char, char>> tableE = CreateTable(7);
    vector<pair<char, char>> tableD = CreateTable(-7);
    // string text = ReadFile(filename);
    string ttext;
    string out;

    cout << "1 - encrypt" << endl
         << "2 - decrypt" << endl
         << "0 - exit" << endl;
    cin >> option;
    switch (option)
    {
    case '1':
        ttext = ReadFile(dfilename);
        out = encrypt(ttext, tableE);
        break;

    case '2':
        ttext = ReadFile(efilename);
        out = encrypt(ttext, tableD);
        break;

    default:
        break;
    }
    SaveFile(outfilename, out);

    return 0;
}

string ReadFile(string filename)
{
    ifstream t(filename);
    stringstream buffer;
    buffer << t.rdbuf();
    string out = buffer.str();

    return out;
}
bool SaveFile(string path, string content)
{
    ofstream filereader(path);

    if (!filereader.is_open())
        return false;
    filereader << content << endl;

    filereader.close();

    return true;
}

vector<pair<char, char>> CreateTable(int key)
{
    vector<pair<char, char>> cypher(256);

    for (size_t i = 0; i < 256; i++)
    {
        cypher.at(i).first = i;
        cypher.at(i).second = i + key;
    }
    return cypher;
}

string encrypt(string in, const vector<pair<char, char>> &table)
{
    string buffer;
    char ch = '\0';
    for (size_t i = 0; i < in.size(); i++)
    {
        ch = in.at(i);
        buffer += table.at(ch).second;
    }

    return buffer;
}