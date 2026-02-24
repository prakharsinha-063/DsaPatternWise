//arrays and linked list
//basics + fundamentals
//variable simplest data structure : imagine like a box
//array & linked list : variables boxes sab jod kr hi 

//array similar things ka contiguous allocation
//bahut saare boxes ek saath jod do
// int arr[5] saare integers hi honge
// [ | | | | ]
//  0 1 2 3 4  => indexing which is 0 based..0 se start hota h
//array can be 2D also
//arr[4][5]
// [ | | | | ]
// [ | | | | ]
// [ | | | | ]
// [ | | | | ]

//limitations of array
//array k beech me ghusane me bahut time lagta h ..end me insertion and deletion asaan h but beech me time lagta h..har element ko utha kr ghiskana hota h
//strengths of array
//random access bahut achhi h arr[3]: 4th element of array

// --------------------------------------------------------------------------------------------------------------------
//linked list : head and tail
//4 boxes khali h but line me khali nhi h 
//  20   30   50.  null
// [  ] [  ] [  ] [  ]
//  1    20   30.  50

//analogy: 4 boxes h neeche jinka location likha hua h 1 ,20,30,50...toh pehla box 1 naam k location pr h ab usko bata do ki next box kaha pr stored h ..toh enxt box jo h woh 20th location pr stored h ..next box jo 20th pr stored h usko bata do uske baad wala kaha pr stored h jo ki 30th pr h and so on and so on..last box k aage kuch nhi toh waha pr null daal do

//advantages
//beech me insertion and deletion is not as costly as arrays in random points
//disadvantages
//random access is very costly 
