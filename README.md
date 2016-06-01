# test_cmake

go into build, start script create.sh

this will create a debug and release folder, containing scripts for initial cmake run

go into release and run 

cmake_firstrun.sh
make package

this will fail because of cross dependency between uart.h and syslog.h

open src/drivers/CMakeLists.txt and uncomment hack in target_include_directories function

it should work now
