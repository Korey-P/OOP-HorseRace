CXX = g++
CXXFLAGS = -Wall -std=c++11

TARGET = horse_race
OBJ = main.o Horse.o Race.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ)

main.o: main.cpp Race.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Horse.o: Horse.cpp Horse.h
	$(CXX) $(CXXFLAGS) -c Horse.cpp

Race.o: Race.cpp Race.h Horse.h
	$(CXX) $(CXXFLAGS) -c Race.cpp

clean:
	rm -f $(OBJ) $(TARGET)
