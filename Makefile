# C++ Compiler
CXX := g++

# Flags
#   Compiler
CXXFLAGS += -c -g -Wall -std=c++11
#   Linker
LDFLAGS += -g 
#
#   Library
LIBFLAGS := -lpthread
#
#   Include
INCLUDEFLAGS :=
#
# Program name
EXE := atc
#
# Directories
#
#   Headers
HEADERDIR := include
#
#   Sources
SRCDIR := src
#
#   Objects
OBJDIR := obj
#   Binary
BINDIR := bin
################################################################################

HEADERS := $(wildcard $(HEADERDIR)/*.h)
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(subst $(SRCDIR)/,$(OBJDIR)/,$(SRCS:.cpp=.o))

CXXFLAGS += $(INCLUDEFLAGS) -I$(HEADERDIR)
LDFLAGS += $(LIBFLAGS)

.PHONY: all clean 

all: $(BINDIR)/$(EXE)

$(BINDIR)/$(EXE): $(OBJS)
	mkdir -p $(BINDIR)
	$(CXX) $(LDFLAGS) $? -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -f $(OBJDIR)/*.o $(BINDIR)/$(EXE)

