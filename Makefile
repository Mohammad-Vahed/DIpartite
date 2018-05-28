CC = g++
CFLAGS = -Wall
DIpartite: DIpartite.cxx
	$(CC) $(CFLAGS) -o DIpartite DIpartite.cxx

clean:
	rm DIpartite

