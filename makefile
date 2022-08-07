FLAGS = -g -c --std=c++17


all:
	mkdir -p obj
	mkdir -p bin
	
	g++ $(FLAGS) src/tienda.cpp -o obj/tienda.o
	g++ $(FLAGS) src/producto.cpp -o obj/producto.o

	mkdir -p bin/include
	cp src/lib.h src/producto.h src/tienda.h ./bin/include

test1:
	mkdir -p obj
	mkdir -p bin

	g++ $(FLAGS) src/tienda.cpp -o obj/tienda.o
	g++ $(FLAGS) src/producto.cpp -o obj/producto.o
	g++ $(FLAGS) tests/test_producto.cpp -o bin/test_producto.o
	g++ $(FLAGS) tests/test_tienda.cpp -o bin/test_tienda.o

	g++ -g -o bin/tests bin/producto.o bin/test_producto.o bin/test_tienda.o bin/tienda.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin
	rm *.dat