#!/bin/bash

sudo make clean
git add --all .
echo "Write your commit message!"
read -r input
git commit -m "$input"
git push
echo "Git Push Done"
