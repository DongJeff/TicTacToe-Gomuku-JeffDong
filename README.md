Lab 4
Group Name:
	A State of Panic
Group Members:
	Michael Joo, Ryan Miller, Jeff Dong
Group Assignment:
	Michael Joo: Focused on implementation of Gomoku class and its methods
	Ryan Miller: Focused on implementing game base and TicTacToe based on Lab 3
	Jeff Dong: Focused on implementation of Gomoku methods and testing
-----------
Cases of incorrect usage input or input count

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gonoku
usage: Lab4.exe <input game name>

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gonoku.txt
usage: Lab4.exe <input game name>

-----------
Player Quit Cases

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gomoku
Beginning a game of Gomoku!

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
quit
A user quit the game
0 turns were played!

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gomoku
Beginning a game of Gomoku!

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,01
0 01

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
quit
A user quit the game
1 turns were played!



-----------
Standard Game of Gomoku


H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gomoku
Beginning a game of Gomoku!

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,0
0 0

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0  B                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X

 --------------
Testing for various incorrctly formmated inputs

White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,0
the input coordinates overlap with another piece
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,-s
coordinates could not be extracted properly
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1dk
no comma was found in the string
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
12,
coordinates could not be extracted properly
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
19,0
coordinates are outside of playing board

-------------
Finishing game of Gomoku

Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,0
1 0

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,1
0 1

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,1
1 1

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B  W                                                    1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,2
0 2

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2  B                                                       2
 1  B  W                                                    1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:

Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,2
1 2

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2  B  W                                                    2
 1  B  W                                                    1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,3
0 3

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3  B                                                       3
 2  B  W                                                    2
 1  B  W                                                    1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,3
1 3

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3  B  W                                                    3
 2  B  W                                                    2
 1  B  W                                                    1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,4
0 4

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4  B                                                       4
 3  B  W                                                    3
 2  B  W                                                    2
 1  B  W                                                    1
 0  B  W                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone won the game

------------
Horizontal Victory Black

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gomoku
Beginning a game of Gomoku!

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
15,10
15 10

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                               B          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,2
1 2

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                               B          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
14,10
14 10

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                            B  B          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
16,10
16 10

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                            B  B  W       10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
13,10
13 10

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                         B  B  B  W       10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
16,9
16 9

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                         B  B  B  W       10
 9                                                  W       9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
12,10
12 10

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                      B  B  B  B  W       10
 9                                                  W       9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
11,9
11 9

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                      B  B  B  B  W       10
 9                                   W              W       9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
11,10
11 10

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                   B  B  B  B  B  W       10
 9                                   W              W       9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2     W                                                    2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone won the game


------------
Diagonal Victory Black

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gomoku
Beginning a game of Gomoku!

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
10,5
10 5

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                B                         5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,2
2 2

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                B                         5
 4                                                          4
 3                                                          3
 2        W                                                 2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
11,6
11 6

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                   B                      6
 5                                B                         5
 4                                                          4
 3                                                          3
 2        W                                                 2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,3
2 3

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                   B                      6
 5                                B                         5
 4                                                          4
 3        W                                                 3
 2        W                                                 2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
12,7
12 7

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                      B                   7
 6                                   B                      6
 5                                B                         5
 4                                                          4
 3        W                                                 3
 2        W                                                 2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,0
0 0

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                      B                   7
 6                                   B                      6
 5                                B                         5
 4                                                          4
 3        W                                                 3
 2        W                                                 2
 1                                                          1
 0  W                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
13,8
13 8

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                         B                8
 7                                      B                   7
 6                                   B                      6
 5                                B                         5
 4                                                          4
 3        W                                                 3
 2        W                                                 2
 1                                                          1
 0  W                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,5
1 5

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                         B                8
 7                                      B                   7
 6                                   B                      6
 5     W                          B                         5
 4                                                          4
 3        W                                                 3
 2        W                                                 2
 1                                                          1
 0  W                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
14,9
14 9

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                            B             9
 8                                         B                8
 7                                      B                   7
 6                                   B                      6
 5     W                          B                         5
 4                                                          4
 3        W                                                 3
 2        W                                                 2
 1                                                          1
 0  W                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone won the game

------------
Diagonal Victory White
H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe Gomoku
Beginning a game of Gomoku!

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0                                                          0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,0
0 0

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                          11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0  B                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
18,11
18 11

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1                                                          1
 0  B                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,1
0 1

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                          12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
17,12
17 12

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B                                                       0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,0
1 0

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                          13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  B                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
16,13
16 13

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                  W       13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5                                                          5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  B                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,5
0 5

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                                          14
13                                                  W       13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5  B                                                       5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  B                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
15,14
15 14

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                               W          14
13                                                  W       13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5  B                                                       5
 4                                                          4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  B                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,4
0 4

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                                          15
14                                               W          14
13                                                  W       13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5  B                                                       5
 4  B                                                       4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  B                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
14,15
14 15

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18                                                          18
17                                                          17
16                                                          16
15                                            W             15
14                                               W          14
13                                                  W       13
12                                                     W    12
11                                                        W 11
10                                                          10
 9                                                          9
 8                                                          8
 7                                                          7
 6                                                          6
 5  B                                                       5
 4  B                                                       4
 3                                                          3
 2                                                          2
 1  B                                                       1
 0  B  B                                                    0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone won the game

------------
Game reaches draw

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18  B  W  B  W  B  W  W  W  B  W  B                         18
17  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 17
16  B  W  B  W  B  W  B  W  B  W  B  B  B  W  B  W  B  W  B 16
15  W  B  W  W  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 15
14  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 14
13  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 13
12  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 12
11  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 11
10  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 10
 9  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 9
 8  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 8
 7  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 7
 6  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 6
 5  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 5
 4  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 4
 3  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 3
 2  B  W  W  B  B  B  W  B  W  B  W  B  W  B  W  B  W  B  W 2
 1  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  W 1
 0  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
11,18
11 18

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18  B  W  B  W  B  W  W  W  B  W  B  W                      18
17  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 17
16  B  W  B  W  B  W  B  W  B  W  B  B  B  W  B  W  B  W  B 16
15  W  B  W  W  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 15
14  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 14
13  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 13
12  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 12
11  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 11
10  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 10
 9  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 9
 8  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 8
 7  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 7
 6  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 6
 5  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 5
 4  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 4
 3  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 3
 2  B  W  W  B  B  B  W  B  W  B  W  B  W  B  W  B  W  B  W 2
 1  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  W 1
 0  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
12,18
12 18

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18  B  W  B  W  B  W  W  W  B  W  B  W  B                   18
17  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 17
16  B  W  B  W  B  W  B  W  B  W  B  B  B  W  B  W  B  W  B 16
15  W  B  W  W  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 15
14  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 14
13  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 13
12  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 12
11  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 11
10  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 10
 9  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 9
 8  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 8
 7  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 7
 6  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 6
 5  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 5
 4  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 4
 3  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 3
 2  B  W  W  B  B  B  W  B  W  B  W  B  W  B  W  B  W  B  W 2
 1  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  W 1
 0  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
White Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
13,18
13 18

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18  B  W  B  W  B  W  W  W  B  W  B  W  B  W                18
17  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 17
16  B  W  B  W  B  W  B  W  B  W  B  B  B  W  B  W  B  W  B 16
15  W  B  W  W  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 15
14  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 14
13  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 13
12  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 12
11  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 11
10  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 10
 9  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 9
 8  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 8
 7  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 7
 6  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 6
 5  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 5
 4  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 4
 3  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 3
 2  B  W  W  B  B  B  W  B  W  B  W  B  W  B  W  B  W  B  W 2
 1  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  W 1
 0  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
Black Stone's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
14,18
14 18

 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
18  B  W  B  W  B  W  W  W  B  W  B  W  B  W  B             18
17  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 17
16  B  W  B  W  B  W  B  W  B  W  B  B  B  W  B  W  B  W  B 16
15  W  B  W  W  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 15
14  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 14
13  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 13
12  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 12
11  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 11
10  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 10
 9  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 9
 8  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 8
 7  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 7
 6  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 6
 5  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 5
 4  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 4
 3  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W 3
 2  B  W  W  B  B  B  W  B  W  B  W  B  W  B  W  B  W  B  W 2
 1  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  W 1
 0  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B  W  B 0
 X  0  1  2  3  4  5  6  7  8  9 10 11 12 13 14 15 16 17 18 X
The game resulted in a draw
357 turns were played!

----------
TicTacToc quit cases

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe TicTacToe
Beginning a game of TicTacToe!
4
3
2
1
0
  0 1 2 3 4

X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
quit
A user quit the game
0 turns were played!

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe TicTacToe
Beginning a game of TicTacToe!
4
3
2
1
0
  0 1 2 3 4

X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,1
1 1
4
3
2
1   X
0
  0 1 2 3 4

Player X: 1,1
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
quit
A user quit the game
1 turns were played!

---------------
TicTacToe inccorect coordinate testing

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe TicTacToe
Beginning a game of TicTacToe!
4
3
2
1
0
  0 1 2 3 4

X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
0,0
coordinates are outside of playing board
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
4,4
coordinates are outside of playing board
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
4,0
coordinates are outside of playing board
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
4,1
coordinates are outside of playing board
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
s,d
coordinates could not be extracted properly
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,-
coordinates could not be extracted properly


-----------
TicTacToe Standard Win
H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe TicTacToe
Beginning a game of TicTacToe!
4
3
2
1
0
  0 1 2 3 4

X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,1
1 1
4
3
2
1   X
0
  0 1 2 3 4

Player X: 1,1
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,3
3 3
4
3       O
2
1   X
0
  0 1 2 3 4

Player O: 3,3
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,1
2 1
4
3       O
2
1   X X
0
  0 1 2 3 4

Player X: 1,1; 2,1
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,2
2 2
4
3       O
2     O
1   X X
0
  0 1 2 3 4

Player O: 3,3; 2,2
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,1
3 1
4
3       O
2     O
1   X X X
0
  0 1 2 3 4

Player X: 1,1; 2,1; 3,1
X player won the game


-------------
TicTacToe Draw Game

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe TicTacToe
Beginning a game of TicTacToe!
4
3
2
1
0
  0 1 2 3 4

X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,2
2 2
4
3
2     X
1
0
  0 1 2 3 4

Player X: 2,2
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,3
3 3
4
3       O
2     X
1
0
  0 1 2 3 4

Player O: 3,3
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,2
3 2
4
3       O
2     X X
1
0
  0 1 2 3 4

Player X: 2,2; 3,2
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,2
1 2
4
3       O
2   O X X
1
0
  0 1 2 3 4

Player O: 3,3; 1,2
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,3
1 3
4
3   X   O
2   O X X
1
0
  0 1 2 3 4

Player X: 2,2; 3,2; 1,3
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,1
3 1
4
3   X   O
2   O X X
1       O
0
  0 1 2 3 4

Player O: 3,3; 1,2; 3,1
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,3
2 3
4
3   X X O
2   O X X
1       O
0
  0 1 2 3 4

Player X: 2,2; 3,2; 1,3; 2,3
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,1
2 1
4
3   X X O
2   O X X
1     O O
0
  0 1 2 3 4

Player O: 3,3; 1,2; 3,1; 2,1
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,1
1 1
4
3   X X O
2   O X X
1   X O O
0
  0 1 2 3 4

Player X: 2,2; 3,2; 1,3; 2,3; 1,1
The game resulted in a draw
9 turns were played!

-----------
Diagonal O Win

H:\332S\cse332s-fl20-wustl\lab4\lab4-a-state-of-panic\Lab4\x64\Debug>Lab4.exe TicTacToe
Beginning a game of TicTacToe!
4
3
2
1
0
  0 1 2 3 4

X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,1
1 1
4
3
2
1   X
0
  0 1 2 3 4

Player X: 1,1
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,1
3 1
4
3
2
1   X   O
0
  0 1 2 3 4

Player O: 3,1
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,1
2 1
4
3
2
1   X X O
0
  0 1 2 3 4

Player X: 1,1; 2,1
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
2,2
2 2
4
3
2     O
1   X X O
0
  0 1 2 3 4

Player O: 3,1; 2,2
X's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
3,2
3 2
4
3
2     O X
1   X X O
0
  0 1 2 3 4

Player X: 1,1; 2,1; 3,2
O's Turn:
Enter a coordinate pair of form 'col,row' or type 'quit' to exit game
1,3
1 3
4
3   O
2     O X
1   X X O
0
  0 1 2 3 4

Player O: 3,1; 2,2; 1,3
O player won the game
