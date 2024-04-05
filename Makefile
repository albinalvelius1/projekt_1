CXX=g++
WXFLAGS=`wx-config --cxxflags`
WXLIBS=`wx-config --libs`
SRC=App.cpp MainFrame.cpp
OUT=app

all:
	$(CXX) $(WXFLAGS) $(SRC) $(WXLIBS) -o $(OUT)
