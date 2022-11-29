This is a quick DSA challenge for the next several days done in both C++ and python3. For additional helpful nuggets
they will be listed down and how they can help bring down either space, time complexity or may just for kicks

So difference between emplace_back and push_back. Push_back is safer as compared to its former. The only key merit is that as opposed to
constructing a data type and then later pushing it to the container as done by push_back, emplace_back does not construct any temporary object and just pushes the object directly into the container.

Their is however a rule of thumb that states "You should always avoid optimizations that make yoour code less safe or less clear unless the performance benefit is big enough to show up in your applications benchmark."


An ASCII chart consists of 128 characters. ASCII works well for simple English  but UTF is better for modern global needs accomodating special characters such as emojis and many different languages such as Chinese and Hebrew.

we have functions such as the ord() function which returns the Unicode code from a given character, with its polar opposite being the chr() for normal bit strings.

Here is an example
value  = ord("A")
print(value)

solution = 65


It would also be be good if you understood:
a)The differences between a heap table and a BST
b)The collections module in python(https://www.geeksforgeeks.org/python-collections-module/)


INT_MIN and INT_MAX, if you come across it in the algorithms written here are the reasons for the same
Most of the time in competetive programming, there is need to assign a variable, the maximum or minimum value that a data type can hold, remembering such a large and precise number comes out to be a difficult job and thus C++ has certaing macros to represent these numbers, you may need to include <limits.h> or <climits> depending on the compiler

INT_MAX is a macro that specifies that an interger variable cannot store any value beyond this limit
INT_MIN specifies that a variable cannot store any value below this limit.

//example use case of INT_MIN
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
using namespace std;

vector<vector<int> > minAbsDiffPairs(vector<int>& arr)
{
    vector<vector<int> > ans;
    int n = arr.size();
    //sorting the vector
    sort(arr.begin(), arr.end());
    // Stores the minimal absolute difference
    //to use INT_MAX you need to include the climits.h or limits.h
    int minDiff = INT_MAX;
    for (int i = 0; i < n - 1; i++)
    {
        //keep updating the minDiff till you get the least
        minDiff = min(minDiff, abs(arr[i] - arr[i + 1]));
    }
    for (int i = 0; i < n - 1; i++)
    {
        vector<int> pair;
        if (abs(arr[i] - arr[i + 1]) == minDiff)
        {
            pair.push_back(min(arr[i], arr[i + 1]));
            pair.push_back(max(arr[i], arr[i + 1]));
            ans.push_back(pair);
        }
    }
    return ans;
}

int main() {
    vector<int> arr = { 2,5,8,9,10 };
    int N = (sizeof arr) / (sizeof arr[0]);
    vector<vector<int> > pairs = minAbsDiffPairs(arr);
    for (auto v : pairs)
        cout << v[0] << " " << v[1] << endl;

    return 0;
}

Use https://cppinsights.io/ to get to understand the inner workings of your C++ code


The difference between the //(floor division) and /(normal division) in python is that normal division will always return a floating point whereas the floor division always produces an interger, ie, rounded down to the nearest int

example: 15 // 4 = 3 , which is an int
       : 15 / 4 = 3.75, which is a float

       :2/2 = 1.0 , which is a float
       :2//2 = 1, which is an interger


when using the sort algorithm there are two variations to it, list.sort() and sorted(list). The main difference between the two is list.sort() rearranges the original list while sorted() returns a new list. This can be rather useful in space complexity when it comes to huge lists


Templates in C++
The concept is equivalent to generics in other languages but more powerful in terms of usage

-> what you need to know is that templates get evaluated at compile time
->It can be used instead of function overloading to automate the creation of a function based on what input it is being fed
->This introduces the concept of metaprogramming which is writing code for compile time evaluation  rather than run time


Here is an example of the use of templates instead of function overloading
template<typename T>
void Print(T value)
{
       std::cou<<value<<std::endl;
}
int main()
{
       Print(5);
       Print(5.5f);
       Print("Hello");
}


here is an example of one of the standard usage of a template. Suppose you wanted to create a class array, that creates an array on the stack. The size of an array is determined at compile time, that is, the size has to be known at compile time.
This makes it the perfect opportunity for the use of a template since they are evaluated at compile time

Here is the code example of the same
//template use in classes

#include<iostream>

template<typename T,int N>
class Array
{
private:
       T m_Array[N];
public:
       int GetSize() const {return N;}
};

int main()
{
       //creation of the class instance
       Array<int,5> array;
       //calling the method
       std::cout<<array.GetSize()<<std::endl;
}


In every algorithm that you develop you need to understand the computational complexity that comes with it, ie, the space and time complexity of the algos

The aspect of time is normally more important than space.
In computer programming you are allowed to use only 256 MB of memory per problem but 4 MB for each function. Factors to consider for the long term usage of an algorithm: Efficiency, Finiteness and Correctnesss.

In the test for how efficient an algorithm is we have what is called an asymptotic notation, ie, this tells us how much better an algorithm is when compared to another algorithm. There are three notations:
1) Big O notation-The most popular
2) Theta notation
3)

Here we look at some of the most common:
1) 0(1) Solution: This is when we have constant time regardless of the input
here is an example of the same
int findsum(int n)
{
       n * (n+1)//this is constant time since all the variables are known before hand
}
2)0(n) Solution:
Here is when you loop from 0 to n like so
def loopthroughlist(lst1):
       for i in range(len(lst1)):
              print(i)

3) 0(n2): Iterate over the elements and in to the elements
4) 2 log(n): This is for example in the case of a binary search


Quick fix algorithms:
1) Binary Search : complexity of 0(log n)
2) KMP(Knuth-Morris-Pratt) Algorithm for pattern searching, this has a linear time in the case of complexity
3) Merge sort
Merge sort is best used with linked lits, ie, data structures that do not have random access to memory while its cousin quick sort is best used for data structures that have random access implemented within the data structure.

