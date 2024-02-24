#include <iostream>
#include <string>
using namespace std;

string Compress(const string& str) 
{
    string NewText;
    bool space = true;

    for (int i = 0; i < str.length(); i++) 
    {
        if (isalpha(str[i])) 
        {
            NewText.push_back(str[i]);
            space = false;
        }
        else if (str[i] == ' ' && space) 
        {
            NewText.push_back(str[i]);
        }
        else if (str[i] == ' ' && !space) 
        {
            if (!isspace(NewText.back())) 
            {
                NewText.push_back(str[i]);
            }
        }
    }
    return NewText;
}

int main() {
    string Text;
    getline(cin,Text);

   cout << Compress(Text);
   
}
