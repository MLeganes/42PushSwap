# 42PushSwap

This project will make you sort data on a stack, with a limited set of instructions, usingthe lowest possible number of actions. To succeed you’ll have to manipulate varioustypes of algorithms and choose the one (of many) most appropriate solution for anoptimized data sorting.

## To do list
  
- [X] 	stack_new
- [X] 	stack_add
- [X] 	stack_init
- [ ] 	stack_last
- [ ] 	stack_delete
- [ ] 	stack_len
- [X] 	create_stack_a

- [X] 	operation_swap
- [X] 	operation_rotate
- [x] 	operation_rev_rotate
- [x] 	operation_push

- [ ] 	algorithm_small
- [ ] 	algorithm_medium
- [ ] 	algorithm_large
	
- [ ]   Check readme

## Prerequisites

(?) This project is for macOS.

## Installation

* `git clone git@github.com:MLeganes/42PushSwap.git` this repository
* `cd 42PushSwap`

## Running
 
* `make`

* Star game with map ``` ./push_swap 3 5 7```

## Useful Links

* [liksss](https://harm-smits.github.io/42docs/libs/minilibx)


## Visualizer

https://github.com/o-reo/push_swap_visualizer
move <pyviz.py> to main folder
	
	python3 pyviz.py `ruby -e "puts (-0..100).to_a.shuffle.join(' ')"`


## Sanitize (To test)

Add -g in gcc command.

	-fsanitize=leak
	-fsanitize=address

* [sanitize](https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer)