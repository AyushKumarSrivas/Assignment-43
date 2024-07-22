priority_queue
1. Write a c++ program, to demonstrate priority queue.
2. Implement different operations on priority queue .i.e. adding element, removing
element, size of priority queue, and print it.
3. Write a c++ program, to demonstrate priority queue having a min element at top.
4. Write a c++ program, to swap the elements of two priority queues of int type.
5. Write a c++ program, to show that priority_queue is by default a Max Heap.
Note:
If elements are printed in descending order, then we have a max heap.
6. Write a c++ program, to use priority_queue to implement min heap.
7. Given two sorted arrays A[] and B[] of sizes N and M respectively, the task is to
merge them in a sorted manner using priority_queue.
Example:
Input: A[] = { 5, 6, 8 }, B[] = { 4, 7, 8 }
Output: 4 5 6 7 8 8
8. Given an array arr[] of N elements, the task is to perform using priority_queue and
the following operation:
● Pick the two largest element from the array and remove these element. If the
elements are unequal then insert the absolute difference of the elements into the
array.
● Perform the above operations until the array has 1 or no element in it. If the array has
only one element left then print that element, else print “-1”.
Example:
Input: arr[] = { 3, 5, 2, 7 }
Output: 1
Explanation:
The two largest elements are 7 and 5. Discard them. Since both are not equal, insert
7 – 5 = 2 into the array. Hence, arr[] = { 3, 2, 2 }
The two largest elements are 3 and 2. Discard them. Since both are not equal, insert
3 – 2 = 1 into the array. Hence, arr[] = { 1, 2 }
The two largest elements are 2 and 1. Discard them. Since both are not equal, insert
2 – 1 = 1 into the array. Hence, arr[] = { 1 }
The only element left is 1. Print the value of the only element left.
9. Given three arrays X[], Y[], and Z[] each consisting of N integers, the task is to find
the maximum number of triplets (X[i], Y[i], Z[i]) such that (X[i] < Y[i] < Z[i]) for any
permutation of the three arrays using priority_queue
Input: X = {9, 6, 14, 1, 8}, Y = {2, 10, 3, 12, 11}, Z = {15, 13, 5, 7, 4}
Output: 3
Explanation:
After rearranging the arrays X[], Y[] and Z[] as {1, 6, 8, 9, 14}, {3, 2, 10, 12, 11}, and
{4, 7, 15, 13, 5} respectively. The increasing triplets are {1, 3, 4}, {8, 10, 15} and {9,
12, 13}.
Therefore, the total count of such triplets is 3.

10. Given an array arr[] of size N and a number K, the task is to find the length of the
smallest subsequence such that the sum of the subsequence is greater than or equal
to number K do it using priority_queue.
Example:
Input: arr[] = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5}, K = 35
Output: 4
Smallest subsequence with the sum greater than or equal to the given sum K is {7, 9,
14, 10}
Input: arr[] = {1, 2, 2, 2, 3, 4, 5, 4, 7, 6, 5, 12}, K = 70
Output:-1
Subsequence with sum greater than equal to the given sum is not possible.

Solution:-

1. #include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    
    // Push elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    
    std::cout << "Priority Queue elements (Max Heap): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}

2. #include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    
    // Adding elements
    pq.push(5);
    pq.push(10);
    pq.push(3);
    
    std::cout << "Priority Queue elements: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;
    
    // Operations
    pq.push(20);
    pq.push(15);
    
    std::cout << "Size of Priority Queue: " << pq.size() << std::endl;
    std::cout << "Top element: " << pq.top() << std::endl;
    
    pq.pop(); // Remove top element
    std::cout << "Top element after pop: " << pq.top() << std::endl;

    return 0;
}

3. #include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
    // Push elements into the priority queue
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);
    
    std::cout << "Priority Queue elements (Min Heap): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}

4. #include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq1, pq2;
    
    pq1.push(1);
    pq1.push(3);
    pq1.push(5);
    
    pq2.push(10);
    pq2.push(7);
    pq2.push(8);
    
    std::cout << "Before swap:" << std::endl;
    std::cout << "Priority Queue 1: ";
    while (!pq1.empty()) {
        std::cout << pq1.top() << " ";
        pq1.pop();
    }
    std::cout << std::endl;

    std::cout << "Priority Queue 2: ";
    while (!pq2.empty()) {
        std::cout << pq2.top() << " ";
        pq2.pop();
    }
    std::cout << std::endl;

    // Swap
    std::swap(pq1, pq2);

    std::cout << "After swap:" << std::endl;
    std::cout << "Priority Queue 1: ";
    while (!pq1.empty()) {
        std::cout << pq1.top() << " ";
        pq1.pop();
    }
    std::cout << std::endl;

    std::cout << "Priority Queue 2: ";
    while (!pq2.empty()) {
        std::cout << pq2.top() << " ";
        pq2.pop();
    }
    std::cout << std::endl;

    return 0;
}

5. #include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    
    pq.push(4);
    pq.push(1);
    pq.push(7);
    pq.push(3);
    
    std::cout << "Priority Queue elements (Max Heap): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}

6. #include <iostream>
#include <queue>
#include <vector>

int main() {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
    pq.push(4);
    pq.push(1);
    pq.push(7);
    pq.push(3);
    
    std::cout << "Priority Queue elements (Min Heap): ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}

7. #include <iostream>
#include <queue>
#include <vector>

int main() {
    std::vector<int> A = {5, 6, 8};
    std::vector<int> B = {4, 7, 8};
    
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
    for (int num : A) {
        pq.push(num);
    }
    for (int num : B) {
        pq.push(num);
    }
    
    std::cout << "Merged sorted array: ";
    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    std::cout << std::endl;

    return 0;
}

8. #include <iostream>
#include <queue>
#include <vector>
#include <cstdlib> // for std::abs

int main() {
    std::vector<int> arr = {3, 5, 2, 7};
    std::priority_queue<int> pq(arr.begin(), arr.end());
    
    while (pq.size() > 1) {
        int largest = pq.top();
        pq.pop();
        int secondLargest = pq.top();
        pq.pop();
        
        if (largest != secondLargest) {
            pq.push(std::abs(largest - secondLargest));
        }
    }
    
    if (pq.size() == 1) {
        std::cout << "The remaining element is: " << pq.top() << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }

    return 0;
}

9. #include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> X = {9, 6, 14, 1, 8};
    std::vector<int> Y = {2, 10, 3, 12, 11};
    std::vector<int> Z = {15, 13, 5, 7, 4};
    
    std::sort(X.begin(), X.end());
    std::sort(Y.begin(), Y.end());
    std::sort(Z.begin(), Z.end());
    
    int count = 0;
    int i = 0, j = 0, k = 0;

    while (i < X.size() && j < Y.size() && k < Z.size()) {
        if (X[i] < Y[j] && Y[j] < Z[k]) {
            ++count;
            ++i;
            ++j;
            ++k;
        } else if (Y[j] <= X[i]) {
            ++j;
        } else {
            ++k;
        }
    }
    
    std::cout << "Number of triplets: " << count << std::endl;

    return 0;
}

10. #include <iostream>
#include <queue>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> arr = {2, 3, 1, 5, 6, 3, 7, 9, 14, 10, 2, 5};
    int K = 35;
    
    std::priority_queue<int> pq;
    
    for (int num : arr) {
        pq.push(num);
    }
    
    int sum = 0;
    int length = 0;
    
    while (!pq.empty() && sum < K) {
        sum += pq.top();
        pq.pop();
        ++length;
    }
    
    if (sum >= K) {
        std::cout << "Length of smallest subsequence: " << length << std::endl;
    } else {
        std::cout << "-1" << std::endl;
    }

    return 0;
}
