git submodule update --init --recursive
git submodule sync --recursive
git submodule update --recursive
git submodule foreach --recursive git checkout main
git submodule foreach --recursive git pull origin main
