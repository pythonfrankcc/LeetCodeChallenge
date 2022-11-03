This is a quick DSA challenge for the next two weeks done in both C++ and python3. For additional helpful nuggets
they will be listed down and how they can help bring down either space, time complexity or may just for kicks

So difference between emplace_back and push_back. Push_back is safer as compared to its former. The only key merit is that as opposed to
constructing a data type and then later pushing it to the container as done by push_back, emplace_back does not construct any temporary object and just pushes the object directly into the container.

Their is however a rule of thumb that states "You should always avoid optimizations that make yoour code less safe or less clear unless the performance benefit is big enough to show up in your applications benchmark."



It would also be be good if you understood:
a)The differences between a heap table and a BST
b)The collections module in python(https://www.geeksforgeeks.org/python-collections-module/)
