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
	$(OBJ)/list.o \
	$(OBJ)/circ_list.o \
	$(OBJ)/static_stack.o \
	$(OBJ)/stack.o \
	$(OBJ)/static_queue.o \
	$(OBJ)/queue.o
	ar -rcs $(LIB)/libed.a $(OBJ)/*.o

myapps: clean_apps \
	$(BIN)/test_float_vector \
	$(BIN)/enc2

$(OBJ)/%.o: $(SRC)/%.c $(INCLUDE)/%.h
	gcc $(FLAGS) -c $< -I $(INCLUDE) -o $@

$(BIN)/%: $(APPS)/%.c
	gcc $(FLAGS) $< $(LIBS) -I $(INCLUDE) -o $@

run:
	$(BIN)/enc2

clean:
	rm -rf $(BIN)/* $(LIB)/* $(OBJ)/*

clean_apps:
	rm -rf $(BIN)/*