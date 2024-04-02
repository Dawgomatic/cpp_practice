#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string inputString;
    vector<char> s;
    cout << "Enter the string(with no spaces) you want to reverse:" << endl;
    cin >> inputString;
    for (char c : inputString){
        s.push_back(c);
    }

    int l = 0;
    int r = s.size() - 1;

    while (l < r)
        swap(s[l++],s[r--]);

    for(int i = 0; i < s.size(); i++)
    {
        cout << s[i];
    }
}
