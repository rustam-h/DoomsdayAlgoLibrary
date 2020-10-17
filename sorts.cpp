#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;

#define FOR(i, a, b) for (auto i {a}; i < b; i++) // a = i's initial value, b = limit
#define X first
#define Y second
#define MP make_pair
#define PB push_back
#define all(x) x.begin(), x.end()
#define all_(x) x.rbegin(), x.rend()


//vector<int> insertionSort(vector<int> v){
//        size_t n = v.size();
//        for(int i = 1; i < n; i++){
//            int key = v[i];
//            int j = i - 1;
//            while(j >= 0 && v[j] > key){
//                v[j+1] = v[j];
//                j--;
//            }
//            v[j+1] = key;
//        }
//        return v;
//    }

class SortFunctions{
public:

    /** Bubble Sort
     * Description: simple, but one of the less efficient sorting algorithms
     *
     Time complexity:
     * Worst case: O(n^2) (when the array is reversely sorted)
     * Best case: O(n) (when the array is sorted)
     *
     * Space complexity: O(1) (the memory is occupied by temp variable)
    **/

    static vector<int> bubbleSort(vector<int> v){
        size_t n = v.size();
        bool swapped; // this variable is for avoiding unnecessary loops
        int temp;
        for(int i = 0; i < n-1; i++){
            swapped = false;
            // as the last i elements are already sorted, we need to iterate n-i-1 times
            for(int j = 1; j < n-i; j++) {
                if (v[j] < v[j - 1]) {
                    // swapping the adjacent elements
                    temp = v[j];
                    v[j] = v[j-1];
                    v[j-1] = temp;
                    swapped = true;
                }
            }
            // if there is no swap, then break
            if(!swapped) break;
        }
        return v;
    }

    /** Insertion Sort
     * Description: faster than bubble sort, but still inefficient compared to others
     *
     Time complexity:
     * Worst case: O(n^2) (when the array is reversely sorted)
     * Best case: O(n) (when the array is sorted)
     *
     * Space complexity: O(1)
    **/

    static vector<int> insertionSort(vector<int> v){
        size_t n = v.size();
        for(int i = 1; i < n; i++){
            int key = v[i]; // this is the element that will be moved
            int j = i - 1;
            while(j >= 0 && v[j] > key){
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = key;
        }
        return v;
    }

};