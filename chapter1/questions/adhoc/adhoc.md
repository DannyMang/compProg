The categories:
 • (Super) Easy
You should get these problems AC in under 7 minutes each!
If you are new with competitive programming, we strongly recommend that you start your journey by solving some problems from this category.
• Game (Card)
There are lots of Ad Hoc problems involving popular games. The first game type is re-
lated to cards. Usually you will need to parse the string input as normal cards have suits
8
(D/Diamond/♦, C/Club/♣, H/Heart/♥, and S/Spades/♠) on top of the ranks (usually: 2 9
<3<...<9<T/Ten<J/Jack<Q/Queen<K/King<A/Ace ). Itmaybeagoodidea to map these complicated strings to integer indices. For example, one possible mapping is to mapD2→0,D3→1,...,DA→12,C2→13,C3→14,...,SA→51. Then,wework with the integer indices instead.
• Game (Chess)
Another popular games that sometimes appear in programming contest problems are chess problems. Some of them are Ad Hoc (listed in this section). Some of them are combinatorial, like counting how many ways to put 8-queens in 8 × 8 chess board (listed in Chapter 3).
• Game (Others)
Other than card and chess games, there are many other popular problems related to other games that make their way into programming contest problems: Tic Tac Toe, Rock-Paper- Scissors, Snakes/Ladders, BINGO, Bowling, and several others. Knowing the details of the game is helpful, but most of the game rules are given in the problem description to avoid disadvantaging contestants who have not played those games before.
7 8
are more familiar with competitive programming, you will find that these problems are indeed super easy.
 9
In some other arrangement, A/Ace < 2.
This is no longer true in IOI 2011.
However, do not feel bad if you fail to do so. There are reasons why a code does not get AC response. Once you
13
1.3. GETTING STARTED: THE AD HOC PROBLEMS ⃝c Steven & Felix
 • The ‘Josephus’-type problems
The Josephus problem is a classic problem where there are n people numbered from 1, 2, . . . , n, standing in a circle. Every m-th person is going to be executed. Only the last remaining person will be saved (history said it was the person named Josephus). The smaller version of this problem can be solved with plain brute force. The larger ones require better solutions.
• Problems related to Palindrome or Anagram
These are also classic problems.
Palindrome is a word (or actually a sequence) that can be read the same way in either direction. The common strategy to check if a word is palindrome is to loop from the first character to the middle one and check if the first match the last, the second match the second last, and so on. Example: ‘ABCDCBA’ is a palindrome.
Anagram is a rearrangement of letters of a word (or phrase) to get another word (or phrase) using all the original letters. The common strategy to check if two words are anagram is to sort the letters of the words and compare the sorted letters. Example: wordA = ‘cab’, wordB = ‘bca’. After sorting, wordA = ‘abc’ and wordB = ‘abc’ too, so they are anagram.
• Interesting Real Life Problems
This is one of the most interesting category of problems in UVa online judge. We believe that real life problems like these are interesting to those who are new to Computer Science. The fact that we write programs to solve real problems is an extra motivation boost. Who knows you may also learn some new interesting knowledge from the problem description!
• Ad Hoc problems involving Time
Date, time, calendar, . . . . All these are also real life problems. As said earlier, people usually get extra motivation when dealing with real life problems. Some of these problems will be much easier to solve if you have mastered the Java GregorianCalendar class as it has lots of library functions to deal with time.
• Just Ad Hoc
Even after our efforts to sub-categorize the Ad Hoc problems, there are still many others that are too Ad Hoc to be given a specific sub-category. The problems listed in this sub-category are such problems. The solution for most problems is to simply follow/simulate the problem description carefully.
• Ad Hoc problems in other chapters
There are many other Ad Hoc problems which we spread to other chapters, especially because they require some more knowledge on top of basic programming skills.
– Ad Hoc problems involving the usage of basic linear data structures, especially arrays are listed in Section 2.2.1.
– Ad Hoc problems involving mathematical computations are listed in Section 5.2.
– Ad Hoc problems involving processing of strings are listed in Section 6.3.
– Ad Hoc problems involving basic geometry skills are listed in Section 7.2.
Tips: After solving some number of programming problems, you will encounter some pattern. From a C/C++ perspective, those pattern are: libraries to be included (cstdio, cmath, cstring, etc), data type shortcuts (ii, vii, vi, etc), basic I/O routines (freopen, multiple input format, etc), loop macros (e.g. #define REP(i, a, b) for (int i = int(a); i <= int(b); i++), etc), and a few others. A competitive programmer using C/C++ can store all those in a header file ‘competitive.h’. Now, every time he wants to solve another problem, he just need to open a new *.c or *.cpp file, and type #include<competitive.h>.
    14

1.3. GETTING STARTED: THE AD HOC PROBLEMS ⃝c Steven & Felix
  Programming Exercises related to Ad Hoc problems:
• Easy Problems in UVa Online Judge (under 7 minutes)
1. UVa 00272 - TEX Quotes (simply replace all double quotes to TEX() style quotes)
10
2. UVa 00494 - Kindergarten Counting Game (count frequency of words in a line 3. UVa 00499 - What’s The Frequency ... (ad hoc, 1D array manipulation)
4. UVa 10300 - Ecological Premium (straightforward, ignore ‘total animal’)
5. UVa 10420 - List of Conquests * (simple frequency counting, use map)
)
            10
6. UVa 10550 - Combination Lock (simple, do as asked)
7. UVa 11044 - Searching for Nessy (one liner code/formula exists)
8. UVa 11172 - Relational Operators (ad hoc, very easy, one liner)
9. UVa 11332 - Summing Digits (simple recursions, O(1) solution exists (modulo 9))
10. UVa 11498 - Division of Nlogonia (straightforward problem; use one if-else statement) 11. UVa 11547 - Automatic Answer (one liner O(1) solution exists)
12. UVa 11559 - Event Planning * (answer can be found by reading input data once) 13. UVa 11727 - Cost Cutting (sort the 3 numbers and get the median)
14. UVa 11764 - Jumping Mario (one linear scan to count high and low jumps)
15. UVa 11799 - Horror Dash * (one linear scan to find the max value)
16. UVa 11942 - Lumberjack Sequencing (check if input is sorted ascending/descending) 17. UVa 12015 - Google is Feeling Lucky (go through the list twice: get max, print max)
• Game (Card)

1. UVa 00162 - Beggar My Neighbour (card game simulation, straightforward)
2. UVa 00462 - Bridge Hand Evaluator * (simulation, card)
3. UVa 00555 - Bridge Hands (card)
4. UVa 10205 - Stack ’em Up * (card game)
5. UVa 10646 - What is the Card? * (shuffle cards with some rule; get certain card) 6. UVa 11225 - Tarot scores (another card game)
7. UVa 11678 - Card’s Exchange (actually just array manipulation problem) • Game (Chess)
1. UVa 00255 - Correct Move (check the validity of chess moves)
2. UVa 00278 - Chess * (ad hoc, chess, closed form formula exists)
3. UVa 00696 - How Many Knights * (ad hoc, chess)
4. UVa 10196 - Check The Check (ad hoc chess game, tedious)
5. UVa 10284 - Chessboard in FEN * (FEN = Forsyth-Edwards Notation) 6. UVa 10849 - Move the bishop (chess)
7. UVa 11494 - Queen (ad hoc, chess)

• Game (Others)
1. UVa 00220 - Othello (follow the game rules, a bit tedious)
2. UVa 00227 - Puzzle (parse the input, array manipulation)
3. UVa 00232 - Crossword Answers (another complex array manipulation problem)
4. UVa 00339 - SameGame Simulation (follow problem description)
5. UVa 00340 - Master-Mind Hints (determine strong and weak matches)
6. UVa 00489 - Hangman Judge (just do as asked)
7. UVa 00584 - Bowling * (simulation, games, test your reading comprehension)
8. UVa 00647 - Chutes and Ladders (child board game, similar to UVa 11459)
9. UVa 10189 - Minesweeper * (simulate Minesweeper game, similar to UVa 10279)
10. UVa 10279 - Mine Sweeper (2D array helps, similar to UVa 10189) 11. UVa 10363 - Tic Tac Toe (check validity of Tic Tac Toe game, tricky)
Delimiter are the non-alphabetical characters. Can be solved ‘elegantly’ with Java Regular Expression.
15

1.3. GETTING STARTED: THE AD HOC PROBLEMS ⃝c Steven & Felix
 12. UVa 10409 - Die Game (just simulate the die movement)
13. UVa 10443 - Rock, Scissors, Paper (2D arrays manipulation)
14. UVa 10530 - Guessing Game (use 1D flag array)
15. UVa 10813 - Traditional BINGO (follow the problem description)
16. UVa 10903 - Rock-Paper-Scissors ... (count win+losses, output win average)
17. UVa 11459 - Snakes and Ladders * (simulate the process, similar to UVa 647)
• Josephus
1. UVa 00130 - Roman Roulette (brute force, similar to UVa 133)
2. UVa 00133 - The Dole Queue (brute force, similar to UVa 130)
3. UVa 00151 - Power Crisis * (brute force, similar to UVa 440)
4. UVa 00305 - Joseph * (the answer can be precalculated)
5. UVa 00402 - M*A*S*H (simulation problem)
6. UVa 00440 - Eeny Meeny Moo (brute force, similar to UVa 151)
7. UVa 10015 - Joseph’s Cousin * (modified Josephus problem, variant of UVa 305)
• Palindrome / Anagram
1. UVa 00148 - Anagram Checker (uses backtracking)
2. UVa 00156 - Ananagram * (easier with algorithm::sort)
3. UVa 00195 - Anagram * (easier with algorithm::next permutation) 4. UVa 00353 - Pesky Palindromes (brute force all substring)
5. UVa 00401 - Palindromes (simple palindrome check)
6. UVa 00454 - Anagrams (anagram)
7. UVa 00630 - Anagrams (II) (ad hoc, string)
8. UVa 10018 - Reverse and Add (ad hoc, math, palindrome check)
9. UVa 10098 - Generating Fast, Sorted ... (very similar to UVa 195)
10. UVa 10945 - Mother Bear (palindrome)
11. UVa 11221 - Magic Square Palindrome * (not just a word, but a matrix) 12. UVa 11309 - Counting Chaos (palindrome check)
• Interesting Real Life Problems
1. UVa 00161 - Traffic Lights * (you see this problem every time you hit the road)
2. UVa 00346 - Getting Chorded (musical chord, major/minor)
3. UVa 00400 - Unix ls (this command is very popular among UNIX users)
4. UVa 00403 - Postscript (emulation of printer driver)
5. UVa 00448 - OOPS (tedious ‘hexadecimal’ to ‘assembly language’ conversion)
6. UVa 00538 - Balancing Bank Accounts (the story in the problem really happens) 7. UVa 00637 - Booklet Printing * (application in printer driver software)
8. UVa 00706 - LC-Display (this is what we typically see in old computer monitors) 9. UVa 10082 - WERTYU (this keyboard typing error happens to us sometimes)
10. UVa 10191 - Longest Nap (you may want to apply this for your own schedule)
11. UVa 10415 - Eb Alto Saxophone Player (a problem about musical instrument)
12. UVa 10528 - Major Scales (the music knowledge is given in the problem description)
13. UVa 10554 - Calories from Fat (for those who are concerned with their weights)
14. UVa 10659 - Fitting Text into Slides (typical presentation programs do this)
15. UVa 10812 - Beat the Spread * (be careful with boundary cases!)
16. UVa 11223 - O: dah, dah, dah (tedious morse code conversion problem)
17. UVa 11530 - SMS Typing (many handphone users encounter this problem everyday)
18. UVa 11743 - Credit Check (Luhn’s algorithm to check credit card number)
◦◦
1. UVa 00170 - Clock Patience (simulation, time) 2. UVa 00300 - Maya Calendar (ad hoc, time)
3. UVa 00579 - Clock Hands * (ad hoc, time)
           19. UVa 11984 - A Change in Thermal Unit (F to C conversion and vice versa) • Time
 16

1.3. GETTING STARTED: THE AD HOC PROBLEMS ⃝c Steven & Felix
 4. UVa 00837 - Y3K * (use Java GregorianCalendar; similar to UVa 11356)
5. UVa 10070 - Leap Year or Not Leap Year ... (more than just ordinary leap years) 6. UVa 10371 - Time Zones (follow the problem description)
7. UVa 10683 - The decadary watch (simple clock system conversion)
8. UVa 11219 - How old are you? (be careful with boundary cases!)
9. UVa 11356 - Dates (very easy if you use Java GregorianCalendar)
10. UVa 11650 - Mirror Clock (some small mathematics required)
11. UVa 11677 - Alarm Clock (similar idea with UVa 11650)
12. UVa 11947 - Cancer or Scorpio * (much easier with Java GregorianCalendar) 13. UVa 11958 - Coming Home (be careful with ‘past midnight’)
14. UVa 12019 - Doom’s Day Algorithm (Java Gregorian Calendar; get DAY OF WEEK)
• Just Ad Hoc
1. UVa 00101 - The Blocks Problem (simulation)
2. UVa 00114 - Simulation Wizardry (simulation)
3. UVa 00119 - Greedy Gift Givers (simulate give and receive process) 4. UVa 00121 - Pipe Fitters (ad hoc)
5. UVa 00139 - Telephone Tangles (adhoc string, simulation)
6. UVa 00141 - The Spot Game (simulation)
7. UVa 00144 - Student Grants (simulation)
8. UVa 00145 - Gondwanaland Telecom (simply calculate the charges) 9. UVa 00187 - Transaction Processing (simulation)
10. UVa 00335 - Processing MX Records (simulation)
11. UVa 00337 - Interpreting Control Sequences (simulation, output related)
12. UVa 00349 - Transferable Voting (II) (simulation)
13. UVa 00362 - 18,000 Seconds Remaining (simulation)
14. UVa 00379 - HI-Q (simulation)
15. UVa 00381 - Making the Grade (simulation)
16. UVa 00405 - Message Routing (simulation)
17. UVa 00434 - Matty’s Blocks (ad hoc)
18. UVa 00457 - Linear Cellular Automata (simulation)
19. UVa 00496 - Simply Subsets (ad hoc, set manipulation)
20. UVa 00556 - Amazing * (simulation)
21. UVa 00573 - The Snail (simulation, beware of boundary cases!)
22. UVa 00608 - Counterfeit Dollar (ad hoc)
23. UVa 00621 - Secret Research (case analysis for 4 possible outputs)
24. UVa 00661 - Blowing Fuses (simulation)
25. UVa 00978 - Lemmings Battle * (simulation, use multiset)
26. UVa 10019 - Funny Encryption Method (not hard, find the pattern)
27. UVa 10033 - Interpreter (adhoc, simulation)
28. UVa 10114 - Loansome Car Buyer * (simulate loan payment+car depreciation) 29. UVa 10141 - Request for Proposal (this problem can be solved with one linear scan) 30. UVa 10142 - Australian Voting (simulation)
31. UVa 10188 - Automated Judge Script (simulation)
32. UVa 10267 - Graphical Editor (simulation)
33. UVa 10324 - Zeros and Ones (simplified using 1D array: change counter)
34. UVa 10424 - Love Calculator (just do as asked)
35. UVa 10707 - 2D - Nim (check graph isomorphism, a bit hard)
36. UVa 10865 - Brownie Points (simulation)
37. UVa 10919 - Prerequisites? (process the requirements as the input is read)
38. UVa 10963 - The Swallowing Ground (not hard)
39. UVa 11140 - Little Ali’s Little Brother (ad hoc)
40. UVa 11507 - Bender B. Rodriguez Problem (simulation)
       17

1.3. GETTING STARTED: THE AD HOC PROBLEMS ⃝c Steven & Felix
 41. UVa 11586 - Train Tracks (TLE if brute force, find the pattern)
42. UVa 11661 - Burger Time? (linear scan)
43. UVa 11679 - Sub-prime (check if after simulation all banks still have ≥ 0 reserve) 44. UVa 11687 - Digits (simulation, straightforward)
45. UVa 11717 - Energy Saving Microcontroller (tricky simulation)
46. UVa 11850 - Alaska (ad hoc)
47. UVa 11917 - Do Your Own Homework (ad hoc)
48. UVa 11946 - Code Number (ad hoc)
49. UVa 11956 - Brain**** (simulation; ignore ‘.’)
50. IOI 2009 - Garage
51. IOI 2009 - POI
52. IOI 2010 - Cluedo (use 3 pointers)
53. IOI 2010 - Memory (use 2 linear pass)
54. LA 2189 - Mobile Casanova (Dhaka06)
55. LA 3012 - All Integer Average (Dhaka04)
56. LA 3996 - Digit Counting (Danang07)
57. LA 4147 - Jollybee Tournament (Jakarta08)
58. LA 4202 - Schedule of a Married Man (Dhaka08)
59. LA 4786 - Barcodes (World Finals Harbin10)
60. LA 4995 - Language Detection (KualaLumpur10)