This is a quick DSA challenge for the next two weeks done in both C++ and python3. For additional helpful nuggets
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