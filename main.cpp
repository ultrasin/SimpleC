#include <iostream>
#include <vector>
#include <string>

using std::cout; using std::string; using std::vector; using std::endl;

int main()
{
    vector<string> msg {"Bye", "baby", "from", "another", "string!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}