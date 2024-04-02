/*
Sample Input

3
4
6
5

Sample Output

6
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Max_Of_Four(int a, int b, int c, int d){
    int max = 0;
    vector<int> nums = {a,b,c,d};
    
    for (int i = 0; i < 4; i++){
        if (nums[i] > max){
            max = nums[i];
        }
    }
    return max;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    
    int result = Max_Of_Four(a,b,c,d);
    cout << result << endl;
    
    return 0;
}
