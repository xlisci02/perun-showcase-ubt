# Perun fuzz demonstration on UBT

This is an example program that creates UBT, iteratively inserts elements to it and prints the final UBT.  The project was created to demonstrate the functionality of [Perun](https://github.com/xlisci02/perun) fuzzing machine. 


## Clone the repository
First step is to clone this repository with following command:

    git clone https://github.com/xlisci02/perun-showcase-ubt
	cd perun-showcase-ubt

## Build and run for example with seed and mutation file
Notice the time difference between the runtime with initial seed and its mutation.

	make
	time ./build/ubt seed2.txt
	time ./build/ubt worst-case-muts/worst_case22.txt

## Want to fuzz ? First initialize

Run the following and close the configuration file that pops up:

	perun init --vcs-type=git --configure

## Create output directory and start fuzz
The command for launching the fuzzing machine can look similar to this:

	mkdir output
	perun fuzz -b ./build/ubt -w seed2.txt -o output -t 900 -mp 1 -cr 8
