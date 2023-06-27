all: make_dir create_files
	echo "<< all executed >>"

# prepares directories
make_dir:
	mkdir -p d1 d2 d3
	echo "<< make_dir executed >>"

# creates source files in prepared directories
create_files:
	touch d1/d1.c d2/d2.c d3/d3.c
	echo "<< create_files executed >>"

# clears directories and files
clear:
	-rm -r d1 d2 d3
	echo "<< clear executed >>"