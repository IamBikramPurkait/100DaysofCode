/*      Day 13 : 7th November, 2020
        Author: Bikram Purkait
                                    */
/* TOWER OF HANOI
// The Tower of Hanoi (also called the Tower of Brahma or Lucas' Tower[1] and sometimes pluralized as Towers) 
is a mathematical game or puzzle.It consists of three rods and a number 
of disks of different sizes, which can slide onto any rod. The puzzle starts with the disks in a neat 
stack in ascending order of size on one rod, the smallest at the top,
thus making a conical shape.

The objective of the puzzle is to move the entire stack to another rod,obeying
the following simple rules:

1>Only one disk can be moved at a time.
2>Each move consists of taking the upper disk from one of the stacks and placing it on top
of another stack or on an empty rod.
3>No larger disk may be placed on top of a smaller disk.
With 3 disks, the puzzle can be solved in 7 moves. The minimal number of moves 
required to solve a Tower of Hanoi puzzle is 2n − 1,where n is the number of disks.                
source=https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/0/?track=dsa-self-paced-preview-recursion&batchId=174#
                                            */


#include <stdio.h>

// C recursive function to solve tower of hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", from_rod, to_rod);
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main()
{
    int n; // Number of disks
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods
    return 0;
}
