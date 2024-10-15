check: 
	cov-configure --gcc
	cov-build --dir=./coverity_out g++ -c -o out.o foo.cpp
	cov-analyze --coding-standard-config=../autosarcpp14-all.config --dir=./coverity_out
	cov-format-errors --checker-regex 'A13-5-2' --dir ./coverity_out --emacs-style