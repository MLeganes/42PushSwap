# 42PushSwap

This project will make you sort data on a stack, with a limited set of instructions, usingthe lowest possible number of actions. To succeed you’ll have to manipulate varioustypes of algorithms and choose the one (of many) most appropriate solution for anoptimized data sorting.

## To do list
  
- [ ] 	SEGV when the input is "2"
- [ ] 	problems with input 0  
- [ ] 	stack_delete

- [ ] 	algorithm_small
- [x] 	algorithm_large

New naming for functions!!!!
- [X] 	push_swap
- [X] 	push_swap_init
- [ ] 	push_swap_free
- [ ] 	push_swap_error
- [ ] 	push_swap_sort
	
- [ ]   Check readme

## Prerequisites

(?) This project is for Mac OS.

## Installation

* `git clone git@github.com:MLeganes/42PushSwap.git` this repository
* `cd 42PushSwap`

## Running
 
* `make`

* Star game with map ``` ./push_swap 3 5 7```

## Useful Links

* [lik-name](https://link.example)


## Visualizer

https://github.com/o-reo/push_swap_visualizer
move <pyviz.py> to main folder
	
	python3 pyviz.py `ruby -e "puts (-0..100).to_a.shuffle.join(' ')"`


## Sanitize (To test)

Add -g in gcc command.

	-fsanitize=leak
	-fsanitize=address

* [sanitize](https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer)