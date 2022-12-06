// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    std::vector<std::vector<int>> test{{1,3},{8,10},{2,6},{15,18},{16,24}};
    //this sorts out the vector
    sort(test.begin(), test.end());
    std::vector<std::vector<int>> test0;
    for (int i{0}; i<test.size();i++)
    {
        for (int j{i+1}; j<test.size(); j++)
        {
            if(test[i][1]>=test[j][0])
            {
                std::vector<int> test1;
                int minNumber = std::min(test[i][0], test[j][0]);
                test1.push_back(minNumber);
                int maxNumber = std::max(test[i][1], test[j][1]);
                test1.push_back(maxNumber);
                test0.push_back(test1);
                test.erase(std::find(test.begin(),test.end(),test[i]));
            }
        }
        
        //test0.push_back(test[i]);
    }
    //test0.erase(unique(test0.begin(), test0.end()),test0.end() );
    for (int k{0}; k<test0.size();k++)
    {
        std::cout<<test0[k][0]<<"\t";
        std::cout<<test0[k][1]<<"\n";
    }

    return 0;
}