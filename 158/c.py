T = int(raw_input())

#declare path outside the loop else it is lost every iteration
path = ["/"]

while T :

	cmd = raw_input()

	cmd = cmd.split(" ")

	if cmd[0] == "pwd" :

			print "".join(path)


	elif cmd[0] == "cd":

		temp = str(cmd[1])

		# Take care of absolute paths
		if temp[0] == "/":

			path = []

			temp = cmd[1].split("/")

			for segment in temp:

				if segment == "..":
					#pop the / and the segment
					path.pop()
					path.pop()

				else :
					path.append(segment)
					path.append("/")


		#relative paths
		elif temp[0] != "/":

			temp = cmd[1].split("/")

			for segment in temp:

				if segment == "..":
					path.pop()
					path.pop()

				else :
					path.append(segment)
					path.append("/")


	T = T - 1