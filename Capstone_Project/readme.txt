- To build on the native machine :
    1-open terminal and run
    mkdir build
     cd build
     cmake ..    
     make

**************************************
- To build for  the cross machine (rpi4) :
    
    1- d boost_version 
    2-touch user-config.jam
    3-Write the following line inside user-config.jam
    using gcc : aarch64 : aarch64-rpi4-linux-gnu-g++ ;
    6- ./bootstrap
    7- ./b2 toolset=gcc-aarch64 target-os=linux --user-config=user-config.jam --prefix=/home/usr/boost-rpi
    8- open CMakeLists.txt
    Edit CMakeLists.txt:
    set(BOOST_ROOT "/home/john")
    set(CMAKE_CXX_COMPILER "/home/john/x-tools/aarch64-rpi4-linux-gnu/bin/aarch64-rpi4-linux-gnu-g++")
    *** Special Thanks to John Emile to help me in tjis step ***
    9-open my CMakeLists.txt and remove # from line 6 and 7 then save
    10-open terminal and run
        mkdir build_crosscompiler
        cd build_crosscompiler
        cmake ..    
        make

     
