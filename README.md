Program #1

COSC 2030

Name: Oreoluwa A. Babatunde

Competing: YES 

Best run time:39.6263 seconds on Hive

Anything that doesn't work:Everything works.

---
grading 95/100<BR>
* github, compiles, and  run (10 points ) yes
* cover page correct (2 points) yes 
* readme updated and correct (2 points) yes
* data structure is an Linked list (25 points) yes
  * issues in the data structure like the destructor
  * instead of heada through headz.  Use an array of 26 (or 27).  then a formula, like item[0] - 'a' (so 0 for a-a, 1 b-a, etc)
    * saves so much code lines.
* cleaword method ( 12 points) yes
* read dictionary (5 points) yes
  * calls clean word 
* reads book (5 points) yes
  * calls clean word
* skipped correct ( 5 points) yes
* spelling checking code correct (10 points) yes
* compare counts are correct (10 points) no -5
  * the counts are wrong.  you have foundComp = compares;, instead of foundComp +=compares;
    * so the number are just the last successful find and failed find.
* format/output correct (10 points) yes 
  * spelled and misspelled
  * misspelled file?
* timing code and run time (4 points) yes
* competing, gears: 20

and Notes:<BR>
* runtime of 129.  numbers look good.  I'm questioning the compares, which are seem way to low, 228 total compares for spelled and 17 for not?!  and run time 129 seconds.  those should be higher.  even at 5 seconds, it's average of 5 and 10.
* you have a ton of repeated and unecessary code.  Not just the if, but maybe places.  slows everything down.
  * condition = true;  return condition;
    * this could be 1 statement.
  * in clean word multi places you have  word[i] = word[i];  doesn't do anything, but slow down your program.
* fixed the += and misspelled average is 715, spelled average is 180.  that's is numbers I can believe.
* sub 1300, so 20 gears awarded.
