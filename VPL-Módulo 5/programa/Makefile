CC=g++
CFLAGS=-std=c++11 -Wall
TARGET=vpl_execution

BUILD_DIR    = ./build
SRC_DIR    = ./src
INCLUDE_DIR  = ./include

${BIN}/${TARGET}: ${BUILD_DIR}/Pessoa.o ${BUILD_DIR}/Funcionario.o ${BUILD_DIR}/Professor.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BIN}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/Pessoa.o: ${INCLUDE_DIR}/entidades/Pessoa.hpp ${SRC_DIR}/entidades/Pessoa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/entidades/ -c ${SRC_DIR}/entidades/Pessoa.cpp -o ${BUILD_DIR}/Pessoa.o

${BUILD_DIR}/Funcionario.o: ${INCLUDE_DIR}/entidades/Funcionario.hpp ${SRC_DIR}/entidades/Funcionario.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/entidades/ -c ${SRC_DIR}/entidades/Funcionario.cpp -o ${BUILD_DIR}/Funcionario.o

${BUILD_DIR}/Professor.o: ${INCLUDE_DIR}/entidades/Professor.hpp ${SRC_DIR}/entidades/Professor.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/entidades/ -c ${SRC_DIR}/entidades/Professor.cpp -o ${BUILD_DIR}/Professor.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/entidades/Pessoa.hpp ${INCLUDE_DIR}/entidades/Funcionario.hpp ${INCLUDE_DIR}/entidades/Professor.hpp ${SRC_DIR}/main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/entidades/ -c ${SRC_DIR}/main.cpp -o ${BUILD_DIR}/main.o

# Rule for cleaning files generated during compilation. program
# Call 'make clean' to use it
clean:
	rm -f ${BIN}/* 