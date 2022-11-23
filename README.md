This is a quick DSA challenge for the next several days done in both C++ and python3. For additional helpful nuggets
they will be listed down and how they can help bring down either space, time complexity or may just for kicks

So difference between emplace_back and push_back. Push_back is safer as compared to its former. The only key merit is that as opposed to
constructing a data type and then later pushing it to the container as done by push_back, emplace_back does not construct any temporary object and just pushes the object directly into the container.

Their is however a rule of thumb that states "You should always avoid optimizations that make yoour code less safe or less clear unless the performance benefit is big enough to show up in your applications benchmark."



It would also be be good if you understood:
a)The differences between a heap table and a BST
b)The collections module in python(https://www.geeksforgeeks.org/python-collections-module/)


INT_MIN and INT_MAX, if you come across it in the algorithms written here are the reasons for the same
Most of the time in competetive programming, there is need to assign a variable, the maximum or minimum value that a data type can hold, remembering such a large and precise number comes out to be a difficult job and thus C++ has certaing macros to represent these numbers, you may need to include <limits.h> or <climits> depending on the compiler

INT_MAX is a macro that specifies that an interger variable cannot store any value beyond this limit
INT_MIN specifies that a variable cannot store any value below this limit.


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



Quick fix algorithms:
1) Binary Search : complexity of 0(log n)
