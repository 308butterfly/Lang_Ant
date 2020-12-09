#Author:  Andrew Thiele
#Email:  <thielea@oregonstate.edu>
#Makefile for project1

#inspiration take from Harlan James <waldroha@oregonstate.edu>

#source files:  

#Description:  Creates object files from source files to c++11 standard and
#              deletes .o and bin(executables) with "clean" command.
#
#              Checks for memory leaks with Valgrind
#              with 'val' command.
#
CXX = g++
CXXFLAGS = -std+c++11
CXXFLAGS += -Wall
CXXFLAGS += -pendantic-erros
CXXFLAGS += -g

LDFLAGS = -lboost_date_time

OBJS = source.o
SRCS = source.cpp

HEADERS = source.hpp

#target: dependencies
#don't forget next line has a tab
#	rule to build

output: 

source.o: source.cpp
	g++ -std=c++11 -c source.cpp

#output: ${OBJS} ${HEADERS}
#	${CXX} ${LDFLAGS} ${OBJS} -o output
#
#${OBJS}: ${SRCS}
#	${CXX} ${CXXFLAGS} -c $(@:.o = .cpp)
	 	
val:
	valgrind --leak-check=full ./output
clean:
	rm *.o output
