//Given an array of length N consisting of only 0s and 1s in random order. Modify the array to segregate 0s on left side and 1s on the right side of the array.


/*Your Task:
You don't need to read input or print anything. Your task is to complete the function segregate0and1() which takes arr[] and n as input parameters and modifies arr[] in-place without using any extra memory.
Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 107
0 ≤ arri ≤ 1 */

class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int start=0, end= n-1;
        while(start<end)
        {
            if (arr[start]==0){
                start++;
            }
            else{
                if(arr[start]==1){
                    if(arr[end]==0){
                        swap(arr[start],arr[end]);
                         start++,end--;
                    }
                    else{
                        end--;
                    }
                        
                    }
                }
            }
        }
    
};