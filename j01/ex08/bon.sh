ldapsearch -LLL "last-name=*bon*" last-name 2> /dev/null | sed -n '/last-name:/p' | wc -l | sed 's/ //g' 
