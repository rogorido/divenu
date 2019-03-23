#!/bin/sh

cd git && git clone https://github.com/rogorido/divenu.git && cd divenu

sudo cp divenu.desktop /usr/share/applications/
sudo chmod 644 /usr/share/applications/divenu.desktop

mkdir build && cd build && cmake .. && make

