rm -rf build
rm -rf run
mkdir build
cd build
cmake ..
cmake --build .
cd ..
mkdir run
cd run
mv ../build/files-in-c .
