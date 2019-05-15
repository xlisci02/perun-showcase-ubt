# perun-showcase-ubt

```
# clone
git clone https://github.com/xlisci02/perun-showcase-ubt
cd perun-showcase-ubt

# build and run
make
time ./build/ubt seed2.txt
time ./build/ubt worst-case-muts/worst_case22.txt

# to fuzz, first initialize as perun repo
perun init --vcs-type=git --configure

# create output directory for fuzzing
mkdir output

# fuzz example
perun fuzz -b ./build/ubt -w seed2.txt -o output -t 900 -mp 1 -cr 8
```
