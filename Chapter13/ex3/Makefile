CXX = g++
CXXFLAGS = -g -Wall -Wextra

TARGET_EXEC := usedma.out

SRCS := $(shell find -name "*.cpp")
OBJS := $(SRCS:.cpp=.o)

$(TARGET_EXEC): $(OBJS)
	@$(CXX) $(OBJS) -o $@ $(LDFLAGS)
	@echo "\tGenerating $@"

%.o : %.cpp
	@$(CXX) -c $(CXXFLAGS) $< -o $@
	@echo "\tCXX $@"

.PHONY: clean
clean:
	@rm -r $(OBJS) *.out
	@echo "Removing $(OBJS)" $(TARGET_EXEC)
