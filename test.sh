mkdir -p tests &&
echo "Creating test directory" &&
cp examples/Русский_забор.cpp tests/ &&
cp examples/связный_список.cpp tests/ &&
cp examples/Слава_Руси.cpp tests/ &&
cp examples/Сортировочка_2.cpp tests/ &&
cp examples/Сортировочка.cpp tests/ &&
cp header/Ве_крест_крест.h tests/ &&
mkdir -p tests/cpp &&
cp header/cpp/sort_static.cpp tests/cpp &&
echo "Creating test header" &&
cd tests &&
echo "Moving test directory" &&
g++ Русский_забор.cpp &&
g++ связный_список.cpp &&
g++ Слава_Руси.cpp &&
g++ Сортировочка_2.cpp &&
g++ Сортировочка.cpp &&
echo "all complete" &&
cd .. &&
rm -r tests &&