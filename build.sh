#!/bin/bash

rm -rf pkg/ src/ *.tar.zst
makepkg -Csfi --noconfirm
