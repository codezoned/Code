/*
This year, as in previous years, MemSQL is inviting the top 25 competitors from the Start[c]up qualification round to compete onsite for the final round. Not everyone who is eligible to compete onsite can afford to travel to the office, though. Initially the top 25 contestants are invited to come onsite. Each eligible contestant must either accept or decline the invitation. Whenever a contestant declines, the highest ranked contestant not yet invited is invited to take the place of the one that declined. This continues until 25 contestants have accepted invitations.

After the qualifying round completes, you know K of the onsite finalists, as well as their qualifying ranks (which start at 1, there are no ties). Determine the minimum possible number of contestants that declined the invitation to compete onsite in the final round.

Input
The first line of input contains K (1?=?K?=?25), the number of onsite finalists you know. The second line of input contains r1,?r2,?...,?rK (1?=?ri?=?106), the qualifying ranks of the finalists you know. All these ranks are distinct.

Output
Print the minimum possible number of contestants that declined the invitation to compete onsite.

Examples
inputCopy
25
2 3 4 5 6 7 8 9 10 11 12 14 15 16 17 18 19 20 21 22 23 24 25 26 28
outputCopy
3
inputCopy
5
16 23 8 15 4
outputCopy
0
inputCopy
3
14 15 92
outputCopy
67
Note
In the first example, you know all 25 onsite finalists. The contestants who ranked 1-st, 13-th, and 27-th must have declined, so the answer
*/




#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector <int> v(n);
    
    for (auto &x: v) cin >> x;
    
    int maxi = *max_element(v.begin(), v.end());
    
    if (maxi <= 25) cout << 0;
    else cout << maxi - 25;
    
    return 0;
}
