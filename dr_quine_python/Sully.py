#!/usr/bin/python

import sys
from subprocess import call

i = 5
j = 0

if i == 0:
	sys.exit()

if sys.argv[0][5] == ".":
	target = open("Sully_5.py", "w")
	j=5
else:
	target = open("Sully_" + str(i - 1) + ".py", "w+")
	j=i-1

command="python Sully_" + str(j) + ".py"
s1 = '#!/usr/bin/python\n\nimport sys\nfrom subprocess import call\n\ni = '
s2 = '\nj = 0\n\nif i == 0:\n\tsys.exit()\n\nif sys.argv[0][5] == ".":\n\ttarget = open("Sully_5.py", "w")\n\tj=5\nelse:\n\ttarget = open("Sully_" + str(i - 1) + ".py", "w+")\n\tj=i-1\n\ncommand="python Sully_" + str(j) + ".py"\n'
t = 't = %r'
s = '\ns = %r\ntarget.write(s1)\ntarget.write(str(j))\ntarget.write(s2)\ntarget.write("s1 = \'" + s1.replace("\\n", "\\\\n") + "\'\\n")\ns2 = s2.replace("\\n", "\\\\n")\ns2 = s2.replace("\\t", "\\\\t")\ntarget.write("s2 = \'" + s2 + "\'\\n")\ntarget.write(t%%t)\ntarget.write(s%%s)\ntarget.close()\ncall(command, shell=True)\n'
target.write(s1)
target.write(str(j))
target.write(s2)
target.write("s1 = '" + s1.replace("\n", "\\n") + "'\n")
s2 = s2.replace("\n", "\\n")
s2 = s2.replace("\t", "\\t")
target.write("s2 = '" + s2 + "'\n")
target.write(t%t)
target.write(s%s)
target.close()
call(command, shell=True)
