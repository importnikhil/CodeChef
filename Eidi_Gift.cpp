/*
***QUESTION***
***SOURCE:CODECHEF*** 
***ACTUAL CHALLENGE DETAILS: AUGUST LUNCH TIME - 31st AUGUST 20:00-23:00 (Question Name:EID2)***
***NOW AVAILABLE IN-> EIDI GIFT : PRACTICE(BEGINNER)***

Eidi gifts are a tradition in which children receive money from elder relatives during the Eid celebration.

Chef has three children (numbered 1,2,3) and he wants to give them Eidi gifts. The oldest child, Chefu, thinks that a distribution of money is fair only if an older child always receives more money than a younger child; if two children have the same age, they should receive the same amounts of money.

For each valid i, the i-th child is Ai years old and it received Ci units of money. Determine whether this distribution of money is fair.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers A1, A2, A3, C1, C2 and C3.
Output
For each test case, print a single line containing the string "FAIR" if the distribution is fair or "NOT FAIR" otherwise.

Constraints
1≤T≤1,000
1≤A1,A2,A3≤17
1≤C1,C2,C3≤100
Subtasks
Subtask #1 (100 points): original constraints

Example Input
5
5 7 10 10 20 50
5 5 5 20 10 20
10 1 17 5 10 15
3 6 3 8 10 9
8 5 5 50 10 10
Example Output
FAIR
NOT FAIR
NOT FAIR
NOT FAIR
FAIR
Explanation
Example case 2: All children have same age which is 5, but second child got less money than the other children, so it's not fair.

Example case 3: First child is older than second child but he got less money than him, so it's not fair.

Example case 4: First and third children have same age, but didn't get same amount of money, so it's not fair.
_________________________________________________________________________________________________________________________________
*/
#include <iostream>
using namespace std;

int main() {
    int a,b,c,a1,b1,c1,tc,i=0;
    cin>>tc;
    for(i=0;i<tc;i++){
        int count=0;
    cin>>a>>b>>c>>a1>>b1>>c1;
    if((a>b&&a1>b1)||(a==b && a1==b1))
    {
     if((a>c&&a1>c1)||(a==c && a1==c1))
      {
        if((b>c&&b1>c1)||(c==b&&c1==b1))
         {
            //cout<<"FAIR";
            count=1;
         }
         else if((b<c&&b1<c1)||(c==b&&c1==b1))
         {
             // cout<<"FAIR";
              count=1;
         }
      }
    }
     if((a<b&&a1<b1)||(a==b&&a1==b1))
    {
     if((b>c&&b1>c1)||(b==c&&b1==c1))
      {
        if((a>c&&a1>c1)||(a==c&&a1==c1))
         {
            //cout<<"FAIR";
            count=1;
         }
         else if((a<c&&a1<c1)||(c==a&&c1==a1))
         {
              //cout<<"FAIR";
              count=1;
         }
      }
    }
    if((c>b&&c1>b1)||(c==b && c1==b1))
    {
     if((a<c&&a1<c1)||(a==c&&a1==c1))
      {
        if((b>a&&b1>a1)||(a==b&&a1==b1))
         {
            count=1;
         }
         else if((b<a&&b1<a1)||(a==b&&a1==b1))
         {
              count=1;
         }
      }
    }
    if(count==1){
        cout<<"FAIR\n";}
    else{
        cout<<"NOT FAIR\n";}
    
    
    }
	return 0;
}
