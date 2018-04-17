# This is the same example using the Python3 programming language

with open('example.txt','w') as outFile:
	inputString = 'dummy'
	while len(inputString) > 0:
		inputString = input('Type Something: ')
		outFile.write(inputString+'\n')
	
