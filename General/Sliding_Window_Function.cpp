#include <iostream>
#include <vector>

class SlidingWindow {
private:
    std::vector<int> data;
    int left, right;

public:
    // Constructor to initialize the data and window size
    SlidingWindow(const std::vector<int>& input, int l, int r) : data(input), left(l), right(r) {}

    // Method to get the sliding window around the position i
    std::vector<int> getWindow(int position) {
        std::vector<int> window;
        int start = std::max(0, position - left);
        int end = std::min(static_cast<int>(data.size()), position + right + 1);
        for (int i = start; i < end; ++i) {
            window.push_back(data[i]);
        }
        return window;
    }
};

int main() {
    std::vector<int> nums = {0,1,0,2,1,0,1,3,2,1,2,1};//{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int l = 2; //how many integers to the left we want to record
    int r = 2; //how many integers to the right we want to record
    int count = 0;

    SlidingWindow sw(nums, l , r); // Create a sliding window with 2 elements to the left and 2 to the right

    for (int i = 0; i < nums.size(); ++i){
        std::vector<int> window = sw.getWindow(nums[i]); // Expecting to get [3, 4, 5, 6, 7]

        std::cout << "Center pos: " << nums[i] << std::endl;
        for (int num : window) {
            std::cout << num << " " << std::endl;


    }
    //std::vector<int> window = sw.getWindow(3); // Expecting to get [3, 4, 5, 6, 7]

    //std::cout << "Center pos 5: ";
    //for (int num : window) {
    //    std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
