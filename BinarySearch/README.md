## Binary Search Working

Binary Search Algorithm can be implemented in two ways which are discussed below.

    Iterative Method
    Recursive Method

The recursive method follows the divide and conquer approach.

The general steps for both methods are discussed below.

    The array in which searching is to be performed is:
    initial array Binary Search
    Initial array

    Let x = 4 be the element to be searched.
    Set two pointers low and high at the lowest and the highest positions respectively.
    setting pointers Binary Search
    Setting pointers
    Find the middle element mid of the array ie. arr[(low + high)/2] = 6.
    mid element Binary Search
    Mid element
    If x == mid, then return mid.Else, compare the element to be searched with m.
    If x > mid, compare x with the middle element of the elements on the right side of mid. This is done by setting low to low = mid + 1.
    Else, compare x with the middle element of the elements on the left side of mid. This is done by setting high to high = mid - 1.
    finding mid element Binary Search
    Finding mid element
    Repeat steps 3 to 6 until low meets high.
    mid element Binary Search
    Mid element
    x = 4 is found.
    found Binary Search
    Found

<br>

##  Binary Search Complexity

Time Complexities

    Best case complexity: O(1)
    Average case complexity: O(log n)
    Worst case complexity: O(log n)

Space Complexity

The space complexity of the binary search is O(1).
