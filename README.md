# Aim: To study and implement searching algorithms in C++

## Theory:

**Searching algorithms** are essential tools in computer science used to locate specific items within a collection of data. When we search an item in an array, there are two most common algorithms used based on the type of input array.

**Linear Search**: It is used for an unsorted array. It mainly does one by one comparison of the item to be search with array elements. It takes linear or O(n) Time.

**Binary Search** : It is used for a sorted array. It mainly compares the array's middle element first and if the middle element is same as input, then it returns. Otherwise it searches in either left half or right half based on comparison result (Whether the mid element is smaller or greater). This algorithm is faster than linear search and takes O(Log n) time.

## 1. Algorithm: Linear search

**Step 1**: Start

**Step 2**: Declare an integer array arr[5].

**Step 3**: Prompt the user to "Enter Array elements" and read 5 integers into arr.

**Step 4**: Display the entered array elements.

**Step 5**: Prompt the user to "Enter the element to be searched" and read it into variable key.

**Step 6**: For each index i from 0 to 4: If arr[i] == key, then:

- Print "Element found at index i".

- Exit the program.

**Step 7**: If the loop ends without finding the element, print "Element not found".

**Step 8**: End

## 2. Algorithm: Binary Search

**Step 1**: Start

**Step 2**: Define a class SearchArr with: A private function binarysearch(arr, target) that performs binary search. A public function search(arr, target) that calls binarysearch.

**Step 3**: Binary Search (binarysearch)-

- Initialize low = 0 and high = arr.size() - 1.

- Repeat while low <= high: Compute mid = low + (high - low) / 2. If arr[mid] == target, return mid. Else if arr[mid] < target, set low = mid + 1. Else set high = mid - 1. If element not found, return -1.

**Step 4**: In main()

- Create an object obj of class SearchArr.

- Initialize an array/vector arr = {-1, 0, 3, 5, 9, 12}.

- Set target = 9.

- Call obj.search(arr, target).

- Print the result (index of the target if found, otherwise -1).

**Step 5**: End

## Conclusion

Through the above two codes we explored the two searching techniques in C++.
