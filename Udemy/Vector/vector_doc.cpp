VECTOR:

## Problems with array:
1) Size is fixed.

# Vectors are sequence containers.
# In O(1) space elements are accessed.
# All the variables are stored in symbol table.

# How vector grows:
-> [1,2,3,4]
suppose we want to insert 5
-> Vector will double itself for when capacity of vector is full.
-> [1,2,3,4,5,6,7,8]
-> Complexity of pushing an element - O(1)
-> Complexity of pushing an element when capacityis full - O(n) {copying all the elements in new vector}

# fill constructor
vector<int> arr(10,7);
//10 elements each with value 7

