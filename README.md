# C_hackerrank_contest
Programs solving various algorithmic problems

## **Used Techniques**  
- **Data Structures**: Linked lists, BSTs, hash tables, queues  
- **Algorithms**: Bubble sort, bitwise operations, recursion, string rotation  
- **Math & Logic**: Prime checks, binary conversions, geometric patterns  

## **How to Compile and Run**  
All programs are standard C and can be compiled with `gcc`:  
```bash
gcc filename.c -o output  
./output
```
## Program Breakdown

1. operators.c
Calculates total meal cost including tip and tax percentages, demonstrates floating-point arithmetic and rounding operations.

```
Financial calculation with percentage operations
Practical Use:
1. Restaurant billing systems calculating final amounts with tips and taxes
2. E-commerce checkout systems applying discounts and fees
3. Financial calculators for investment returns with compound calculations
```
2. conditionals.c
Determines whether a number is "Weird" or "Not Weird" based on specific conditional rules involving odd/even checks and range validation.

```
Complex conditional logic implementation
Practical Use:
1. Rule-based classification systems in business applications
2. Game logic for determining player actions or outcomes
3. Validation systems with multiple criteria for data processing
```
3. multiplication_table.c
Generates and displays multiplication table for a given number from 1 to 10.

```
Multiplication table generation
Practical Use:
1. Educational software for teaching basic arithmetic to children
2. Mathematical reference tools and calculators
3. Training applications for mental math practice
```

4. nums.c
Finds and prints the median value among three input integers using conditional logic.

```
Median finding algorithm for three numbers
Practical Use:
1. Statistical analysis tools for small datasets
2. Voting systems requiring median consensus from three options
3. Quality control systems evaluating three measurements to find middle value
```
5. strings.c
Splits strings into odd/even indexed characters using modular arithmetic and pointer manipulation.

```
Practical Use:
1. Data obfuscation
2. Checksum algorithms
```
6. rota.c
Checks if a string can be rotated to match another.
```
String doubling and substring search
Practical Use:
1. DNA sequence alignment
2. Plagiarism detection
```
7. arrays.c
Reads an array of integers and prints them in reverse order, demonstrating basic array manipulation and memory management.

```
Array reversal and memory management
Practical Use:
1. Data processing applications requiring reverse chronological display
2. Stack implementations where last-in-first-out behavior is needed
3. String/array utilities for reversing user input or search results
```

8. dictionaries_and_maps.c
Standard implementation of phone book functionality using linked lists for name-number storage and retrieval.

```
Dictionary/map data structure implementation
Practical Use:
1. Employee directory systems for small organizations
2. Inventory management with product name to ID mapping
3. Translation dictionaries for simple language applications
```
9. dictionaries_and_maps_binary.c
Binary version of a phone book.

```
Key-value pair storage and retrieval system
Practical Use:
1. Contact management systems in mobile applications
2. Simple database implementations for small-scale applications
3. Configuration file parsers storing key-value settings
```
10. dictionaries_and_maps_hash.c
Hash table version of a phone book.
```
Hashing with chaining for collision resolution
Practical Use:
1. Contact management systems
2. Caching mechanisms
```

11. recursion.c
Calculates factorial of a number using recursive function calls with base cases for 0, 1, and 2.

```
Recursive mathematical computation
Practical Use:
1. Mathematical libraries implementing factorial functions
2. Combinatorics calculations for probability and statistics
3. Educational demonstrations of recursive algorithm design
```  

12. binary.c
Finds the longest sequence of 1s in a binary representation of an integer.

```
Bitwise shifts and masking
Practical Use:
1. Network packet analysis
2. Binary data compression
```  

13. compare_bits.c
Outputs the bitwise AND of two integers.
```
Bitwise operations
Practical Use:
1. Network permissions
2. Embedded systems flag checks
```  


14. bitwise.c
Finds maximum bitwise AND result between pairs of integers within specified range and limit constraints.

```
Bitwise operation optimization
Practical Use:
1. Computer graphics applications for pixel manipulation and masking
2. Cryptographic algorithms using bitwise operations for encoding
3. Embedded systems programming for hardware register manipulation
```
15. 2d_arrays.c
* Calculates the maximum hourglass sum in a 6x6 2D array.
* Technique: Nested loops for grid traversal.
* Use Case: Image processing (kernel filters), game board analysis.
  
16. linked_list.c
Implements basic linked list operations including insertion at the end, display, and proper memory management with cleanup.

```
Dynamic data structure implementation
Practical Use:
1. Foundation for more complex data structures like queues and stacks
2. Dynamic memory management in applications with variable data sizes
3. Undo/redo functionality in text editors or graphics applications
```
17. bubble_sorting.c
Implements bubble sort algorithm with swap counting, displaying sorting statistics and first/last elements after sorting.

```
Basic sorting algorithm with performance metrics
Practical Use:
1. Educational tools demonstrating sorting algorithm efficiency
2. Small dataset sorting where simplicity is preferred over performance
3. Debugging tools to understand algorithm behavior and swap patterns
```

18. binary_search_trees.c
* Computes the height of a BST and inserts nodes recursively.
* Technique: Tree traversal and dynamic node allocation.
* Use Case: Database indexing, filesystem hierarchies.

19. bst_level_order_traversal_recursive.c
Performs level-order (breadth-first) traversal of a binary search tree using recursive approach with height calculation.

```
Tree traversal algorithm (recursive implementation)
Practical Use:
1. File system navigation displaying directory contents level by level
2. Organizational chart printing showing hierarchy by management levels
3. Game tree analysis for AI decision-making in board games
```

20. bst_level_order_traversal_queue.c
Performs level-order traversal of a binary search tree using iterative approach with queue data structure.

```
Tree traversal algorithm (iterative implementation)
Practical Use:
1. Database indexing systems for efficient range queries
2. HTML/XML parsing displaying nested elements by depth
3. Network routing algorithms exploring paths breadth-first
```
21. removeNode.c
Implements a singly linked list with functionality to remove consecutive duplicate nodes, maintaining only one instance of each value.

```
Linked list duplicate removal algorithm
Practical Use:
1. Data deduplication in streaming applications or logs
2. Cleaning sorted datasets by removing consecutive duplicates
3. Memory optimization in data structures storing repetitive information
```

22. is_prime_num.c
* Checks if a number is prime using optimized divisibility checks.
* Technique: Loop until √n with even-number skip.
* Use Case: Cryptography (RSA key generation), random sampling.

23. library.c
* Calculates library fines based on return dates.
* Technique: Nested conditional logic.
* Use Case: Billing systems, deadline enforcement.

24. find_pattern.c
* Filters and sorts names associated with Gmail addresses.
* Technique: String manipulation and qsort.
* Use Case: Email validation, user data sanitization.
