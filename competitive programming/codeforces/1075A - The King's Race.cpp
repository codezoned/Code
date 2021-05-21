/*
On a chessboard with a width of n and a height of n, rows are numbered from bottom to top from 1 to n, columns are numbered from left to right from 1 to n. Therefore, for each cell of the chessboard, you can assign the coordinates (r,c), where r is the number of the row, and c is the number of the column.

The white king has been sitting in a cell with (1,1) coordinates for a thousand years, while the black king has been sitting in a cell with (n,n) coordinates. They would have sat like that further, but suddenly a beautiful coin fell on the cell with coordinates (x,y)...

Each of the monarchs wanted to get it, so they decided to arrange a race according to slightly changed chess rules:

As in chess, the white king makes the first move, the black king makes the second one, the white king makes the third one, and so on. However, in this problem, kings can stand in adjacent cells or even in the same cell at the same time.

The player who reaches the coin first will win, that is to say, the player who reaches the cell with the coordinates (x,y) first will win.

Let's recall that the king is such a chess piece that can move one cell in all directions, that is, if the king is in the (a,b) cell, then in one move he can move from (a,b) to the cells (a+1,b), (a-1,b), (a,b+1), (a,b-1), (a+1,b-1), (a+1,b+1), (a-1,b-1), or (a-1,b+1). Going outside of the field is prohibited.

Determine the color of the king, who will reach the cell with the coordinates (x,y) first, if the white king moves first.

Input
The first line contains a single integer n (2=n=1018) � the length of the side of the chess field.

The second line contains two integers x and y (1=x,y=n) � coordinates of the cell, where the coin fell.

Output
In a single line print the answer "White" (without quotes), if the white king will win, or "Black" (without quotes), if the black king will win.

You can print each letter in any case (upper or lower).

Examples
inputCopy
4
2 3
outputCopy
White
inputCopy
5
3 5
outputCopy
Black
inputCopy
2
2 2
outputCopy
Black
Note
An example of the race from the first sample where both the white king and the black king move optimally:

The white king moves from the cell (1,1) into the cell (2,2).
The black king moves form the cell (4,4) into the cell (3,3).
The white king moves from the cell (2,2) into the cell (2,3). This is cell containing the coin, so the white king wins.

An example of the race from the second sample where both the white king and the black king move optimally:

The white king moves from the cell (1,1) into the cell (2,2).
The black king moves form the cell (5,5) into the cell (4,4).
The white king moves from the cell (2,2) into the cell (3,3).
The black king moves from the cell (4,4) into the cell (3,5). This is the cell, where the coin fell, so the black king wins.

In the third example, the coin fell in the starting cell of the black king, so the black king immediately wins.
*/



#include<bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	long long n, x, y;
	cin >> n >> x >> y;
	
	long long wd = min(abs(x - 1), abs(y - 1)) + abs(x - y);
	long long bd = min(abs(x - n), abs(y - n)) + abs(x - y);
	
	if (bd < wd) cout << "Black";
	else cout << "White";
	
	
    
    return 0;
}
