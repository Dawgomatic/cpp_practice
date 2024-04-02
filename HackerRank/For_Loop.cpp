/*
Sample Input

8
11

Sample Output

eight
nine
even
odd
*/

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int a,b;
    vector<string> str_nums = {"zero","one","two","three","four","five","six","seven", "eight","nine"};
    
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(i<=9){
            cout<<str_nums[i]<<endl;
        }else{
            cout<<((i%2==0)?"even":"odd")<<endl;
        }
    }
    return 0;
}
