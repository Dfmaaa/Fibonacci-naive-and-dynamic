# Fibonacci-naive-and-dynamic
If you compile fibonacci_regular.c and execute it with a high value as input, it will take a lot of time because MANY recursive calls are COMMON.
Now, I am too lazy to draw a recursion tree here but just try to think, wouldn't many of the calls be common? That is exactly why dynamic programming
exists. It stores the previous outputs and uses them later. It's a very nice concept because it saves a lot of time. Not negligible time. Real SECONDS,
or MINUTES. This is the most simple example of dynamic programming. One can truly understand the importance of dynamic programming when they compare two 
algorithms, one which uses dynamic programming and one which doesn't. You'll notice the time difference. You wont need another program to measure it. Just
try passing high values to the function.
