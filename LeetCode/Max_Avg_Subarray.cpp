#include <vector>
#include <deque>
#include <iostream>
#include <algorithm>
using namespace std;

int main7 ()
{

    vector<int> nums = {1,12,-5,-6,50,30};
    vector<int> window;
    int k = 4;

    for (int i = 0; i < nums.size(); i++) {
        auto it = find(nums.begin(), nums.end(), nums[i]);
        int target = nums[i];
        size_t position = it - nums.begin();
        if (it != nums.end()) {
            // Calculate the position
            //size_t position = it - nums.begin();
            std::cout << "Element " << target << " found at position: " << position << std::endl;
        } else {
            std::cout << "Element " << target << " not found in the vector." << std::endl;
        }
        for (int l = position; l <= k; l++){
            window.push_back(nums[l]);
            cout << "window:" << window[l] << endl;

        }

    }

}
