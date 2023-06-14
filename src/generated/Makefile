# Variablen
CXX = g++
CXXFLAGS = -std=c++11
SRCDIR = ./
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = program

# Regel für die Erstellung des ausführbaren Programms
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $@

# Regel für die Kompilierung der Quelldateien
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# "clean"-Regel zum Löschen der generierten Dateien
clean:
	rm -f $(OBJECTS) $(Einparker)