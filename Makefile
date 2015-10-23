all: cpu-optimizations.tex

cpu-optimizations.tex: cpu-optimizations.md
	pandoc -i -t beamer -s $< -o $@
