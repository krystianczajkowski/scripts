#!/usr/bin/env bash

echo 'Downloading a fresh tutor';
curl 'https://raw.githubusercontent.com/vim/vim/master/runtime/tutor/tutor' -o tutor;
nvim 'tutor'
