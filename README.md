# 42PushSwap

This project will make you sort data on a stack, with a limited set of instructions, usingthe lowest possible number of actions. To succeed you’ll have to manipulate varioustypes of algorithms and choose the one (of many) most appropriate solution for anoptimized data sorting.

Number of approaches in movements

- 2n: 2 Moves
- 3n: Between 2 and 3 movements
- 5n: Between 7 and 12 movements
- 100n: Between 500 and 700 movements
- 500n: Between 5100 and 5500 movements 

![Push_swap](gifs/push_swap.gif)

## Prerequisites

This project is for Mac OS.

## Installation

* `git clone git@github.com:MLeganes/42PushSwap.git` this repository
* `cd 42PushSwap`

## Running
 
* `make`

* Run program with ``` ./push_swap 3 5 7```
  
Run push_swap with ramdons autogenerated numbers:
	
	ARG=`ruby -e "puts (-0..100).to_a.shuffle.join(' ')"`; ./push_swap $ARG

Count the operations:

	ARG=`ruby -e "puts (0..100).to_a.shuffle.join(' ')"`; ./push_swap $ARG | wc -l

## Useful Links

* [Visualizer](https://github.com/o-reo/push_swap_visualizer)
* [Tester](https://github.com/lmalki-h/push_swap_tester)
* [sanitize](https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer)

## Visualizer

move <pyviz.py> to main folder
To execute it:

	python3 pyviz.py `ruby -e "puts (-0..100).to_a.shuffle.join(' ')"`

## Tester

Rename checker_mac to checker.
Move <genstack.pl> to main folder.

	chmod 744 genstack.pl
	chmod 744 checker

To execute it:

	bash push_swap_tester/tester.sh . 0-10 5

## Sanitize

Add -g in gcc command.

	-fsanitize=leak
	-fsanitize=address

## Print traces

Add in header file this define:

	# define PRINT_HERE() (printf("file: %s, line: %d\n", __FILE__, __LINE__))

And used it from any part of your program

	PRINT_HERE();