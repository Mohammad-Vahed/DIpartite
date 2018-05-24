# Motif
A DNA sequence motif finding program

******************************************************

Overview:

Dipartite

Release 2. May 2018

A DNA sequence motif finding program.


******************************************************

Start Using Dipartite:

Note: if you need to run it under windows , you need to do:

Dipartite.exe

Now you can run the program by typing:

./Dipartite

******************************************************

Input Sequences:


The following shows the details about parameter specification:

Usage: ./Dipartite -i sequence file address (options)

The input sequence should be in a plain text file, not in word or html.

Right now, the program only recogonize restricted FASTA format:

If you have the following sequence Fasta format:

sample:

'>' >seq1

ATCTGAATGCAAGCTGCACACGTTTTTCAGATAAA

> >seq2

AGTCAGACTACAAGCTGCACACTTTTCAGATAAA

> >seq3

ATCTGAATCTACAAGCTGCACGTTTTTCAGATAAA



If you have the following sequence Text format:

sample:

ATCTGAATGCAAGCTGCACACGTTTTTCAGATAAA

AGTCAGACTACAAGCTGCACACTTTTCAGATAAA

ATCTGAATCTACAAGCTGCACGTTTTTCAGATAAA


******************************************************
Description of optional parameters

-m    <Left motif width (default 6)>
	For one-block motif or the first block of a two-block motif. 

-M   <Right motif width (default 6)>
           For set just one-block motif you should input 0

-g    <min gap between two motif blocks (default 0)>
	This should only be set if -m and -M are both set.

-G    <max gap between two motif blocks (default 0)>
	This should only be set if -m and -M are both set

-t    <number of times trying to repeat process to find best motif (default 30)>

-o   <name of output file (default output.txt)>

-i    <name of input file(or address)>

-f    <you want choose the type of input file for Fasta file input 1 and text file input 2 (default 2)> 

-p    <choose read pattern (For just Positive direction input 1 and Positive and Negative direction input) (default 1)>

-n     <your method, for Mono-Nucleotide enter number 1 and Di-Nucleotide enter number (default 1)>



Example 2

    ./Dipartite -i /home/Documents/sigmaD.txt -f 2 -n 1 -p 1 -m 6 -M 8 -g 11 -G 16 -t 50 -o /home/Documents/text1.txt


    ==> The input data is text file and calculate method is Mononucleotide and pattern seek is just positive and find motif of width 6 for left motif and 8 for right motif from sequence file inseq (restricted TEXT), minimum gap is 11 and maximum gap is 16 Try motif finding 50 times.

Input data address is: /home/Documents/sigmaD.txt

output data address is: /home/Documents/text1.txt


Note1: Please use of just one space between each parameter

