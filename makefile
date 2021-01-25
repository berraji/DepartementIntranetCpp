CMP = g++
FLAGS = -O2 -Wall

all:formation.o entite.o
	$(CMP) $(FLAGS) *.cpp -o gestionnaire

