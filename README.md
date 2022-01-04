# push_swap_42

## Project Goal
push swap is a 42 project that allows you to learn about varouis sorting alghorithems.

## Project Subject
the goal from this project is to sort a stack of numbers with the latest instructions possible, you only allowed to use tow stack stack a which contians random number without any dublicates, for bonus part you should create a checker to check if the instruction does sort the stack

you only allowed to use the folowing actions :

**sa** : swap a - swap the first 2 elements at the top of stack a. Do nothing if there
is only one or no elements).

**sb** : swap b - swap the first 2 elements at the top of stack b. Do nothing if there
is only one or no elements).

**ss** : sa and sb at the same time.

**pa** : push a - take the first element at the top of b and put it at the top of a. Do
nothing if b is empty.

**pb** : push b - take the first element at the top of a and put it at the top of b. Do
nothing if a is empty.

**ra** : rotate a - shift up all elements of stack a by 1. The first element becomes
the last one.

**rb** : rotate b - shift up all elements of stack b by 1. The first element becomes
the last one.

**rr** : ra and rb at the same time.

**rra** : reverse rotate a - shift down all elements of stack a by 1. The last element
becomes the first one.

**rrb** : reverse rotate b - shift down all elements of stack b by 1. The last element
becomes the first one.

**rrr** : rra and rrb at the same time

## Usage

Clone this repo and run **make**

```
git clone https://github.com/YassineEddyb/push_swap
```

Then run push_swap file with random values for example :

```
./push_swap 3 2 1
sa
rra
```

