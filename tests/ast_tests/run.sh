make clean && make
./parser testfile.txt > ast.dot
dot -Tpng ast.dot -o ast.png