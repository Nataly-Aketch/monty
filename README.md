# Stacks, Queues - LIFO, FIFO
The goal of this project is to create an intepreter for Monty ByteCode files.
## Description
### The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it e.g push, pall which are, in essence, stack operations.
## Case Implementation: 
> Usage: monty filename

Where 'filename' path to the file containing Monty byte code

> $cat -e bytecodes/00.m

push 1$

push 2$

push 3$

pall$

> $./monty bytecodes/00.m

3

2

1

## Authors
Nataly-Aketch <nataliebeckie@gmail.com>
