FLAGS = -g -c --std=c++17


all:
	mkdir -p obj
	mkdir -p bin
	
	g++ $(FLAGS) src/lib.cpp -o obj/lib.o
	g++ $(FLAGS) src/producto.cpp -o obj/producto.o
	g++ $(FLAGS) src/inventarioTienda.cpp -o obj/inventarioTienda.o
	

	g++ -shared -o bin/libreria.so obj/lib.o
	mkdir -p bin/include
	cp src/lib.h src/producto.h src/inventarioTienda.h ./bin/include

test:
	mkdir -p obj
	mkdir -p bin

	g++ $(FLAGS) src/lib.cpp -o obj/lib.o
	g++ $(FLAGS) src/producto.cpp -o obj/producto.o
	g++ $(FLAGS) src/inventarioTienda.cpp -o obj/inventarioTienda.o
	
	g++ $(FLAGS) tests/lib_test.cpp -o obj/lib_test.o

	g++ -g -o bin/tests obj/lib.o obj/lib_test.o obj/producto.o obj/inventarioTienda.o -lgtest -lgtest_main -lpthread

clean:
	rm -Rf bin
	rm *.dat
