# DIpartite
DIpartite is a tool for detecting bi*partite* motif based on *di*nucleotide weight matrix.

DIpartite predicts transcription factor binding sites (TFBSs) based on PWM or DWM.
Bipartite motif is defined as two conserved blocks separated by variable gaps.

*****
Getting started
```
git clone https://github.com/Mohammad-Vahed/DIpartite
cd DIpartite
make
```

******************************************************
Usage
```
<<PWM base prediction>>
## For one block motif
./DIpartite -i <fasta> -n 1 -p 2 -m 6 -M 0 -g 0 -G 0 -o <output>

## For two block motif
./DIpartite -i <fasta> -n 2 -p 2 -m 6 -M 0 -g 0 -G 0 -o <output>


<<DWM base prediction>>
## For one block motif
./DIpartite -i <fasta> -n 1 -p 2 -m 6 -M 0 -g 0 -G 0 -o <output>

## For two block motif
./DIpartite -i <fasta> -n 2 -p 2 -m 6 -M 8 -g 11 -G 16 -o <output>
```

******************************************************
Arguments
```
-i input file
-m left motif width (default 6)
-M right motif width (default 6)
-g min gap between two motif blocks (default 0)
-G max gap between two motif blocks (default 0)
-t number of times trying to repeat process to find best motif (default 30)
-o output file (default output.txt)
-f 1 for fasta file, or 2 for text file (no header) (default 1)
-p 1 for the given strand, or 2 for both the given and reverse complement strands (default 1)
-n 1 for PWM, or 2 for DWM (default 1)
-s 1 for one occurrence motif site per sequence, or 2 for any number of repetitions (default 1)
```

*****
Reference
1. Mohammad V, Ishihara J, Takahashi H. 2018 in submitting

