#!/usr/bin/python

target = open("Grace_kid.py", "w+")
"""
commentaire1
"""
s = '#!/usr/bin/python\n\ntarget = open("Grace_kid.py", "w+")\n"""\ncommentaire1\n"""\ns = %r\ntarget.write(s%%s)\ntarget.close()\n'
target.write(s%s)
target.close()
