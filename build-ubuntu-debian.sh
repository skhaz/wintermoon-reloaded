#!/bin/sh

echo "[Downloading and installing dependencies]"
sudo apt-get install g++
sudo apt-get install scons
sudo apt-get install python-yaml
sudo apt-get install libsdl1.2-dev
sudo apt-get install libsdl1.2-image-dev
sudo apt-get install libphysfs-dev

echo "[Building Wintermoon]"
scons
