# Push Swap

<p align="center">
<img src="https://play-lh.googleusercontent.com/WRlGQXa9Pav7YZPW-P5X8PAga0lF2T1BAzmasxB9qV_1_om5DgmMbxOFo2SK8ZN5K5k" align="center"/>
</p>

# What is Push Swap ? 

Push swap is a sorting algorithm used to sort a stack of integers. It operates on two stacks, Stack A and Stack B. The goal is to sort Stack A in ascending order using only a limited set of operations: swapping the top two elements of a stack (called "sa" and "sb"), pushing an element from one stack onto the other (called "pa" and "pb"), and rotating a stack (moving the top element to the bottom; called "ra", "rb", "rr", "rra", "rrb", and "rrr" depending on the stack being rotated).

The algorithm works by first pushing some elements from Stack A to Stack B, so that Stack A contains only a few elements. Then it sorts the elements on Stack A using only the "sa", "ra", and "rra" operations. Finally, it pushes the elements back from Stack B to Stack A in ascending order using the "pa" operation.
