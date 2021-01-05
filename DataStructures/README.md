#README 


(Jan 5th)
http://www.youtube.com/playlist?list=PL2_aWCzGMAwI3W_JlcBbtYTwiQSsOTa6P&feature=view_all
1. Intrdouction to Data Structures
2. List as Abstract Data types
3. Introduction to Linked Lists
4. Arrays vs Linked Lists


Examples 

1. English Dictionary
2. Maps

we talk about datastructures as 
===============================================================================
1. Mathematical/logical models
		(or)
   Abstract data types
	2.1 List (Store a given number of elements/Read elements of position/Modify)
	2.2 Arrays (Concrete Implementation)
	2.3 Linked List
	2.4 Stack
	2.5 Queue
	2.6 Tree
	2.7 Graphs

List:
================
- Store a given number of elements of a given data type
- Write / modify elements at a position
- Read element at a position
- Eg., Arrays
- int array[10]


Dynamic List:
================
- Empty
- Insert
- Remove
- Count
- Read / Write / Modify element
- Specify the datatype of the list

Not effective with respect to memory and so we have to look at the linked list.


Linked List

Struct Node
{
	int data;
	Node *next;
}

This is to ensure that we keep track of the next element using the pointer.

===============================================================================

Array vs Linked Lists


						Arrays								Linked List

Cost of 
Accessing an 
elements 			Constant Time 0(1)				| 		O(n)

Memory 
Requirements		Fixed Size						|		No unused memory, 
															Extra memory for 
															pointer variables

					Memory not available as
					one large block					|		Multiple small blocks 
						 									can be used.

Cost of 
Inserting 
an elements		
1. Beginning		O(n)							|		O(1)
2. Middle			O(n)							|		O(n)
3. End				O(1) if not full, 
					O(n) if full					|		O(n)

Ease of use 		Yes								|		NO

===============================================================================





