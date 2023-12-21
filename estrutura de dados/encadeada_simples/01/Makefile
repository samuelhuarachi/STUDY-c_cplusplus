APPS = ./apps
BIN = ./bin
INCLUDE = ./include
OBJ = ./obj
SRC = ./src
LIB = ./lib

FLAGS = -o3 -Wall
LIBS = -lm -led -L $(LIB)

all: libed myapps

libed: \
	$(OBJ)/float_vector.o \
	$(OBJ)/linked_list.o
	ar -rcs $(LIB)/libed.a $(OBJ)/*.o

myapps: clean_apps \
	$(BIN)/test_float_vector \
	$(BIN)/enc1

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< $(LIBS) -I $(INCLUDE) -o $@

run:
	$(BIN)/enc1

clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

clean_apps:
	rm -rf $(BIN)/*