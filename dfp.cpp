Type token = {Num_int, Sta_real, Dyn_real};
var state : integer;
Function NextToken : token
begin
	var exitflag : bool;
	state := 0;
	exitflag := false;
	repeat:
		switch(state):
			case 0: c:= nextchar();
			switch(c):
				case blank:
				case tab:
				case newline:
					state := 0;
					break;
				if isnumber(c):
					state := 1;
				break;
			case 1: c := nextchar();
				if isnumber(c):
					state := 1;
				if c == '.':
					state:= 3;
				if c is E:
					state := 6;
				else:
					state := 2;
				break;
			case 2: 
				retract(1); 
				install_num();
				NextToken := Num_int;
				break;
			case 3: c := nextchar();
				if  isnumber(c):
					state := 4;
				break;
			case 4: c := nextchar();
				if isnumber(c): state := 4;
				if c is E: state := 6;
				else: state := 5;
				break;
			case 5: 
				retrac(1); 
				install_num();
				NextToken := Sta_real;
				break;
			case 6: c:=nextchar();
				if c == "+" | c == "-":
					state := 7;
				if isnumber(c): state : = 8;
			 case 7:  c := nextchar()
			 	if isnumber(c): state := 8;
			 	break;
			 case 8: c := nextchar();
			 	if isnumber(c): state := 8;
			 	else: state := 9;
			 	break;
			 case 9: 
			 	retrac(1);
			 	NextToken := Dyn_real;
			 	break;

	until exitflag == true;


const Table[7][5] of integer;
Type token = {Num_int, Dyn_real, Sta_real};
Function NextToken : token
begin
	var state := int;
	state := 0;
	repeat:
		c := nextchar();
		state := table[state, LoaiKiTu(c)];
	until state in [2, 5, 9, 20];
	switch(state):
		case 2:
			retract(1);
			install_num(); 
			NextToken := Num_int;
			break;
		case 5:
			retract(1);
			install_num();
			NextToken := Sta_real;
			break;
		case 9:
			retract(1);
			NextToken := Dyn_real;
		case 20:
			retract(1);
			NextToken := LOI;
end.


