*0x19. C - Stacks, Queues - LIFO, FIFO*

Available operation codes:

| Opcode | Description |
|------------------- | --------------|
|push   | Pushes an element to the stack. e.g (push 1 # pushes 1 into the stack)|
|pall   | Prints all the values on the stack, starting from the to of the stack.|
|pint   | Prints the value at the top of the stack.|
|pop    | Removes the to element of the stack. |
|swap   | Swaps the top to elements of the stack.|
|add    | Adds the top two elements of the stack. The result is then stored in the second node, and the first node is removed.|
|nop    | This opcode does not do anything.|
|sub    | Subtracts the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|div    | Divides the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|mul | Multiplies the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|mod    | Computes the remainder of the top two elements of the stack from the second top element. The result is then stored in the second node, and the first node is removed.|
|#      | When the first non-space of a line is a # the line will be trated as a comment.|
|pchar  | Prints the integer stored in the top of the stack as its ascii value representation.|
|pstr   | Prints the integers stored in the stack as their ascii value representation. It stops printing when the value is 0, when the stack is over and when the value of the element is a non-ascii value.|
|rotl   | Rotates the top of the stack to the bottom of the stack.|
|rotr   | Rotates the bottom of the stack to the top of the stack.|
|stack  | This is the default behavior. Sets the format of the data into a stack (LIFO).|
|queue  | Sets the format of the data into a queue (FIFO).|
