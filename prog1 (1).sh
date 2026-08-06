#!/bin/bash

echo "Enter directory name:"
read dir

cp -r "$dir" "${dir}_backup"

echo "Backup created successfully."