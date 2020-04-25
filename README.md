# USACO-Silver-Division-MooBuzz
My solution to the USACO Silver Division problem: MooBuzz

Problem:
Farmer John's cows have recently become fans of playing a simple number game called "FizzBuzz". The rules of the game are simple: standing in a circle, the cows sequentially count upward from one, each cow saying a single number when it is her turn. If a cow ever reaches a multiple of 3, however, she should say "Fizz" instead of that number. If a cow reaches a multiple of 5, she should say "Buzz" instead of that number. If a cow reaches a multiple of 15, she should say "FizzBuzz" instead of that number. A transcript of the first part of a game is therefore:
1, 2, Fizz, 4, Buzz, Fizz, 7, 8, Fizz, Buzz, 11, Fizz, 13, 14, FizzBuzz, 16

Having a slightly more limited vocabulary, the version of FizzBuzz played by the cows involves saying "Moo" instead of Fizz, Buzz, and FizzBuzz. The beginning of the cow version of the game is therefore

1, 2, Moo, 4, Moo, Moo, 7, 8, Moo, Moo, 11, Moo, 13, 14, Moo, 16

Given N (1≤N≤109), please determine the Nth number spoken in this game.

SCORING
Test cases 2-5 satisfy N≤106.
INPUT FORMAT (file moobuzz.in):
The input consists of a single integer, N.
OUTPUT FORMAT (file moobuzz.out):
Please print out the Nth number spoken during the game.
SAMPLE INPUT:
4
SAMPLE OUTPUT:
7
The 4th number spoken is 7. The first 4 numbers spoken are 1, 2, 4, 7, since we skip over any time a cow says "Moo".

Silver Division Score: 1000
