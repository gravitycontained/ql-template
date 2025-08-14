#!/bin/bash

set -e

git submodule sync --quiet --recursive

git submodule update --init --quiet --recursive

git submodule foreach --quiet --recursive '
  branch=$(git symbolic-ref --short HEAD 2>/dev/null || echo "")
  if [ "$branch" != "main" ]; then
    echo "Switching to main in $name"
    git checkout main --quiet
  fi

  echo "Pulling latest changes for $name"
  git pull --quiet origin main || echo "Failed to pull $name"
'

echo "Submodules are up-to-date."
echo ""
read -p "Press [Enter] to continue..."
