# C-Files_Strings_PointersToFuncs_ConditionalCompilation_Bits

The fourth exercise in a C programming course. 
The exercise involves strings, pointers to functions, conditional compilation, bits.

## Description

Sequencing is a method of arranging information about DNA, RNA, or protein sequences in such a way that similar regions can be identified, which may be the result of functional, structural, or evolutionary relationships.
https://he.wikipedia.org/wiki/%D7%A2%D7%99%D7%9E%D7%95%D7%93_%D7%A8%D7%A6%D7%A4%D7%99%D7%9D
https://www.ebi.ac.uk/seqdb/confluence/display/JDSAT/Bioinformatics+Tools+FAQ

In this exercise we will apply the naive approach of arranging information.
The DNA, RNA, or protein sequences can be encoded using a series of letters, including spaces.
There is great significance to the full identity of two sequences or to the degree of closeness between them. One of the classic problems in bioinformatics is to identify whether there is another SEQ2 subset in the given sequence SEQ1. And if not - what is the place in SEQ1 that is most similar to SEQ2 in terms of a certain proximity criterion.

The figure shows two sequences of the same size, SEQ1 and below it SEQ2. Sequence SEQ2 starts from place 5 relative to the beginning of SEQ1. The sequence of signs is the size of SEQ2.
    * A hyphen symbolizes a lack of amino acid at a certain place in the sequence.
    * The bottom line shows comparison marks between the letters in the sequences:
    * Asterisk - the letters are the same (same amino acid)
    * Spacing - the letters are not the same (different amino acids)
    * Colonal - the letters are not the same (different amino acids but with close properties)
    * Dot - the letters are not the same (different amino acids with similar properties)

![image](https://user-images.githubusercontent.com/74857750/149570800-db1c3ce6-8ceb-4a70-8d28-38524bdf3f33.png)

### What are letters with close attributes (colon)?
Given a list of different amino acid groups.
Letters in the same group are defined as letters with close attributes.

![image](https://user-images.githubusercontent.com/74857750/149570911-67400647-e28e-4cc1-8278-1d575499ef09.png)

For example: In the figure of the eighth pair on the left EK is marked with a colon that it appears in the NEQK group.

### What are letters with similar properties (point comparison mark)?
The identification of similar features is performed only if the identification of the nearest features fails.
Given a list of different amino acid groups.
Letters in the same group are defined as letters with close attributes.

![image](https://user-images.githubusercontent.com/74857750/149571025-603341b2-eacc-40bc-afcb-583d32b19b5a.png)

For example: in the illustration the KS pair is marked with a dot because it appears in the SNDEQK group (there is another group but enough to find belonging to one group).

Note -> The colon (:) is better than the dot (.)

## Tasks:

In all tasks the SEQ2 sequence is not longer than the SEQ1 sequence.

1. Write a createSequence function that gets the name of a text file and builds a letter sequence. The file records the sequence letters one after the other with no spaces between them.

2. Write createSigns functions that get two sequences of letters SEQ1 and SEQ2 in different sizes and position n of SEQ2 from the beginning of SEQ1. The function constructs a sequence of comparison marks in a compressed form.
The comparison is made between all pairs SEQ1 [n + i] and SEQ2 [i] as long as SEQ2 does not "slide" from SEQ1. The place numbering starts from 0.
The sequence of signs should be kept compressed, using a minimum amount of memory.
Hint: Only four different comparison marks were defined - space, asterisk, colon and dot.

3. Write a getCount function to evaluate the proximity between the two sequences. The function receives a sequence of comparison marks in a compressed form and returns the difference between the number of asterisks and the number of points in the sequence.
 
4. Write an evaluationDifference function that takes two sequences of letters SEQ1 and SEQ2 of different sizes and position n. The function returns the proximity value between the two sequences. The comparison is made between all pairs SEQ1 [n + i] and SEQ2 [i] as long as SEQ2 does not "slide" from SEQ1. The place numbering starts from 0.

5. Write a main function that demonstrates all the functionality you developed in the previous sections.
    * The main gets through the parameters the names of all the required files.
    * Inside the main provide two running options: display sequences and symbols to the screen or not display sequences and symbols to the screen. The execution option will be         set according to the PRINT_SEQUENCES macro to be set or not set.

## How To Run 
This project runing on Visual Studio.
