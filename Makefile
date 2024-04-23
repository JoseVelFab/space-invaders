bin/test : src/ftx_test.cpp
	g++ src/ftx_test.cpp -o bin/test -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude  

runtest : bin/test
	./bin/test

bin/space : src/main.cpp
	g++ src/main.cpp -o bin/space -std=c++2a -lftxui-screen -lftxui-component -lftxui-dom -Iinclude        

run : bin/space
	./bin/space
