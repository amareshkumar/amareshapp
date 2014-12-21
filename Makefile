cc=g++
CC_FLAG=-Wall -O2 -g -std=c++11
MY_FLAGS=Singleton

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
amareshapp : $(objects)
	cc -o $(CC_FLAG) $(MY_FLAGS) amareshapp $(objects)
clean:
	rm -f *.o amareshapp
        