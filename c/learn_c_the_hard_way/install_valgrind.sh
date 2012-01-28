#!/usr/bin/env sh

# 1) Download it
curl -O http://valgrind.org/downloads/valgrind-3.6.1.tar.bz2

# 2) use md5sum to make sure it matches the one on the site
md5sum valgrind-3.6.1.tar.bz2

# 3) Unpack it
tar -xjvf valgrind-3.6.1.tar.bz2

# 4) Change to that directory
cd valgrind-3.6.1

# 5) Configure it
./configure

# 6) Make it
make

# 7) Install it (as root)
#sudo make install

# 8) Change back to higher directory and remove valgrind
#cd ..
#rm -rf valgrind-3.6.1
