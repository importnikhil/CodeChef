/* ***QUESTION***
***SOURCE:CODECHEF*** 
***AVAILABLE IN -> Name- Add Two Numbers -> Code - FLOW001 : PRACTICE(Beginner)***

Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

Program is very simple, Given two integers A and B, write a program to add these two numbers.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
Add A and B and display it.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 10000
Example
Input
3 
1 2
100 200
10 40

Output
3
300
50

Output:
120.00
*/

//Author: Nikhil Kumar

#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cout<<a+b<<endl;
    }
    return 0;
}