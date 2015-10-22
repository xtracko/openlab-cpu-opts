all: prez.md
	pandoc -t beamer -s prez.md -o optimalizations.pdf
