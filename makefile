Main:	Main.o Real.o Racional.o Radical.o
	g++ Main.o Real.o Racional.o Radical.o -o Main

Main.o:	Main.cpp Real.h Racional.h Radical.h
	g++ -c Main.cpp

Real.o:	Real.cpp Real.h
	g++ -c Real.cpp

Racional.o:	Racional.cpp Racional.h Real.h
	g++ -c Racional.cpp

Radical.o:	Radical.cpp Radical.h Real.h
	g++ -c Radical.cpp


clean:	
	rm -f *.o Main