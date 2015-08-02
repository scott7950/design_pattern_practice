run: clean main.out Singleton.class Main.class
	./main.out
	java Main

%.class: %.java
	javac $<

%.o: %.cpp
	g++ -c $< -o $@ -std=c++11

main.out: main.o Singleton.o
	g++ $^ -o main.out -std=c++11

clean:
	rm -rf *.o *.out *.class

.PHONY: run clean
	
