#include <iostream>
#include <queue>

int main(){
    std::priority_queue<int> o_NumSet;
    o_NumSet.push(1);
    o_NumSet.push(8);
    o_NumSet.push(17);
    o_NumSet.push(12);

    std::cout<< o_NumSet.top()<< "\n";
    o_NumSet.pop();
    std::cout<< o_NumSet.top()<< "\n";
    o_NumSet.pop();
    std::cout<< o_NumSet.top()<< "\n";
    o_NumSet.pop();
    std::cout<< o_NumSet.top()<< "\n";
    return 0;
}
