CC=gcc
CXX=g++
CFLAGS=
CXXFLAGS=

%:%.c
	-$(CC) -E $< -o $@.tmp1.c
	-$(CC) -E -trigraphs $@.tmp1.c -o $@.tmp2.c
	$(CC) $(CFLAGS) $@.tmp2.c -o $@.o
	make clean

%:%.cpp
	-$(CXX) -E $< -o $@.tmp1.cpp
	-$(CXX) -E -trigraphs $@.tmp1.cpp >> $@.tmp2.cpp
	$(CXX) $(CXXFLAGS) $@.tmp2.cpp -o $@.o
	make clean

clean:
	-rm *.tmp*.*