bin/test : src/ftx_test.cpp
	g++ src/ftx_test.cpp -o bin/test -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom

ejecutar : bin/test
	./bin/test