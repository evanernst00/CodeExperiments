TARGET = random
SRC_DIR = src
INC_DIR = include
SRC_FILES = main.cpp randInt.cpp randomPy.cpp uniform.cpp

# NO EDITS BELOW THIS LINE

CXX = g++
CXXFLAGS = -I$(INC_DIR)
OBJECTS = $(SRC_FILES:%.cpp=$(SRC_DIR)/%.o)
ifeq ($(shell echo "Windows"), "Windows")
	TARGET := $(TARGET).exe
	DEL = del
else
	DEL = rm
endif

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^

$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	$(DEL) $(TARGET) $(OBJECTS)
