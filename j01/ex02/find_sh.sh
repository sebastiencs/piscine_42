find . \( -name '*.sh' \) -print | sed 's/\(.*\)\///g' | sed 's/\.sh//g'
