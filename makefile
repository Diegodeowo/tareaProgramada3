FLAGS = -g -c --std=c++17


all:
	mkdir -p bin
	g++ $(FLAGS) src/main.cpp -o bin/main.o
	g++ $(FLAGS) src/producto.cpp -o bin/producto.o
	g++ $(FLAGS) src/inventarioTienda.cpp -o bin/inventarioTienda.o
	g++ -o bin/a bin/main.o bin/producto.o bin/inventarioTienda.o
	
test:
	mkdir -p bin
	g++ $(FLAGS) src/producto.cpp -o bin/producto.o
	g++ $(FLAGS) src/inventarioTienda.cpp -o bin/inventarioTienda.o
	g++ -o bin/a bin/main.o bin/producto.o bin/inventarioTienda.o

	g++ $(FLAGS) tests/inventarioTienda_test.cpp -o bin/inventarioTienda_test.o
	# g++ -g -o bin/tests bin/producto.o bin/inventarioTienda.o bin/inventarioTienda_test.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin
	rm *.dat
