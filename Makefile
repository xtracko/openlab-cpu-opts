all: cpu-optimizations.pdf

cpu-optimizations.pdf: cpu-optimizations.md
	pandoc -i -t beamer -s $< -o $@
