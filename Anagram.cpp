#include <iostream>
#include <map>
#include <string>

bool check_anagram(std::string, std::string);
void fill_map(std::map<char, int>&, std::string&);
bool comparison(std::map<char, int>&, std::map<char, int>&);

int main()
{
    std::string f, s;
    std::cout << "Anagram check!\n";
    std::cout << "Enter first word: ";
    std::cin >> f;
    std::cout << "Enter second word: ";
    std::cin >> s;
    std::cout << (check_anagram(f, s) ? "Yes!" : "No!");
}

bool check_anagram(std::string f, std::string s)
{
    if (f.length() != s.length())
    {
        return false;
    }
    else
    {
        std::map<char, int> fList, sList;
        fill_map(fList, f);
        fill_map(sList, s);
    }
}

void fill_map(std::map<char, int>& list, std::string& word)
{
    for (int i = 0; i < word.length(); i++)
    {
        list.insert(std::pair<char, int>(word[i], i));
    }
}

bool comparison(std::map<char, int>& fList, std::map<char, int>& sList)
{

}