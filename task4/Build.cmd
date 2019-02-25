mkdir _build
cd _build

set PATH=C:\Users\User\Desktop\Deyy\task4;%PATH%

cmake^
	-G "MinGW Makefiles"^
	-D CMAKE_INSTALL_PREFIX=C:\Users\User\Desktop\Deyy\task4\installer^
	C:\Users\User\Desktop\Deyy\task4\Build.cmd
	
mingw32-make
cmake -D COMPONENT=developer -P cmake_install.cmake

cd ..