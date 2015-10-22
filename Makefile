all: cpu-optimizations.pdf

cpu-optimizations.pdf: cpu-optimizations.md
	pandoc -t beamer -s $< -o $@
