Problem link : https://www.codechef.com/APRIL20B/problems/SQRDSUB
/*
Let's call a sequence of integers good if the product of its elements can be represented as a difference of squares of two integers. More formally, a sequence S1,S2,…,SK is good if it is possible to find two integers p and q such that S1⋅S2⋅…⋅SK=p2−q2.

Chef has a sequence A1,A2,…,AN. He wants to find the number of contiguous subsequences of A which are good. Can you help him?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a single line containing one integer ― the number of good contiguous subsequences of A.

Constraints
1≤T≤103
1≤N≤105
|Ai|≤109 for each valid i
the sum of N over all test cases does not exceed 106
Subtasks
Subtask #1 (20 points): N≤103
Subtask #2 (80 points): original constraints

Example Input
2
3
1 2 3
3
2 5 6
Example Output
2
2
Explanation
Example case 1: For the subsequences [1] and [3], their products can be represented as differences of two squared integers: 1=12−02 and 3=22−12 respectively.

Example case 2: The two good subsequences are [5] and [2,5,6]. Their products can be represented as differences of two squared integers: 5=32−22 and 2⋅5⋅6=60=82−22 respectively.
*/

My solution : 
#include <iostream>
using namespace std;
int main()
{ 
    int tc;
    cin>>tc;
    for(int idus=0;idus<tc;idus++)
    {
        long long int n;
        cin>>n;
         long long int a[n];
        for (long long int i=0;i<n;i++)
            cin>>a[i];
        long long int cnt=0,ans;
        for(long long int i=0;i<n;i++)
        {    
            long long int prod=1;
            for (long long int j=i;j<n;j++)
            {
                prod=prod*a[j];
                prod=abs(prod);
                ans=(prod%4)!=2;
                //cout<<"prod"<<prod<<endl;
                if (prod%4!=2)
                    cnt=cnt+1;
                
            }
        }
        cout<<cnt<<endl;
    }
return 0;
    
}
