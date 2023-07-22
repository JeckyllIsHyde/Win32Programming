EXE=win32-app.exe
CPP=main.cpp
RES=resource.rc

$(EXE): $(CPP) $(RES).res.o
	g++ -o $@ $^

$(RES).res.o: $(RES)
	windres -o $@ -i $^

clean:
	rm -f *.o *.exe
