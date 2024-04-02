#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {1,1,2};
    int k = 0;

    for (int i = 0; i < nums.size(); i++){
        if (nums[i] == nums[i]--){
            //nums.pop_back();
            std::cout << nums[i];
        }
        //std::cout << nums[i];
    }


}
