ldapsearch -LLL "objectclass=apple-user" uid | sed -n '/uid:/p' | sed 's/uid: //g' | sort -r -f
