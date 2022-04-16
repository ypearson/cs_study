CXX_FLAGS=-std=c++17
FORMAT=clang-format -i *.cpp

binary_search:
	$(FORMAT)
	g++ $(CXX_FLAGS) $@.cpp -o $@.bin
