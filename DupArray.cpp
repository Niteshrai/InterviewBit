/*

Given a read only array of n + 1 integers between 1 and n, find one number that repeats in linear time using less than O(n) space and traversing the stream sequentially O(1) times.

Sample Input:

[3 4 1 4 1]
Sample Output:

1
If there are multiple possible answers ( like in the sample case above ), output any one.

If there is no duplicate, output -1




*/
//---------------Solution-------------------------.


int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int pt1=A[0];
    int pt2=A[A[0]];
    while(pt1!=pt2){
        pt1=A[pt1];
        pt2=A[A[pt2]];
    }
    pt2=0;
    while(pt1!=pt2){
        pt1=A[pt1];
        pt2=A[pt2];
    }
    return pt1;
}
