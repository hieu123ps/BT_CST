type Token := {name, func, numInt, numF, Math};
	var state : int;
	state := 0;

Function NextToken : Token
begin:

	var exitflag : boolean;
	exitflag := false;
	var temp : boolean;
	temp = true;
	repeat:
		switch(state)
			begin:
				case 0: c := nextchar();
				switch(c)
				begin:
					case blank:
					case newline:
					case tab:
						state := 0;
						break;
				end.
				if isalpha(c):
					state := 1;
				else if isnumber(c):
					state := 6;
				else:
					exitflag = true;
					NextToken := ERROR;
				case 1: c:= nextchar();
					if isalpha(c) or isnumber(c):
						state := 1;
					else:
						state := 2;
				case 2:
					c:= nextchar();
					if c == "(":
						state := 4;
					else:
						state := 3;
				case 3:
					retract(1);
					install_id();
					NextToken := name;
					exitflag := true;
				case 4: c:= nextchar();
					if c == ")":
						state := 5;
				case 5:
					retract(1);
					install_id();
					NextToken := func;
					exitflag := true;
				case 6: c:= nextchar();
					if isnumber(c):
						state := 6;
					else if c == ".":
						state := 7;
					else:
						state := 8;
						temp := false;
				case 7: c := nextchar();
					if isnumber(c):
						state := 7; 
					else:
						state := 8;
				case 8:
					if temp == true:
						state := 13;
					else:
						state := 12;
				case 12:
					retract(1);
					install_num();
					NextToken := numInt;
					exitflag := true;
				case 13:
					retract(1);
					install_num()
					NextToken := numF;
					exitflag := true;

			end.
	until (exitflag == true);

