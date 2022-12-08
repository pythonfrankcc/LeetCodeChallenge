// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>

//the problem with this code is that with the creation of a new vector brings more problems and so the best solution would have
//been to work on the same vector like shown in the python solution as this enables you to merge more than 2

int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    std::vector<std::vector<int>> test{{1,3},{8,10},{2,6},{15,18},{16,24}};
    //this sorts out the vector
    sort(test.begin(), test.end());
    std::vector<std::vector<int>> test0;
    std::vector<std::vector<int>> checked;
    for (int i{0}; i<test.size();i++)
    {
        for (int j{i+1}; j<test.size(); j++)
        {
            if(test[i][1]>=test[j][0])
            {
                //push_back what was checked
                checked.push_back(test[i]);
                checked.push_back(test[j]);
                std::vector<int> test1;
                int minNumber = std::min(test[i][0], test[j][0]);
                test1.push_back(minNumber);
                int maxNumber = std::max(test[i][1], test[j][1]);
                test1.push_back(maxNumber);
                test0.push_back(test1);
                //test.erase(std::find(test.begin(),test.end(),test[i]));
            }
        }
        
        test0.push_back(test[i]);
    }
    test0.erase(unique(test0.begin(), test0.end()),test0.end() );
    for (int a{0};a<checked.size();a++)
    {
        test0.erase(std::find(test0.begin(),test0.end(),checked[a]));
    }
    for (int k{0}; k<test0.size();k++)
    {
        std::cout<<test0[k][0]<<"\t";
        std::cout<<test0[k][1]<<"\n";
    }
    /*for(int l{0}; l<checked.size(); l++)
    {
        std::cout<<"This are the vectors in the checked"<<"\n";
        std::cout<<checked[l][0]<<"\t"<<checked[l][1]<<"\n";
    }*/

    return 0;
}