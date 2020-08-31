CC = g++
exe_file = run

$(exe_file): driver.o cave.o event.o flying.o location.o pokemon.o pokestop.o psychic.o rock.o player.o professor.o
	$(CC) driver.o cave.o event.o flying.o location.o pokemon.o pokestop.o psychic.o rock.o player.o professor.o -o $(exe_file)

debug: driver.cpp cave.cpp event.cpp flying.cpp location.cpp pokemon.cpp pokestop.cpp psychic.cpp rock.cpp player.cpp professor.cpp
	$(CC) driver.cpp cave.cpp event.cpp flying.cpp location.cpp pokemon.cpp pokestop.cpp psychic.cpp rock.cpp player.cpp professor.cpp -D DEBUG -o $(exe_file)

driver.o: driver.cpp
	$(CC) -c driver.cpp
cave.o: cave.cpp
	$(CC) -c cave.cpp
event.o: event.cpp
	$(CC) -c event.cpp
flying.o: flying.cpp
	$(CC) -c flying.cpp
location.o: location.cpp
	$(CC) -c location.cpp
pokemon.o: pokemon.cpp
	$(CC) -c pokemon.cpp
pokestop.o: pokestop.cpp
	$(CC) -c pokestop.cpp
psychic.o: psychic.cpp
	$(CC) -c psychic.cpp
rock.o: rock.cpp
	$(CC) -c rock.cpp
player.o: player.cpp
	$(CC) -c player.cpp
professor.o: professor.cpp
	$(CC) -c professor.cpp
clean:
	rm -f *.out *.o $(exe_file)

