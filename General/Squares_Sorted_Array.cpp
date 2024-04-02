#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    vector<int> nums = {-4,-1,0,3,10};
    cout << "Input Vector: ";
    for (int i = 0; i < nums.size(); i++){
        if (i == nums.size() - 1){
            cout << nums[i];
        }
        else {
            cout << nums[i] << ",";
        }
    }

    cout << endl;

    cout << "Squared Vector: ";

    for (int i = 0; i < nums.size(); i++){
        nums[i] = nums[i]*nums[i];
        //cout << nums[i] << ",";
        if (i == nums.size() - 1){
            cout << nums[i];
        }
        else {
            cout << nums[i] << ",";
        }
    }

    sort(nums.begin(), nums.end());

    cout << endl;

    cout << "Squared and Sorted Vector: ";

    for (int i = 0; i < nums.size(); i++){
        if (i == nums.size() - 1){
            cout << nums[i];
        }
        else {
            cout << nums[i] << ",";
        }
    }
}
