#!/usr/bin/env bash

# Desativa o modo de depuração
PS4='+ $(date "+%Y-%m-%d %T") $BASH_SOURCE:$LINENO: '
set -x

# main
git fetch
git reset --hard HEAD
git merge '@{u}'

# Desativa o modo de depuração
set +x

