bin/test : SCR/ftx_test.cpp
	g++ SCR/ftx_test.cpp -o bin/test -stdxc++20

ejecutar : bin/test
	./bin/test

hola : 