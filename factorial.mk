# build an executable named factorial from main.cpp
GTEST_DIR := googletest/googletest
  all: GTEST/GTEST/main.cpp 
	g++ -isystem ${GTEST_DIR}/include -I${GTEST_DIR} \
	-pthread -c ${GTEST_DIR}/src/gtest-all.cc 
	ar -rv libgtest.a gtest-all.o
	g++ -isystem ${GTEST_DIR}/include -pthread GTEST/GTEST/main.cpp libgtest.a \
	-o factorial

  clean: 
	$(RM) factorial