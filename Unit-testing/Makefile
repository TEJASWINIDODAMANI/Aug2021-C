SRC	= feature.c\
test_feature.c\
../Unity/src/unity.c

INC = -I ../Unity/src

Feature.out: $(SRC)
	gcc $^ $(INC) -o $@

run: Feature.out
	./$^

coverage: $(SRC)
	gcc  $(INC)  -fprofile-arcs -ftest-coverage $^ -o Test.out
	./Test.out
	gcov -a feature.c

clean: 
	rm -rf *.gcda *.gcno *.gcov *.out