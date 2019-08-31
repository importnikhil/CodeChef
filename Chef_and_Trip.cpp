/****QUESTION***
***SOURCE:CODECHEF*** 
***ACTUAL CHALLENGE DETAILS: AUGUST LUNCH TIME - 31st AUGUST 20:00-23:00 (Question Name:TRIP2)***
***NOW AVAILABLE IN->Chef and Trip : PRACTICE(EASY)***
Chef and his friend Chefu decided to go on a trip. The trip takes place over the next N days (numbered 1 through N). There are K different places Chef and Chefu could visit (numbered 1 through K). They have written a sequence A1,A2,…,AN which denotes the plan of the trip during these N days; however, the plan is not completed yet. For each valid i, they want to visit the place Ai on the i-th day, but if Ai=−1, then they haven't decided which place to visit on that day.

Chef and his friend do not want to visit the same place two days in a row, but they can visit a place more than once in total. It is not necessary to visit all the places during the trip. Determine whether it is possible to complete the plan in such a way that this condition is satisfied. If it is possible, find one way of completing the plan.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains two space-separated integers N and K.
The second line contains N space-separated integers A1,A2,…,AN.
Output
For each test case, print a line containing the string "YES" if it's possible the complete the plan or "NO" otherwise.

If it's possible to complete the plan, print a second line containing N space-separated integers denoting the sequence A1,A2,…,AN after completing the plan. If there is more than one solution, you may print any one.

Constraints
1≤T≤1,000
1≤N≤105
2≤K≤105
1≤Ai≤K or Ai=−1 for each valid i
if Ai≠−1 and Ai+1≠−1, then Ai≠Ai+1, for each valid i
the sum of N over all test cases does not exceed 106
Subtasks
Subtask #1 (30 points):

N≤1,000
K=2
the sum of N over all test cases does not exceed 10,000
Subtask #2 (70 points): original constraints

Example Input
5
5 3
-1 -1 -1 -1 -1
4 5
1 2 3 5
3 2
1 -1 2
4 2
1 -1 -1 1
6 4
-1 -1 4 -1 2 -1
Example Output
YES
1 2 1 2 1
YES
1 2 3 5
NO
NO
YES
1 2 4 1 2 1
__________________________________________________________________________________________________________________________
*/
#include <iostream>
using namespace std;

int main() {
    int tc,tci,p;
    cin>>tc;
    for(tci=0;tci<tc;tci++){
    int d,v,i,j,count=0,ct=0;
    cin>>d>>v;
    int arr[d];
    for(p=0;p<d;p++)
    cin>>arr[p];
    //for repitition
    for(i=0;i<d;i++)
    {
        if((i+1==i)&&(i+1!=-1))
        {
            count=1;
        }
    }
    //for 1st -1
    if(count==0){
        //when d = only1
        if((arr[0]==-1))
        {
            for(p=1;p<=v;p++)
            {
                if(p!=arr[1])
                {
                arr[0]=p;
                break;
                }
                else
                ct=1;
            }
            if(ct==v)
            count=1;
            //if(arr[1]==1)
           // arr[0]=v;
            //else
            //arr[0]=1;
        }
        //for -1 in between
        if(count==0){
        for(i=0;i<d-2;i++)
        {
            if(arr[i+1]==-1)
            {
                ct=0;
                for(j=1;j<=v;j++)
                {
                    if((j!=arr[i])&&(j!=arr[i+2]))
                    {
                        arr[i+1]=j;
                        break;
                    }
                    else
                    ct=ct+1;
                }
                if(ct==v)
                count=1;
            }
        }
        }
        //for -1 in last
        if(count==0){
        if((arr[d-1]==-1))
        {
            ct=0;
            for(p=1;p<=v;p++)
            {
                if(p!=arr[d-2]){
                arr[d-1]=p;
                break;}
                else
                ct=ct+1;
            }
            if(ct==v)
            count=1;
        }
    }}
    if(count==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        for(p=0;p<d;p++)
        cout<<arr[p]<<" ";
        cout<<endl;
    }
    }
	return 0;
}

