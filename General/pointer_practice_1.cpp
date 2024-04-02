#include <iostream>
#include <memory>
/*
void printnum(int *numptr){
    std::cout << *numptr << std::endl;
}

void printlet(char *letptr){
    std::cout << *letptr << std::endl;
}

void print(void *nptr,char type){
    switch(type){
        case 'i': std::cout << *((int*)nptr) << std::endl; break;//handle int* by casting int type and dereferenceing
        case 'c':std::cout << *((char*)nptr) << std::endl; break; //handle int*
    }
}
*/

/*
int getMin(int nums[], int size){
    int min = nums[0];
    for (int i = 1; i < size; i++){
        if(nums[i] < min)
        min = nums[i];
    }
    return min;
}

int getMax(int nums[], int size){
    int max = nums[0];
    for (int i = 1; i < size; i++){
        if(nums[i] > max)
            max = nums[i];
    }
    return max;
}
 */

/*
void getMinMax(int nums[], int size, int *min, int *max){
    for (int i = 1; i < size; i++){
        if(nums[i] > *max)
            *max = nums[i];
        if(nums[i] < *min)
            *min = nums[i];
    }
}
*/
class MyClass{
public:
    MyClass(){
        std::cout << "Constructor Invoked" << std::endl;
    }

    ~MyClass(){
        std::cout << "Deconstructor Invoked" << std::endl;
    }

};

int main(){
    //std::unique_ptr<MyClass>unPtr1 = std::make_unique<MyClass>();
    std::shared_ptr<MyClass>shPtr1 = std::make_shared<MyClass>();
    std::shared_ptr<MyClass>shPtr2 = shPtr1;

    std::cout << "Shared Count: " << shPtr1.use_count() << std::endl;

    //std::unique_ptr<int>unPtr2 = std::move(unPtr1);

    //std::cout << *unPtr1 << std::endl;
    //std::cout << *unPtr2 << std::endl;
    //std::cout << *unPtr1 << std::endl;

    //int nums[5] = {1,-3,3,5,-1};
    //std::cout << "min: " << getMin(nums,5) << std::endl;
    //std::cout << "max: " << getMax(nums,5) << std::endl;
    //int min = nums[0];
    //int max = nums[0];
    //getMinMax(nums, 5, &min, &max);
    //std::cout << "min: " << min << std::endl;
    //std::cout << "min: " << max << std::endl;

    //int nums[5];
    //int nums[5] = {1,2,3,4,5};
    /*
    std::cout << nums << std::endl;
    std::cout << nums[0] << std::endl;
    std::cout << &nums[0] << std::endl;
    std::cout << *(nums+2) << std::endl;
    */

    /*
    for (int i = 0; i <= 4; i++) {
        std::cout << "number: ";
        std::cin >> nums[i];
    }

    for (int i = 0; i <= 4; i++) {
        std::cout << *(nums+i) << " ";
    }
    */

    /*
    int x = 5; //initialize variable
    int n = 6; //intialize variable
    std::cout << x << std::endl; //print value
    std::cout << &x << std::endl; //print mem address see &
    std::cout << &n << std::endl; //print mem address see &

    int *ptr = &n; //initialize pointers reference
    std::cout << ptr << std::endl; //print reference
    std::cout << *ptr << std::endl; //print dereference
    *ptr = 10; //assign new value to mem
    std::cout << ptr << std::endl; //print reference mem
    std::cout << *ptr << std::endl; //print dereference mem
    std::cout << n << std::endl; //show that assigning new value to pointer changes value in memory but keeps same reference
    */
    /*
    int number = 3;
    char letter = 'a';
    printnum(&number); //call print number class
    printlet(&letter); //call print letter class
    print(&number,'i');
    print(&letter,'c');
    */

}
