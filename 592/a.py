board, winner = [], None
for i in xrange(0, 8):
	board.append(raw_input())

w_dist, b_dist = 9,9
for column in xrange(0, 8):
	has_white, has_black = False, False
	w_ind, b_ind = 9, 9
	for row in xrange(0, 8):
		if board[row][column] == 'W':
			has_white = True
			w_ind = min(w_ind, row)

		if board[row][column] == 'B':
			has_black = True
			b_ind = min(b_ind, 8 - row)
	
	if has_black and has_white:
		if -(b_ind - 8) < w_ind:
			continue

	else:
		if has_white and w_ind < w_dist:
			sol = 'A'
			w_dist = w_ind

		elif has_black and b_ind < b_dist:
			sol = 'B'
			b_dist = b_ind


if w_dist < b_dist:
	print 'A'
elif w_dist == b_dist:
	print 'A'
else:
	print 'B'

	