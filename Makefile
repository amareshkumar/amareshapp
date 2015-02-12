cc=g++
CC_FLAG=-Wall -O2 -g -std=c++11 -std=c++0x -mtune=i386 -Wc++0x-compat
#MY_FLAGS=Singleton

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
amareshapp : $(objects)
	cc -std=c++0x $(CC_FLAG) -o amareshapp $(objects)
clean:
	rm -f *.o amareshapp
        
