#!/bin/bash

cortex="arm_cortex_m4_stm32f303"
firstrun="cmake_firstrun.sh"

debug_cortex="debug/$cortex"
release_cortex="release/$cortex"

mkdir -p $debug_cortex
mkdir -p $release_cortex

#Pr"ufen ob die Verzeichnisse leer sind und ggf. CMake Erstaufruf Script erstellen
if [ `find $debug_cortex -prune -empty` ]; then
  echo "cmake ../../../ -DCMAKE_BUILD_TYPE=debug && rm $firstrun" > $debug_cortex/$firstrun
  chmod +x $debug_cortex/$firstrun
fi

if [ `find $release_cortex -prune -empty` ]; then
  echo "cmake ../../../ -DCMAKE_BUILD_TYPE=release && rm $firstrun" > $release_cortex/$firstrun
  chmod +x $release_cortex/$firstrun
fi


