// 1
// check if number is odd or even:
if (num&1) -->odd
else -->even

// 2
// check power of two(not work for 0)
if (x&(x-1)) -->is not power of two 
else power of two

// 3
// check if kth bit is set or not
if (x&(1<<k)) -->set 
else not set 

// 4
// toggle the kth bit (change 0 to 1 or 1 to 0)
(x^(1<<k))

// 5
// set the kth bit 
(x|(1<<k))

// 6
// unset the kth bit
(x&!(1<<k))

// 7
// multiply or divide by 2 power k
mul=(x<<k)
div=(x>>k)

// 8
// find out x%pow(2,k)
(x&((1<<k)-1))

// 9
// swap two numbers
x=x^y
y=x^y
x=x^y

// 10
// property:-
        no. of set bits in A=x
        no. of set bits in B=y
        no. of set bits in (A^B)=z
// then
        z is even if x+y is odd
        z is odd if x+y is even
// example
if(x==A){
    x=B
}
else if(x==B){
    x=B
}
// this entire code can be replaced by 
x=A^B^x


// 11
// addition
A+B=(A^B)+2*(A&B)
A+B=(A|B)+(A&B)

// 12
// find no. of set bits in a number X {O(1)}
__builtin_popcount(X){int}
__builtin_popcountll(X){long long}

