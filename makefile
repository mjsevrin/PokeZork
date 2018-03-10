
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
OBJS += Game.o Space.o getRand.o Ash.o Pokemon.o House.o Village.o
OBJS += Wilderness.o PokeCenter.o PokeShop.o Gym.o Graphics.o OakLab.o 
HEADERS += Game.hpp Space.hpp Ash.hpp getRand.hpp Pokemon.hpp House.hpp Village.o 
HEADERS += Wilderness.hpp PokeCenter.hpp PokeShop.hpp Gym.hpp Graphics.hpp OakLab.hpp
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
