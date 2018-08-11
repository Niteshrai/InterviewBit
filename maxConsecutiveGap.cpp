/*
Given an unsorted array, find the maximum difference between the successive elements in its sorted form.

Try to solve it in linear time/space.

Example :

Input : [1, 10, 5]
Output : 5 
Return 0 if the array contains less than 2 elements.


*/

//-----------------------------------ProblemSolution-------------------------------------
int Solution::maximumGap(const vector<int> &A) {
    int len=A.size(); // Length of array
    int arr[len];
    for(int i=0;i<len;i++)
        arr[i]=A[i];
    int max=0;
        sort(arr,arr+len); 
        for(int i=1;i<len;i++)
        {
            if((arr[i]-arr[i-1])>max)
                max=(arr[i]-arr[i-1]);
        }
        //cout<<max<<endl;
        return max;
        
}
// This solution may take O(nlogn) Time .
//we can solve this problem in Linear time and linear space by using bucket sort and using of bucket.




