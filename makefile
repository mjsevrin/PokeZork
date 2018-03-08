
## SETTINGS ##
CXX = g++
CXXFLAGS = -std=c++0x 
CXXFLAGS += -Wall 
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
#CXXFLAGS += -O3
#LDFLAGS = 


## FILES - change these as needed ##

# Default files - likely correct
OBJS = PokeZork.o validate.o  menu.o
HEADERS = validate.hpp  menu.hpp

# Project specific - Change as needed
OBJS += Game.o Space.o Ash.o Pokemon.o House.o Village.o OakLab.o 
OBJS += Wilderness.o
HEADERS += Game.hpp Space.hpp Ash.hpp Pokemon.hpp House.hpp Village.o OakLab.hpp 
HEADERS += Wilderness.hpp 
# Output name
OUTPUT = Play_Game


## PROCEDURES - all automated based on FILES ##
# Linking Objects
${OUTPUT}: ${OBJS} ${HEADERS}
	${CXX} ${LDFLAGS} ${OBJS} -o $@ 

# Creating Objects
%.o: %.cpp
	${CXX} ${CXXFLAGS} -c $<

# CleanUp (ignores errors)
clean:
	rm -f ${OBJS} ${OUTPUT}
