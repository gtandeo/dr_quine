#!/usr/bin/python

def	test():
	i=0

def	main():
	test()
	"""
	commentaire1
	"""
	s = '#!/usr/bin/python\n\ndef\ttest():\n\ti=0\n\ndef\tmain():\n\ttest()\n\t"""\n\tcommentaire1\n\t"""\n\ts = %r\n\tprint(s%%s)\n\n"""\ncommentaire2\n"""\n\nif __name__ == "__main__":\n\tmain()'
	print(s%s)

"""
commentaire2
"""

if __name__ == "__main__":
	main()
