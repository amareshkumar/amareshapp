cc=g++
CC_FLAG=-O2 -g -std=c++0x -mtune=i386 -Wc++0x-compat
#MY_FLAGS=Singleton

objects := $(patsubst %.cpp,%.o,$(wildcard *.cpp))
objects := $(filter-out programming.cpp ThrustActivities.cpp, $(wildcard *.cpp))
amareshapp : $(objects)
	cc $(CC_FLAG) -o amareshapp $(objects)
clean:
	rm -f *.o amareshapp
        
