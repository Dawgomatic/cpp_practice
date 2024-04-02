/*
Sample Input

3 12345678912345 a 334.23 14049.30493

Sample Output

3
12345678912345
a
334.230
14049.304930000
*/

#include <vector>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// declare funtion split(takes const reference to string named input)
vector<string> split(const string& input ){
    stringstream ss(input); //initialize input string as a stream
    vector<string> tokens; // declare vector to store individual streams
    string token;
    //loop through string stream ss store all characters in token until ' '
    while (getline(ss, token, ' ')) {
        tokens.push_back(token); // append tokens vector with characters

    }
    return tokens;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string input = "3 12345678912345 a 334.23 14049.30493";
    getline(cin, input); //get the input

    vector<string> tokens = split(input); //split the input according to the function defined above

    //iterate over each item in tokens, using auto to determine data type
    for (const auto& token : tokens){
        cout << token << endl; //print out

    }

    return 0;
}
